#include "GUI.h"
#include "Graphics.h"
#include "StormfighterApp.h"
#include <locale>
#include <iostream>
#include <string>
#include <sstream>
#include <Awesomium/KeyboardCodes.h>
#include <OgreHardwarePixelBuffer.h>
#include <OgreTexture.h>
#include <OgreBitwise.h>

namespace SF {

GUI::GUI(StormfighterApp* app) : Module(app){
  renderBuffer_ = NULL;
  Ogre::Viewport* viewport = Graphics::getSingletonPtr()->defaultViewport();
  width_ = viewport->getActualWidth();
  height_ = viewport->getActualHeight();
  awe_webcore_initialize(false,true,false,
                         awe_string_empty(), awe_string_empty(),awe_string_empty(),
                         AWE_LL_VERBOSE, false,
                         awe_string_empty(),
                         true,
                         awe_string_empty(),awe_string_empty(), awe_string_empty(), awe_string_empty(),awe_string_empty(),awe_string_empty(),
                         true, 0, true, false, awe_string_empty());
  // Create a new WebView instance with a certain width and height, using the
  // WebCore we just created
  LOG("Wanted dimensions:"+STRING(width_)+","+STRING(height_));
  createMaterial();
  webView_ = awe_webcore_create_webview(viewTexture_->getWidth(), viewTexture_->getHeight(), false);
  SString page = "../../ui/editor.html";
  awe_webview_set_transparent(webView_, true);
  url_str_ = awe_string_create_from_ascii(page.c_str(), strlen(page.c_str()));
  awe_webview_load_file(webView_, url_str_, awe_string_empty());
  // Destroy our URL string
  LOG("Creating WV:"+STRING(viewTexture_->getWidth())+","+STRING(viewTexture_->getHeight()));
  OverlayPosition pos(0, 0);
  overlay_ = new ViewportOverlay("AWE_overlay", viewport, viewTexture_->getWidth(), viewTexture_->getHeight(), pos, "awesomium_mat", 0, TIER_FRONT);
  // if we can't use NPOT, then strech the texture onto the viewport
  if(compensateNPOT_)
      overlay_->panel->setUV(0, 0, width_/viewTexture_->getWidth(), height_/viewTexture_->getHeight());
  // init sdktraymanager
  trayManager_ = new OgreBites::SdkTrayManager("TrayMgr", Graphics::getSingletonPtr()->defaultRenderWindow(), application()->input()->mouse_, this);
  trayManager_->showFrameStats(OgreBites::TL_BOTTOMLEFT);
  trayManager_->showLogo(OgreBites::TL_BOTTOMRIGHT);
  trayManager_->hideCursor();
  counter = 0.0f;
  application()->input()->setGUI(this, this);
  ready_ = false;
}

void GUI::initialise() {
  bool loaded = false;
  for (int i = 0; i < 1000; i++){
    // We must call WebCore::update in our update loop.
    awe_webcore_update();
    if (!awe_webview_is_loading_page(webView_)){
        //Sleep(100);
        awe_webcore_update();
        loaded = true;
        LOG("loaded at = "+STRING(i));
        break;
    }
    // Sleep a little bit so we don't consume too much CPU while waiting
    // for the page to finish loading.
    //Sleep(1);
  }
  if(loaded){
    displayWebView();
  }
  awe_webview_focus(webView_);
}

GUI::~GUI(){
  awe_string_destroy(url_str_);
  delete trayManager_;
  LOG("~GUI: trayManager destroyed");
  trayManager_ = NULL;
 // Destroy our WebView instance
  awe_webview_destroy(webView_);
  LOG("~GUI: webview destroyed");
  delete[] temp_;
  LOG("~GUI: temp destroyed");
  for (int i = 0; i < 100; i++){
    Sleep(100);
    awe_webcore_update();
  }
  //boost::this_thread::sleep(boost::posix_time::milliseconds(100));
  // Destroy our WebCore instance
  awe_webcore_shutdown();
  LOG("~GUI: webcore shut down");
}

void GUI::update(double deltaTime){
  Ogre::FrameEvent evt;
  evt.timeSinceLastFrame = deltaTime;
  trayManager_->frameRenderingQueued(evt);
  counter += deltaTime;
  if(counter > 0.05f){
    awe_webcore_update();
    counter = 0.0f;
    if(awe_webview_is_dirty(webView_)){
      if (!awe_webview_is_loading_page(webView_)){
        ready_ = true;
        displayWebView();
      }
    }
  }
}

void GUI::createMaterial(){
  compensateNPOT_ = false;
  texWidth = width_;
  texHeight = height_;
	if(opacity_ > 1)
    opacity_ = 1;
	else if(opacity_ < 0)
    opacity_ = 0;

	if(!Ogre::Bitwise::isPO2(width_) || !Ogre::Bitwise::isPO2(height_)){
		if(Ogre::Root::getSingleton().getRenderSystem()->getCapabilities()->hasCapability(Ogre::RSC_NON_POWER_OF_2_TEXTURES)){
			if(Ogre::Root::getSingleton().getRenderSystem()->getCapabilities()->getNonPOW2TexturesLimited()){
        LOG("Limited nonPOW2");
        compensateNPOT_ = true;
			}
		} else {
		  LOG("No nonPOW2");
      compensateNPOT_ = true;
		}
		if(compensateNPOT_){
			texWidth = Ogre::Bitwise::firstPO2From(width_);
			texHeight = Ogre::Bitwise::firstPO2From(height_);
		}
	}
	// Create the texture
	Ogre::TexturePtr texture = Ogre::TextureManager::getSingleton().createManual("awesomium_tex",
                                                                  Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME,
                                                                  Ogre::TEX_TYPE_2D, texWidth, texHeight, 0, Ogre::PF_A8R8G8B8,
                                                                  Ogre::TU_DYNAMIC, this);
  this->viewTexture_ = texture;
  LOG("DIMENSIONS:"+STRING(texture->getWidth())+","+STRING(texture->getHeight()));
	Ogre::HardwarePixelBufferSharedPtr pixelBuffer = texture->getBuffer();
	pixelBuffer->lock(Ogre::HardwareBuffer::HBL_DISCARD);
	const Ogre::PixelBox& pixelBox = pixelBuffer->getCurrentLock();
	//unsigned int texDepth = Ogre::PixelUtil::getNumElemBytes(pixelBox.format);
	//unsigned int texPitch = (pixelBox.rowPitch*texDepth);

  //uint_fast8_t* pDest = static_cast<uint_fast8_t*>(pixelBox.data);

  unsigned char *data = static_cast<unsigned char*>(pixelBox.data);
  size_t length = pixelBox.getHeight() * pixelBox.getWidth() * 4;
  for(size_t i=0; i<length; i+=4){
      // fill the buffer with white pixels and fully transparent alpha channel
      data[i]   = 255;    // Blue
      data[i+1] = 0;    // Green
      data[i+2] = 255;    // Red
      data[i+3] = 100;      // Alpha
  }

  pixelBuffer->unlock();
  Ogre::MaterialPtr material = Ogre::MaterialManager::getSingleton().create("awesomium_mat", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  Ogre::Pass* matPass = material->getTechnique(0)->getPass(0);
  Ogre::TextureUnitState* texunit = matPass->createTextureUnitState("awesomium_tex");
  material->getTechnique(0)->setSceneBlending(Ogre::SBT_TRANSPARENT_ALPHA);
  //matPass->setSeparateSceneBlending (Ogre::SBF_SOURCE_ALPHA, Ogre::SBF_ONE_MINUS_SOURCE_ALPHA, Ogre::SBF_SOURCE_ALPHA, Ogre::SBF_ONE_MINUS_SOURCE_ALPHA);
  //matPass->setSeparateSceneBlending (Ogre::SBF_ONE, Ogre::SBF_ONE_MINUS_SOURCE_ALPHA, Ogre::SBF_ZERO, Ogre::SBF_ZERO);
  //material->setSceneBlending(Ogre::SBT_TRANSPARENT_ALPHA);

  //matPass->setDepthWriteEnabled(false);

  /*baseTexUnit->setTextureFiltering(texFiltering, texFiltering, FO_NONE);
  if(texFiltering == FO_ANISOTROPIC)
     baseTexUnit->setTextureAnisotropy(4);*/
}

void GUI::displayWebView(){
  renderBuffer_ = const_cast<awe_renderbuffer*>(awe_webview_render(webView_));

  // Make sure our render buffer is not NULL-- WebView::render will return
  // NULL if the WebView process has crashed.
  if(renderBuffer_ != NULL ){
   // LOG("RENDER_WEBVIEW");
    /*Ogre::HardwarePixelBufferSharedPtr pixelBuffer = viewTexture_->getBuffer();
    //awe_renderbuffer_copy_to(renderBuffer, temp_, awe_renderbuffer_get_width(renderBuffer)*4, 4,  false);
    Ogre::PixelBox pbox(awe_renderbuffer_get_width(renderBuffer_), awe_renderbuffer_get_height(renderBuffer_), 1, Ogre::PF_A8R8G8B8, const_cast<unsigned char*>(awe_renderbuffer_get_buffer(renderBuffer_)));
    //pixelBuffer->blitFromMemory(pbox);*/
  Ogre::HardwarePixelBufferSharedPtr pixelBuffer = viewTexture_->getBuffer();
	pixelBuffer->lock(Ogre::HardwareBuffer::HBL_DISCARD);
	const Ogre::PixelBox& pixelBox = pixelBuffer->getCurrentLock();
	unsigned texDepth = Ogre::PixelUtil::getNumElemBytes(pixelBox.format);
	unsigned texPitch = (pixelBox.rowPitch*texDepth);

	Ogre::uint8* destBuffer = static_cast<Ogre::uint8*>(pixelBox.data);

	awe_renderbuffer_copy_to(renderBuffer_, destBuffer, texPitch, texDepth, false, false);
	//texWidth = viewTexture_->getWidth();
	//texHeight = viewTexture_->getHeight();

	/*if(true)
	{
		for(int row = 0; row < texHeight; row++)
			for(int col = 0; col < texWidth; col++)
				alphaCache[row * alphaCachePitch + col] = destBuffer[row * texPitch + col * 4 + 3];
	}*/

	pixelBuffer->unlock();
    // write texture to file
    Ogre::TexturePtr tp = viewTexture_;

    // Declare buffer
    const size_t buffSize = (tp->getWidth() * tp->getHeight() * 4);
    unsigned char *data = OGRE_ALLOC_T(unsigned char,buffSize,Ogre::MEMCATEGORY_GENERAL);

    // Clear buffer
    memset(data, 0, buffSize);

    // Setup Image with correct settings
    Ogre::Image i;
    i.loadDynamicImage(data, tp->getWidth(), tp->getHeight(), 1, Ogre::PF_R8G8B8A8, true);

    // Copy Texture buffer contents to image buffer
    Ogre::HardwarePixelBufferSharedPtr buf = tp->getBuffer();
    const Ogre::PixelBox destBox = i.getPixelBox();
    buf->blitToMemory(destBox);

    // Save to disk!
    i.save("debugGUI.png");
  }
}

bool GUI::keyPressed(const OIS::KeyEvent& evt){
  if(evt.key == OIS::KC_O){
    if(trayManager_->isLogoVisible()){
      trayManager_->hideLogo();
      trayManager_->hideFrameStats();
    } else {
      trayManager_->showLogo(OgreBites::TL_BOTTOMRIGHT);
      trayManager_->showFrameStats(OgreBites::TL_BOTTOMLEFT);
    }
  }
  awe_webkeyboardevent wke;
  wke.virtual_key_code = 0;
  wke.native_key_code = evt.key;
  wke.is_system_key = false;

  // MODIFIERS (ALT, SHIFT, ...)
  bool isCtrlDown = application()->input()->isModifierDown(OIS::Keyboard::Ctrl);
  bool isShiftDown = application()->input()->isModifierDown(OIS::Keyboard::Shift);
  bool isAltDown = application()->input()->isModifierDown(OIS::Keyboard::Alt);

  unsigned modifiers = 0;
  if (isAltDown)
      modifiers = modifiers | AWE_WKM_ALT_KEY;
  if (isCtrlDown)
      modifiers = modifiers | AWE_WKM_CONTROL_KEY;
  /*if (evt.key == OIS::KC_LWIN || evt.key == OIS::KC_RWIN)
      modifiers = modifiers | AWE_WKM_META_KEY;*/
  if (isShiftDown)
      modifiers = modifiers | AWE_WKM_SHIFT_KEY;
  /*if (evt.key == OIS::KC_NUMLOCK)
      modifiers = modifiers | AWE_WKM_IS_KEYPAD;*/
  wke.modifiers = (_awe_webkey_modifiers)modifiers;

  wke.virtual_key_code = getWebKeyFromOISKey(evt.key);

  if(evt.text){
    wke.text[0] = (wchar_t) evt.text;
    wke.type = AWE_WKT_CHAR;
    awe_webview_inject_keyboard_event( webView_, wke );
  }
  wke.type = AWE_WKT_KEYDOWN;

  if(isCtrlDown && evt.key == OIS::KC_C){
    awe_webview_copy(webView_);
  } else if (isCtrlDown && evt.key == OIS::KC_X){
    awe_webview_cut(webView_);
  } else if (isCtrlDown && evt.key == OIS::KC_V){
    awe_webview_paste(webView_);
  } else {
    awe_webview_inject_keyboard_event( webView_, wke );
  }
  return false;
}

int GUI::getWebKeyFromOISKey(OIS::KeyCode key){
    #define mapKey(a, b) case OIS::KC_##a: return Awesomium::KeyCodes::AK_##b;
    switch(key){
      mapKey(BACK, BACK)
      mapKey(TAB, TAB)
      mapKey(RETURN, RETURN)
      mapKey(ESCAPE, ESCAPE)
      mapKey(SPACE, SPACE)
      mapKey(ADD, OEM_PLUS)
      mapKey(COMMA, OEM_COMMA)
      mapKey(MINUS, OEM_MINUS)
      mapKey(PERIOD, OEM_PERIOD)
      mapKey(SLASH, OEM_2)
      mapKey(0, 0)
      mapKey(1, 1)
      mapKey(2, 2)
      mapKey(3, 3)
      mapKey(4, 4)
      mapKey(5, 5)
      mapKey(6, 6)
      mapKey(7, 7)
      mapKey(8, 8)
      mapKey(9, 9)
      mapKey(COLON, OEM_1)
      mapKey(SEMICOLON, OEM_1)
      mapKey(EQUALS, OEM_PLUS)
      mapKey(LBRACKET, OEM_4)
      mapKey(RBRACKET, OEM_6)
      mapKey(A, A)
      mapKey(B, B)
      mapKey(C, C)
      mapKey(D, D)
      mapKey(E, E)
      mapKey(F, F)
      mapKey(G, G)
      mapKey(H, H)
      mapKey(I, I)
      mapKey(J, J)
      mapKey(K, K)
      mapKey(L, L)
      mapKey(M, M)
      mapKey(N, N)
      mapKey(O, O)
      mapKey(P, P)
      mapKey(Q, Q)
      mapKey(R, R)
      mapKey(S, S)
      mapKey(T, T)
      mapKey(U, U)
      mapKey(V, V)
      mapKey(W, W)
      mapKey(X, X)
      mapKey(Y, Y)
      mapKey(Z, Z)
      mapKey(DELETE, DELETE)
      mapKey(NUMPAD0, NUMPAD0)
      mapKey(NUMPAD1, NUMPAD1)
      mapKey(NUMPAD2, NUMPAD2)
      mapKey(NUMPAD3, NUMPAD3)
      mapKey(NUMPAD4, NUMPAD4)
      mapKey(NUMPAD5, NUMPAD5)
      mapKey(NUMPAD6, NUMPAD6)
      mapKey(NUMPAD7, NUMPAD7)
      mapKey(NUMPAD8, NUMPAD8)
      mapKey(NUMPAD9, NUMPAD9)
      mapKey(DECIMAL, DECIMAL)
      mapKey(DIVIDE, DIVIDE)
      mapKey(MULTIPLY, MULTIPLY)
      mapKey(NUMPADENTER, SEPARATOR)
      mapKey(DOWN, DOWN)
      mapKey(RIGHT, RIGHT)
      mapKey(LEFT, LEFT)
      mapKey(INSERT, INSERT)
      mapKey(HOME, HOME)
      mapKey(END, END)
      mapKey(F1, F1)
      mapKey(F2, F2)
      mapKey(F3, F3)
      mapKey(F4, F4)
      mapKey(F5, F5)
      mapKey(F6, F6)
      mapKey(F7, F7)
      mapKey(F8, F8)
      mapKey(F9, F9)
      mapKey(F10, F10)
      mapKey(F11, F11)
      mapKey(F12, F12)
      mapKey(F13, F13)
      mapKey(F14, F14)
      mapKey(F15, F15)
      mapKey(NUMLOCK, NUMLOCK)
      mapKey(RSHIFT, RSHIFT)
      mapKey(LSHIFT, LSHIFT)
      mapKey(RCONTROL, RCONTROL)
      mapKey(LCONTROL, LCONTROL)
      mapKey(LWIN, LWIN)
      mapKey(RWIN, RWIN)
    default: return Awesomium::KeyCodes::AK_UNKNOWN;
    }
    #undef mapKey
}

bool GUI::keyReleased(const OIS::KeyEvent &evt) {
  awe_webkeyboardevent wke;
  wke.virtual_key_code = 0;
  wke.native_key_code = evt.key;
  wke.is_system_key = false;

   // MODIFIERS (ALT, SHIFT, ...)
  bool isCtrlDown = application()->input()->isModifierDown(OIS::Keyboard::Ctrl);
  bool isShiftDown = application()->input()->isModifierDown(OIS::Keyboard::Shift);
  bool isAltDown = application()->input()->isModifierDown(OIS::Keyboard::Alt);

  unsigned modifiers = 0;
  if (isAltDown)
      modifiers = modifiers | AWE_WKM_ALT_KEY;
  if (isCtrlDown)
      modifiers = modifiers | AWE_WKM_CONTROL_KEY;
  /*if (evt.key == OIS::KC_LWIN || evt.key == OIS::KC_RWIN)
      modifiers = modifiers | AWE_WKM_META_KEY;*/
  if (isShiftDown)
      modifiers = modifiers | AWE_WKM_SHIFT_KEY;
  /*if (evt.key == OIS::KC_NUMLOCK)
      modifiers = modifiers | AWE_WKM_IS_KEYPAD;*/
  wke.modifiers = (_awe_webkey_modifiers)modifiers;

  wke.virtual_key_code = getWebKeyFromOISKey(evt.key);

  wke.type = AWE_WKT_KEYUP;
  awe_webview_inject_keyboard_event( webView_, wke );
  return false;
}

bool GUI::mousePressed(const OIS::MouseEvent& evt, OIS::MouseButtonID id) {
  if(isInGUI(evt.state.X.abs, evt.state.Y.abs)){
    awe_mousebutton awe_mb;
    switch (id){
      case OIS::MB_Left : awe_mb = AWE_MB_LEFT; break;
      case OIS::MB_Right : awe_mb = AWE_MB_RIGHT; break;
      case OIS::MB_Middle : awe_mb = AWE_MB_MIDDLE; break;
      default: awe_mb = AWE_MB_LEFT;
    }
    awe_webview_inject_mouse_down(webView_,  awe_mb);
  }
  return false;
}

bool GUI::mouseReleased(const OIS::MouseEvent& evt, OIS::MouseButtonID id) {
  if(isInGUI(evt.state.X.abs, evt.state.Y.abs)){
    awe_mousebutton awe_mb;
    switch (id){
      case OIS::MB_Left : awe_mb = AWE_MB_LEFT; break;
      case OIS::MB_Right : awe_mb = AWE_MB_RIGHT; break;
      case OIS::MB_Middle : awe_mb = AWE_MB_MIDDLE; break;
      default: awe_mb = AWE_MB_LEFT;
    }
    awe_webview_inject_mouse_up(webView_,  awe_mb);
  }
  return false;
}

bool GUI::mouseMoved(const OIS::MouseEvent& evt) {
  awe_webview_inject_mouse_move(webView_, evt.state.X.abs, evt.state.Y.abs);
  awe_webview_inject_mouse_wheel(webView_, evt.state.Z.rel);
  return false;
}

void GUI::loadResource(Ogre::Resource* resource){
  Ogre::Texture *tex = static_cast<Ogre::Texture*>(resource);

  tex->setTextureType(Ogre::TEX_TYPE_2D);
  tex->setWidth(texWidth);
  tex->setHeight(texHeight);
  tex->setNumMipmaps(0);
  tex->setFormat(Ogre::PF_BYTE_BGRA);
  tex->setUsage(Ogre::TU_DYNAMIC);
  tex->createInternalResources();
}

void GUI::executeJS(SString script){
  awe_string* js_str = awe_string_create_from_ascii(script.c_str(), strlen(script.c_str()));
  awe_webview_execute_javascript(webView_,js_str, awe_string_empty());
  awe_string_destroy(js_str);
}

void GUI::reload(){
  awe_webview_load_file(webView_,  url_str_, awe_string_empty());
  ready_ = false;
  /*for (int i = 0; i < 10000; i++){
    // We must call WebCore::update in our update loop.
    awe_webcore_update();
    if (!awe_webview_is_loading_page(webView_)){
        //Sleep(100);
        awe_webcore_update();
        break;
    }
    // Sleep a little bit so we don't consume too much CPU while waiting
    // for the page to finish loading.
    //Sleep(1);
  }
  displayWebView();
  awe_webview_focus(webView_);*/
}

SString GUI::pollCommands(){
  if (awe_webview_is_loading_page(webView_))
    return SString(";");
  awe_string* js = awe_string_create_from_ascii("editor.poll();", strlen("editor.poll();"));
  awe_jsvalue* res = awe_webview_execute_javascript_with_result(webView_, js, awe_string_empty(), 1000);
  if(awe_jsvalue_get_type(res) == JSVALUE_TYPE_NULL || !res){
    awe_string_destroy(js);
    awe_jsvalue_destroy(res);
    return SString("{}");
  } else if (awe_jsvalue_get_type(res) == JSVALUE_TYPE_STRING){ // warning: magic! :D
    awe_string* result_string = awe_jsvalue_to_string(res);
    size_t len = awe_string_to_utf8(result_string, NULL, 0);
    wchar_t wchr[len];
    awe_string_to_wide(result_string, wchr, len);
    std::wstring str(wchr);
    std::ostringstream stm ;
    const std::ctype<char>& ctfacet = std::use_facet< std::ctype<char> >( stm.getloc() ) ;
    for( size_t i=0 ; i<len ; ++i )
      stm << ctfacet.narrow( str[i], 0 ) ;
    awe_string_destroy(result_string);
    awe_jsvalue_destroy(res);
    awe_string_destroy(js);
    return SString(stm.str());
  }
  awe_jsvalue_destroy(res);
  awe_string_destroy(js);
  return SString("{}");
}

bool GUI::isInGUI(int x, int y){
  if(renderBuffer_){ // if we don't have renderBuffer_ yet, there is nothing displayed -> nothing in gui
    Ogre::HardwarePixelBufferSharedPtr pixelBuffer = viewTexture_->getBuffer();
    pixelBuffer->lock(Ogre::HardwareBuffer::HBL_READ_ONLY);
    const Ogre::PixelBox &pb = pixelBuffer->getCurrentLock();
    int depth = Ogre::PixelUtil::getNumElemBytes(pb.format);
    SColourValue col;
    Ogre::PixelUtil::unpackColour(&col, pb.format, static_cast<Ogre::uint8*>(pb.data)+pb.rowPitch*y*depth+x*depth);
    pixelBuffer->unlock();
    return col.a != 0.0f;
  } else {
    return false;
  }
}

}; // namespace SF
