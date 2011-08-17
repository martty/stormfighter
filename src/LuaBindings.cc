/*
** Lua binding: Stormfighter
** Generated automatically by tolua++-1.0.92 on 08/15/11 20:14:12.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_Stormfighter_open (lua_State* tolua_S);

#include "common.h"
#include "LuaForward.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Ogre__Math (lua_State* tolua_S)
{
 Ogre::Math* self = (Ogre::Math*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__set_std__string_ (lua_State* tolua_S)
{
 std::set<std::string>* self = (std::set<std::string>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SMesh (lua_State* tolua_S)
{
 SMesh* self = (SMesh*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Radian (lua_State* tolua_S)
{
 Ogre::Radian* self = (Ogre::Radian*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_Component__ (lua_State* tolua_S)
{
 std::vector<Component*>* self = (std::vector<Component*>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_StormfighterApp (lua_State* tolua_S)
{
 StormfighterApp* self = (StormfighterApp*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__AxisAlignedBox (lua_State* tolua_S)
{
 Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__ColourValue (lua_State* tolua_S)
{
 Ogre::ColourValue* self = (Ogre::ColourValue*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_GameObject (lua_State* tolua_S)
{
 GameObject* self = (GameObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SLuaScript (lua_State* tolua_S)
{
 SLuaScript* self = (SLuaScript*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Degree (lua_State* tolua_S)
{
 Ogre::Degree* self = (Ogre::Degree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SManualObject (lua_State* tolua_S)
{
 SManualObject* self = (SManualObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__pair_bool_float_ (lua_State* tolua_S)
{
 std::pair<bool,float>* self = (std::pair<bool,float>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_GameObject__ (lua_State* tolua_S)
{
 std::vector<GameObject*>* self = (std::vector<GameObject*>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_std__string_ (lua_State* tolua_S)
{
 std::vector<std::string>* self = (std::vector<std::string>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SCamera (lua_State* tolua_S)
{
 SCamera* self = (SCamera*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SLight (lua_State* tolua_S)
{
 SLight* self = (SLight*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector3 (lua_State* tolua_S)
{
 Ogre::Vector3* self = (Ogre::Vector3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SPrimitive (lua_State* tolua_S)
{
 SPrimitive* self = (SPrimitive*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SingleRayCastResult (lua_State* tolua_S)
{
 SingleRayCastResult* self = (SingleRayCastResult*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Matrix4 (lua_State* tolua_S)
{
 Ogre::Matrix4* self = (Ogre::Matrix4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Quaternion (lua_State* tolua_S)
{
 Ogre::Quaternion* self = (Ogre::Quaternion*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Ray (lua_State* tolua_S)
{
 Ogre::Ray* self = (Ogre::Ray*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector4 (lua_State* tolua_S)
{
 Ogre::Vector4* self = (Ogre::Vector4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Ogre::Vector2");
 tolua_usertype(tolua_S,"SCamera");
 tolua_usertype(tolua_S,"SMesh");
 tolua_usertype(tolua_S,"Component");
 tolua_usertype(tolua_S,"Ogre::Radian");
 tolua_usertype(tolua_S,"Ogre::RenderWindow");
 tolua_usertype(tolua_S,"Ogre::Vector4");
 tolua_usertype(tolua_S,"Ogre::SceneManager");
 tolua_usertype(tolua_S,"Ogre::AxisAlignedBox");
 tolua_usertype(tolua_S,"Logger");
 tolua_usertype(tolua_S,"Ogre::Degree");
 tolua_usertype(tolua_S,"std::vector<GameObject*>");
 tolua_usertype(tolua_S,"std::vector<std::string>");
 tolua_usertype(tolua_S,"Ogre::Light::LightTypes");
 tolua_usertype(tolua_S,"SLight");
 tolua_usertype(tolua_S,"Graphics");
 tolua_usertype(tolua_S,"std::vector<SString>");
 tolua_usertype(tolua_S,"btRigidBody");
 tolua_usertype(tolua_S,"Ogre::Matrix3");
 tolua_usertype(tolua_S,"SMovableObject");
 tolua_usertype(tolua_S,"std::pair<bool,float>");
 tolua_usertype(tolua_S,"Ogre::Math");
 tolua_usertype(tolua_S,"Ogre::Plane");
 tolua_usertype(tolua_S,"SScript");
 tolua_usertype(tolua_S,"Ogre::list<Ogre::Plane>::type");
 tolua_usertype(tolua_S,"SManualObject");
 tolua_usertype(tolua_S,"Hierarchy");
 tolua_usertype(tolua_S,"GUI");
 tolua_usertype(tolua_S,"Input");
 tolua_usertype(tolua_S,"Ogre::Light");
 tolua_usertype(tolua_S,"Ogre::vector<Ogre::Plane>::type");
 tolua_usertype(tolua_S,"Ogre::Quaternion");
 tolua_usertype(tolua_S,"Ogre::Viewport");
 tolua_usertype(tolua_S,"STransform");
 tolua_usertype(tolua_S,"Ogre::Sphere");
 tolua_usertype(tolua_S,"OIS::Keyboard");
 tolua_usertype(tolua_S,"CollisionData");
 tolua_usertype(tolua_S,"SPrimitive");
 tolua_usertype(tolua_S,"Physics");
 tolua_usertype(tolua_S,"Ogre::ColourValue");
 tolua_usertype(tolua_S,"StormfighterApp");
 tolua_usertype(tolua_S,"GameObject");
 tolua_usertype(tolua_S,"std::vector<Component*>");
 tolua_usertype(tolua_S,"SLuaScript");
 tolua_usertype(tolua_S,"Ogre::Vector3");
 tolua_usertype(tolua_S,"std::set<std::string>");
 tolua_usertype(tolua_S,"SingleRayCastResult");
 tolua_usertype(tolua_S,"Ogre::Matrix4");
 tolua_usertype(tolua_S,"Ogre::PolygonMode");
 tolua_usertype(tolua_S,"Ogre::Ray");
 tolua_usertype(tolua_S,"Ogre::Camera");
}

/* method: clear of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__clear00
static int tolua_Stormfighter_std_vector_std__string__clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<std::string>* self = (std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__size00
static int tolua_Stormfighter_std_vector_std__string__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<std::string>* self = (const std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string___geti00
static int tolua_Stormfighter_std_vector_std__string___geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<std::string>* self = (const std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->operator[](index);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string___seti00
static int tolua_Stormfighter_std_vector_std__string___seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<std::string>* self = (std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  std::string tolua_value = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](index) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string___geti01
static int tolua_Stormfighter_std_vector_std__string___geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::vector<std::string>* self = (std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->operator[](index);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_std_vector_std__string___geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__push_back00
static int tolua_Stormfighter_std_vector_std__string__push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<std::string>* self = (std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
  std::string val = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__new00
static int tolua_Stormfighter_std_vector_std__string__new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<std::string>* tolua_ret = (std::vector<std::string>*)  Mtolua_new((std::vector<std::string>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<std::string>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__new00_local
static int tolua_Stormfighter_std_vector_std__string__new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<std::string>* tolua_ret = (std::vector<std::string>*)  Mtolua_new((std::vector<std::string>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  std::vector<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_std__string__delete00
static int tolua_Stormfighter_std_vector_std__string__delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<std::string>* self = (std::vector<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___clear00
static int tolua_Stormfighter_std_vector_GameObject___clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<GameObject*>* self = (std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___size00
static int tolua_Stormfighter_std_vector_GameObject___size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<GameObject*>* self = (const std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject____geti00
static int tolua_Stormfighter_std_vector_GameObject____geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<GameObject*>* self = (const std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   const GameObject* tolua_ret = (const GameObject*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject____seti00
static int tolua_Stormfighter_std_vector_GameObject____seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<GameObject*>* self = (std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  GameObject* tolua_value = ((GameObject*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](index) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject____geti01
static int tolua_Stormfighter_std_vector_GameObject____geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::vector<GameObject*>* self = (std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_std_vector_GameObject____geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___push_back00
static int tolua_Stormfighter_std_vector_GameObject___push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<GameObject*>* self = (std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  GameObject* val = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___new00
static int tolua_Stormfighter_std_vector_GameObject___new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<GameObject*>* tolua_ret = (std::vector<GameObject*>*)  Mtolua_new((std::vector<GameObject*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<GameObject*>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___new00_local
static int tolua_Stormfighter_std_vector_GameObject___new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<GameObject*>* tolua_ret = (std::vector<GameObject*>*)  Mtolua_new((std::vector<GameObject*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<GameObject*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  std::vector<GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_GameObject___delete00
static int tolua_Stormfighter_std_vector_GameObject___delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<GameObject*>* self = (std::vector<GameObject*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___clear00
static int tolua_Stormfighter_std_vector_Component___clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<Component*>* self = (std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___size00
static int tolua_Stormfighter_std_vector_Component___size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<Component*>* self = (const std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component____geti00
static int tolua_Stormfighter_std_vector_Component____geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<Component*>* self = (const std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   const Component* tolua_ret = (const Component*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const Component");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component____seti00
static int tolua_Stormfighter_std_vector_Component____seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<Component*>* self = (std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  Component* tolua_value = ((Component*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](index) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component____geti01
static int tolua_Stormfighter_std_vector_Component____geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::vector<Component*>* self = (std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_std_vector_Component____geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___push_back00
static int tolua_Stormfighter_std_vector_Component___push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<Component*>* self = (std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
  Component* val = ((Component*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___new00
static int tolua_Stormfighter_std_vector_Component___new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<Component*>* tolua_ret = (std::vector<Component*>*)  Mtolua_new((std::vector<Component*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<Component*>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___new00_local
static int tolua_Stormfighter_std_vector_Component___new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<Component*>* tolua_ret = (std::vector<Component*>*)  Mtolua_new((std::vector<Component*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  std::vector<Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_Component___delete00
static int tolua_Stormfighter_std_vector_Component___delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<Component*>* self = (std::vector<Component*>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  std::set<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_set_std__string__clear00
static int tolua_Stormfighter_std_set_std__string__clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::set<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::set<std::string>* self = (std::set<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: size of class  std::set<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_set_std__string__size00
static int tolua_Stormfighter_std_set_std__string__size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::set<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::set<std::string>* self = (const std::set<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'size'", NULL);
#endif
  {
   int tolua_ret = (int)  self->size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  std::set<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_set_std__string__new00
static int tolua_Stormfighter_std_set_std__string__new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::set<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::set<std::string>* tolua_ret = (std::set<std::string>*)  Mtolua_new((std::set<std::string>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::set<std::string>");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  std::set<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_set_std__string__new00_local
static int tolua_Stormfighter_std_set_std__string__new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::set<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::set<std::string>* tolua_ret = (std::set<std::string>*)  Mtolua_new((std::set<std::string>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::set<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  std::set<std::string> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_set_std__string__delete00
static int tolua_Stormfighter_std_set_std__string__delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::set<std::string>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::set<std::string>* self = (std::set<std::string>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_new00
static int tolua_Stormfighter_Ogre_Ray_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Ray* tolua_ret = (Ogre::Ray*)  Mtolua_new((Ogre::Ray)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Ray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_new00_local
static int tolua_Stormfighter_Ogre_Ray_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Ray* tolua_ret = (Ogre::Ray*)  Mtolua_new((Ogre::Ray)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Ray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_new01
static int tolua_Stormfighter_Ogre_Ray_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* origin = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* direction = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Ray* tolua_ret = (Ogre::Ray*)  Mtolua_new((Ogre::Ray)(*origin,*direction));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Ray");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Ray_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_new01_local
static int tolua_Stormfighter_Ogre_Ray_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* origin = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* direction = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Ray* tolua_ret = (Ogre::Ray*)  Mtolua_new((Ogre::Ray)(*origin,*direction));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Ray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Ray_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOrigin of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_setOrigin00
static int tolua_Stormfighter_Ogre_Ray_setOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Ray* self = (Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* origin = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOrigin'", NULL);
#endif
  {
   self->setOrigin(*origin);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOrigin of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_getOrigin00
static int tolua_Stormfighter_Ogre_Ray_getOrigin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Ray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Ray* self = (const Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOrigin'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getOrigin();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOrigin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirection of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_setDirection00
static int tolua_Stormfighter_Ogre_Ray_setDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Ray",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Ray* self = (Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dir = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirection'", NULL);
#endif
  {
   self->setDirection(*dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirection of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_getDirection00
static int tolua_Stormfighter_Ogre_Ray_getDirection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Ray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Ray* self = (const Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirection'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getDirection();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPoint of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray_getPoint00
static int tolua_Stormfighter_Ogre_Ray_getPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Ray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Ray* self = (const Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
   float t = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPoint'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getPoint(t);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Ray */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Ray__mul00
static int tolua_Stormfighter_Ogre_Ray__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Ray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Ray* self = (const Ogre::Ray*)  tolua_tousertype(tolua_S,1,0);
   float t = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(t);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_new00
static int tolua_Stormfighter_Ogre_Radian_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_new00_local
static int tolua_Stormfighter_Ogre_Radian_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_new01
static int tolua_Stormfighter_Ogre_Radian_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_new01_local
static int tolua_Stormfighter_Ogre_Radian_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian* tolua_ret = (Ogre::Radian*)  Mtolua_new((Ogre::Radian)(*d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_valueDegrees00
static int tolua_Stormfighter_Ogre_Radian_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_valueRadians00
static int tolua_Stormfighter_Ogre_Radian_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian_valueAngleUnits00
static int tolua_Stormfighter_Ogre_Radian_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__add00
static int tolua_Stormfighter_Ogre_Radian__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator+(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__add01
static int tolua_Stormfighter_Ogre_Radian__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator+(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__sub00
static int tolua_Stormfighter_Ogre_Radian__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Radian",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Radian* self = (Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__sub01
static int tolua_Stormfighter_Ogre_Radian__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__sub02
static int tolua_Stormfighter_Ogre_Radian__sub02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator-(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian__sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__mul00
static int tolua_Stormfighter_Ogre_Radian__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator*(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__mul01
static int tolua_Stormfighter_Ogre_Radian__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* f = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator*(*f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Radian__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__div00
static int tolua_Stormfighter_Ogre_Radian__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->operator/(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__lt00
static int tolua_Stormfighter_Ogre_Radian__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__le00
static int tolua_Stormfighter_Ogre_Radian__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Radian */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Radian__eq00
static int tolua_Stormfighter_Ogre_Radian__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Radian",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* self = (const Ogre::Radian*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*r);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_new00
static int tolua_Stormfighter_Ogre_Degree_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_new00_local
static int tolua_Stormfighter_Ogre_Degree_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_new01
static int tolua_Stormfighter_Ogre_Degree_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(*r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_new01_local
static int tolua_Stormfighter_Ogre_Degree_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree* tolua_ret = (Ogre::Degree*)  Mtolua_new((Ogre::Degree)(*r));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueDegrees of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_valueDegrees00
static int tolua_Stormfighter_Ogre_Degree_valueDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueDegrees'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueRadians of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_valueRadians00
static int tolua_Stormfighter_Ogre_Degree_valueRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueRadians'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueRadians();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: valueAngleUnits of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree_valueAngleUnits00
static int tolua_Stormfighter_Ogre_Degree_valueAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'valueAngleUnits'", NULL);
#endif
  {
   float tolua_ret = (float)  self->valueAngleUnits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valueAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__add00
static int tolua_Stormfighter_Ogre_Degree__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator+(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__add01
static int tolua_Stormfighter_Ogre_Degree__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator+(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__sub00
static int tolua_Stormfighter_Ogre_Degree__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Degree",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Degree* self = (Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__sub01
static int tolua_Stormfighter_Ogre_Degree__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-(*d);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__sub02
static int tolua_Stormfighter_Ogre_Degree__sub02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* r = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator-(*r);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree__sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__mul00
static int tolua_Stormfighter_Ogre_Degree__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator*(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__mul01
static int tolua_Stormfighter_Ogre_Degree__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* f = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator*(*f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Degree__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__div00
static int tolua_Stormfighter_Ogre_Degree__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  float f = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  self->operator/(f);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__lt00
static int tolua_Stormfighter_Ogre_Degree__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__le00
static int tolua_Stormfighter_Ogre_Degree__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Degree */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Degree__eq00
static int tolua_Stormfighter_Ogre_Degree__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Degree",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Degree* self = (const Ogre::Degree*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Degree* d = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*d);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_new00
static int tolua_Stormfighter_Ogre_Math_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int trigTableSize = ((unsigned int)  tolua_tonumber(tolua_S,2,4096));
  {
   Ogre::Math* tolua_ret = (Ogre::Math*)  Mtolua_new((Ogre::Math)(trigTableSize));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Math");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_new00_local
static int tolua_Stormfighter_Ogre_Math_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int trigTableSize = ((unsigned int)  tolua_tonumber(tolua_S,2,4096));
  {
   Ogre::Math* tolua_ret = (Ogre::Math*)  Mtolua_new((Ogre::Math)(trigTableSize));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Math");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_delete00
static int tolua_Stormfighter_Ogre_Math_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Math* self = (Ogre::Math*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IAbs of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_IAbs00
static int tolua_Stormfighter_Ogre_Math_IAbs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int iValue = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  Ogre::Math::IAbs(iValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IAbs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ICeil of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ICeil00
static int tolua_Stormfighter_Ogre_Math_ICeil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  Ogre::Math::ICeil(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ICeil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IFloor of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_IFloor00
static int tolua_Stormfighter_Ogre_Math_IFloor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  Ogre::Math::IFloor(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IFloor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ISign of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ISign00
static int tolua_Stormfighter_Ogre_Math_ISign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int iValue = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  Ogre::Math::ISign(iValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ISign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Abs of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Abs00
static int tolua_Stormfighter_Ogre_Math_Abs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Abs(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Abs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Abs of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Abs01
static int tolua_Stormfighter_Ogre_Math_Abs01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* dValue = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  Ogre::Math::Abs(*dValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Abs00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Abs of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Abs02
static int tolua_Stormfighter_Ogre_Math_Abs02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::Abs(*rValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Abs01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ACos of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ACos00
static int tolua_Stormfighter_Ogre_Math_ACos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::ACos(fValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ACos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ASin of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ASin00
static int tolua_Stormfighter_Ogre_Math_ASin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::ASin(fValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ASin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ATan of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ATan00
static int tolua_Stormfighter_Ogre_Math_ATan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::ATan(fValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ATan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ATan2 of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_ATan200
static int tolua_Stormfighter_Ogre_Math_ATan200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fY = ((float)  tolua_tonumber(tolua_S,2,0));
  float fX = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::ATan2(fY,fX);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ATan2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Ceil of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Ceil00
static int tolua_Stormfighter_Ogre_Math_Ceil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Ceil(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Ceil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Cos of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Cos00
static int tolua_Stormfighter_Ogre_Math_Cos00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* fValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Cos(*fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Cos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Cos of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Cos01
static int tolua_Stormfighter_Ogre_Math_Cos01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Cos(fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Cos00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Exp of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Exp00
static int tolua_Stormfighter_Ogre_Math_Exp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Exp(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Exp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Floor of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Floor00
static int tolua_Stormfighter_Ogre_Math_Floor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Floor(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Floor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Log of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Log00
static int tolua_Stormfighter_Ogre_Math_Log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Log(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Log'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Pow of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Pow00
static int tolua_Stormfighter_Ogre_Math_Pow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fBase = ((float)  tolua_tonumber(tolua_S,2,0));
  float fExponent = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   float tolua_ret = (float)  Ogre::Math::Pow(fBase,fExponent);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Pow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sign of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sign00
static int tolua_Stormfighter_Ogre_Math_Sign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Sign(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Sign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sign of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sign01
static int tolua_Stormfighter_Ogre_Math_Sign01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::Sign(*rValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Sign00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sign of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sign02
static int tolua_Stormfighter_Ogre_Math_Sign02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* dValue = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  Ogre::Math::Sign(*dValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Sign01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sin of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sin00
static int tolua_Stormfighter_Ogre_Math_Sin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* fValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Sin(*fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Sin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sin of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sin01
static int tolua_Stormfighter_Ogre_Math_Sin01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Sin(fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Sin00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sqr of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sqr00
static int tolua_Stormfighter_Ogre_Math_Sqr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Sqr(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Sqr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sqrt of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sqrt00
static int tolua_Stormfighter_Ogre_Math_Sqrt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::Sqrt(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Sqrt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sqrt of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sqrt01
static int tolua_Stormfighter_Ogre_Math_Sqrt01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* fValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  Ogre::Math::Sqrt(*fValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Sqrt00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Sqrt of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Sqrt02
static int tolua_Stormfighter_Ogre_Math_Sqrt02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Degree",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Degree* fValue = ((const Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Degree tolua_ret = (Ogre::Degree)  Ogre::Math::Sqrt(*fValue);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Degree)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Degree));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Degree");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Sqrt01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: InvSqrt of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_InvSqrt00
static int tolua_Stormfighter_Ogre_Math_InvSqrt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::InvSqrt(fValue);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InvSqrt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnitRandom of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_UnitRandom00
static int tolua_Stormfighter_Ogre_Math_UnitRandom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  Ogre::Math::UnitRandom();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnitRandom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RangeRandom of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_RangeRandom00
static int tolua_Stormfighter_Ogre_Math_RangeRandom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fLow = ((float)  tolua_tonumber(tolua_S,2,0));
  float fHigh = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   float tolua_ret = (float)  Ogre::Math::RangeRandom(fLow,fHigh);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RangeRandom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SymmetricRandom of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_SymmetricRandom00
static int tolua_Stormfighter_Ogre_Math_SymmetricRandom00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  Ogre::Math::SymmetricRandom();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SymmetricRandom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Tan of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Tan00
static int tolua_Stormfighter_Ogre_Math_Tan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Radian* fValue = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Tan(*fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Tan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Tan of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_Tan01
static int tolua_Stormfighter_Ogre_Math_Tan01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float fValue = ((float)  tolua_tonumber(tolua_S,2,0));
  bool useTables = ((bool)  tolua_toboolean(tolua_S,3,false));
  {
   float tolua_ret = (float)  Ogre::Math::Tan(fValue,useTables);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_Tan00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: DegreesToRadians of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_DegreesToRadians00
static int tolua_Stormfighter_Ogre_Math_DegreesToRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float degrees = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::DegreesToRadians(degrees);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DegreesToRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RadiansToDegrees of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_RadiansToDegrees00
static int tolua_Stormfighter_Ogre_Math_RadiansToDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float radians = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::RadiansToDegrees(radians);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RadiansToDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngleUnit of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_setAngleUnit00
static int tolua_Stormfighter_Ogre_Math_setAngleUnit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Math::AngleUnit unit = ((Ogre::Math::AngleUnit) (int)  tolua_tonumber(tolua_S,2,0));
  {
   Ogre::Math::setAngleUnit(unit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngleUnit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngleUnit of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_getAngleUnit00
static int tolua_Stormfighter_Ogre_Math_getAngleUnit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Math::AngleUnit tolua_ret = (Ogre::Math::AngleUnit)  Ogre::Math::getAngleUnit();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngleUnit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AngleUnitsToRadians of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_AngleUnitsToRadians00
static int tolua_Stormfighter_Ogre_Math_AngleUnitsToRadians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float units = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::AngleUnitsToRadians(units);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AngleUnitsToRadians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RadiansToAngleUnits of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_RadiansToAngleUnits00
static int tolua_Stormfighter_Ogre_Math_RadiansToAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float radians = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::RadiansToAngleUnits(radians);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RadiansToAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AngleUnitsToDegrees of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_AngleUnitsToDegrees00
static int tolua_Stormfighter_Ogre_Math_AngleUnitsToDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float units = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::AngleUnitsToDegrees(units);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AngleUnitsToDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DegreesToAngleUnits of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_DegreesToAngleUnits00
static int tolua_Stormfighter_Ogre_Math_DegreesToAngleUnits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float degrees = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   float tolua_ret = (float)  Ogre::Math::DegreesToAngleUnits(degrees);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DegreesToAngleUnits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pointInTri2D of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_pointInTri2D00
static int tolua_Stormfighter_Ogre_Math_pointInTri2D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector2",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector2* p = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector2* a = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector2* b = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector2* c = ((const Ogre::Vector2*)  tolua_tousertype(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::pointInTri2D(*p,*a,*b,*c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pointInTri2D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pointInTri3D of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_pointInTri3D00
static int tolua_Stormfighter_Ogre_Math_pointInTri3D00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* p = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* a = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* b = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector3* c = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,5,0));
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,6,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::pointInTri3D(*p,*a,*b,*c,*normal);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pointInTri3D'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects00
static int tolua_Stormfighter_Ogre_Math_intersects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,3,0));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*plane);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects01
static int tolua_Stormfighter_Ogre_Math_intersects01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Sphere",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Sphere* sphere = ((const Ogre::Sphere*)  tolua_tousertype(tolua_S,3,0));
  bool discardInside = ((bool)  tolua_toboolean(tolua_S,4,true));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*sphere,discardInside);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects02
static int tolua_Stormfighter_Ogre_Math_intersects02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::AxisAlignedBox* box = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,3,0));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*box);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects03
static int tolua_Stormfighter_Ogre_Math_intersects03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::AxisAlignedBox* box = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,3,0));
  float d1 = ((float)  tolua_tonumber(tolua_S,4,0));
  float d2 = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::intersects(*ray,*box,&d1,&d2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)d1);
   tolua_pushnumber(tolua_S,(lua_Number)d2);
  }
 }
 return 3;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects04
static int tolua_Stormfighter_Ogre_Math_intersects04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,8,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* a = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* b = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector3* c = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,5,0));
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,6,0));
  bool positiveSide = ((bool)  tolua_toboolean(tolua_S,7,true));
  bool negativeSide = ((bool)  tolua_toboolean(tolua_S,8,true));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*a,*b,*c,*normal,positiveSide,negativeSide);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects05
static int tolua_Stormfighter_Ogre_Math_intersects05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* a = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* b = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Vector3* c = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,5,0));
  bool positiveSide = ((bool)  tolua_toboolean(tolua_S,6,true));
  bool negativeSide = ((bool)  tolua_toboolean(tolua_S,7,true));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*a,*b,*c,positiveSide,negativeSide);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects06
static int tolua_Stormfighter_Ogre_Math_intersects06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Sphere",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Sphere* sphere = ((const Ogre::Sphere*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::AxisAlignedBox* box = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::intersects(*sphere,*box);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects07
static int tolua_Stormfighter_Ogre_Math_intersects07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::AxisAlignedBox* box = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::intersects(*plane,*box);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects08
static int tolua_Stormfighter_Ogre_Math_intersects08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::vector<Ogre::Plane>::type",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::vector<Ogre::Plane>::type* planeList = ((const Ogre::vector<Ogre::Plane>::type*)  tolua_tousertype(tolua_S,3,0));
  bool normalIsOutside = ((bool)  tolua_toboolean(tolua_S,4,0));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*planeList,normalIsOutside);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects09
static int tolua_Stormfighter_Ogre_Math_intersects09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Ray",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::list<Ogre::Plane>::type",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Ray* ray = ((const Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::list<Ogre::Plane>::type* planeList = ((const Ogre::list<Ogre::Plane>::type*)  tolua_tousertype(tolua_S,3,0));
  bool normalIsOutside = ((bool)  tolua_toboolean(tolua_S,4,0));
  {
   std::pair<bool,float> tolua_ret = (std::pair<bool,float>)  Ogre::Math::intersects(*ray,*planeList,normalIsOutside);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::pair<bool,float>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::pair<bool,float>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_intersects10
static int tolua_Stormfighter_Ogre_Math_intersects10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Sphere",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Sphere* sphere = ((const Ogre::Sphere*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::intersects(*sphere,*plane);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_intersects09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: RealEqual of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_RealEqual00
static int tolua_Stormfighter_Ogre_Math_RealEqual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
  float b = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::RealEqual(a,b);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RealEqual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RealEqual of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_RealEqual01
static int tolua_Stormfighter_Ogre_Math_RealEqual01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
  float b = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolerance = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   bool tolua_ret = (bool)  Ogre::Math::RealEqual(a,b,tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Math_RealEqual00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateTangentSpaceVector of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_calculateTangentSpaceVector00
static int tolua_Stormfighter_Ogre_Math_calculateTangentSpaceVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* position1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* position2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* position3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  float u1 = ((float)  tolua_tonumber(tolua_S,5,0));
  float v1 = ((float)  tolua_tonumber(tolua_S,6,0));
  float u2 = ((float)  tolua_tonumber(tolua_S,7,0));
  float v2 = ((float)  tolua_tonumber(tolua_S,8,0));
  float u3 = ((float)  tolua_tonumber(tolua_S,9,0));
  float v3 = ((float)  tolua_tonumber(tolua_S,10,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateTangentSpaceVector(*position1,*position2,*position3,u1,v1,u2,v2,u3,v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateTangentSpaceVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildReflectionMatrix of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_buildReflectionMatrix00
static int tolua_Stormfighter_Ogre_Math_buildReflectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Plane* p = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Matrix4 tolua_ret = (Ogre::Matrix4)  Ogre::Math::buildReflectionMatrix(*p);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Matrix4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Matrix4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Matrix4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'buildReflectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateFaceNormal of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_calculateFaceNormal00
static int tolua_Stormfighter_Ogre_Math_calculateFaceNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  Ogre::Math::calculateFaceNormal(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateFaceNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateBasicFaceNormal of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormal00
static int tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateBasicFaceNormal(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateBasicFaceNormal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateFaceNormalWithoutNormalize of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_calculateFaceNormalWithoutNormalize00
static int tolua_Stormfighter_Ogre_Math_calculateFaceNormalWithoutNormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector4 tolua_ret = (Ogre::Vector4)  Ogre::Math::calculateFaceNormalWithoutNormalize(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector4));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateFaceNormalWithoutNormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: calculateBasicFaceNormalWithoutNormalize of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00
static int tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* v1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* v2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* v3 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  Ogre::Math::calculateBasicFaceNormalWithoutNormalize(*v1,*v2,*v3);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'calculateBasicFaceNormalWithoutNormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gaussianDistribution of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Math_gaussianDistribution00
static int tolua_Stormfighter_Ogre_Math_gaussianDistribution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Math",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float offset = ((float)  tolua_tonumber(tolua_S,3,0.0f));
  float scale = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  {
   float tolua_ret = (float)  Ogre::Math::gaussianDistribution(x,offset,scale);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gaussianDistribution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: POS_INFINITY of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_POS_INFINITY
static int tolua_get_Ogre__Math_POS_INFINITY(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::POS_INFINITY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEG_INFINITY of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_NEG_INFINITY
static int tolua_get_Ogre__Math_NEG_INFINITY(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::NEG_INFINITY);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: PI of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_PI
static int tolua_get_Ogre__Math_PI(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::PI);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: TWO_PI of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_TWO_PI
static int tolua_get_Ogre__Math_TWO_PI(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::TWO_PI);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: HALF_PI of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_HALF_PI
static int tolua_get_Ogre__Math_HALF_PI(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::HALF_PI);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fDeg2Rad of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_fDeg2Rad
static int tolua_get_Ogre__Math_fDeg2Rad(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::fDeg2Rad);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fRad2Deg of class  Ogre::Math */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Math_fRad2Deg
static int tolua_get_Ogre__Math_fRad2Deg(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Math::fRad2Deg);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_x
static int tolua_get_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_x
static int tolua_set_Ogre__Vector3_x(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_y
static int tolua_get_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_y
static int tolua_set_Ogre__Vector3_y(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_z
static int tolua_get_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Vector3_z
static int tolua_set_Ogre__Vector3_z(lua_State* tolua_S)
{
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new00
static int tolua_Stormfighter_Ogre_Vector3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new00_local
static int tolua_Stormfighter_Ogre_Vector3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new01
static int tolua_Stormfighter_Ogre_Vector3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float fX = ((float)  tolua_tonumber(tolua_S,2,0));
  float fY = ((float)  tolua_tonumber(tolua_S,3,0));
  float fZ = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new01_local
static int tolua_Stormfighter_Ogre_Vector3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float fX = ((float)  tolua_tonumber(tolua_S,2,0));
  float fY = ((float)  tolua_tonumber(tolua_S,3,0));
  float fZ = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new02
static int tolua_Stormfighter_Ogre_Vector3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
  {
   int i;
   for(i=0; i<3;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) afCoordinate[i]);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new02_local
static int tolua_Stormfighter_Ogre_Vector3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((float)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
  {
   int i;
   for(i=0; i<3;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) afCoordinate[i]);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new03
static int tolua_Stormfighter_Ogre_Vector3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
  {
   int i;
   for(i=0; i<3;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) afCoordinate[i]);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new03_local
static int tolua_Stormfighter_Ogre_Vector3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int afCoordinate[3];
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isnumberarray(tolua_S,2,3,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<3;i++)
    afCoordinate[i] = ((int)  tolua_tofieldnumber(tolua_S,2,i+1,0));
   }
  }
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(afCoordinate));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
  {
   int i;
   for(i=0; i<3;i++)
    tolua_pushfieldnumber(tolua_S,2,i+1,(lua_Number) afCoordinate[i]);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new04
static int tolua_Stormfighter_Ogre_Vector3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(*rkVector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_new04_local
static int tolua_Stormfighter_Ogre_Vector3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Vector3* tolua_ret = (Ogre::Vector3*)  Mtolua_new((Ogre::Vector3)(*rkVector));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__geti00
static int tolua_Stormfighter_Ogre_Vector3__geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  long i = ((long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__seti00
static int tolua_Stormfighter_Ogre_Vector3__seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  long i = ((long)  tolua_tonumber(tolua_S,2,0));
  float tolua_value = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](i) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__geti01
static int tolua_Stormfighter_Ogre_Vector3__geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  long i = ((long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__eq00
static int tolua_Stormfighter_Ogre_Vector3__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rkVector);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__add00
static int tolua_Stormfighter_Ogre_Vector3__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__sub00
static int tolua_Stormfighter_Ogre_Vector3__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__mul00
static int tolua_Stormfighter_Ogre_Vector3__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  float fScalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__mul01
static int tolua_Stormfighter_Ogre_Vector3__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__div00
static int tolua_Stormfighter_Ogre_Vector3__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  float fScalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__div01
static int tolua_Stormfighter_Ogre_Vector3__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__sub01
static int tolua_Stormfighter_Ogre_Vector3__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Vector3__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_length00
static int tolua_Stormfighter_Ogre_Vector3_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: squaredLength of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_squaredLength00
static int tolua_Stormfighter_Ogre_Vector3_squaredLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'squaredLength'", NULL);
#endif
  {
   float tolua_ret = (float)  self->squaredLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'squaredLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dotProduct of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_dotProduct00
static int tolua_Stormfighter_Ogre_Vector3_dotProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dotProduct'", NULL);
#endif
  {
   float tolua_ret = (float)  self->dotProduct(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dotProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_normalise00
static int tolua_Stormfighter_Ogre_Vector3_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
   float tolua_ret = (float)  self->normalise();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: crossProduct of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_crossProduct00
static int tolua_Stormfighter_Ogre_Vector3_crossProduct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'crossProduct'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->crossProduct(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'crossProduct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: midPoint of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_midPoint00
static int tolua_Stormfighter_Ogre_Vector3_midPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'midPoint'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->midPoint(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'midPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3__lt00
static int tolua_Stormfighter_Ogre_Vector3__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeFloor of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_makeFloor00
static int tolua_Stormfighter_Ogre_Vector3_makeFloor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* cmp = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeFloor'", NULL);
#endif
  {
   self->makeFloor(*cmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeFloor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: makeCeil of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_makeCeil00
static int tolua_Stormfighter_Ogre_Vector3_makeCeil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* cmp = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'makeCeil'", NULL);
#endif
  {
   self->makeCeil(*cmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makeCeil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: perpendicular of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_perpendicular00
static int tolua_Stormfighter_Ogre_Vector3_perpendicular00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'perpendicular'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->perpendicular();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'perpendicular'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: randomDeviant of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_randomDeviant00
static int tolua_Stormfighter_Ogre_Vector3_randomDeviant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* angle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* up = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'randomDeviant'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->randomDeviant(*angle,*up);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randomDeviant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotationTo of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_getRotationTo00
static int tolua_Stormfighter_Ogre_Vector3_getRotationTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationTo'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->getRotationTo(*dest);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotationTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isZeroLength of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_isZeroLength00
static int tolua_Stormfighter_Ogre_Vector3_isZeroLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isZeroLength'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isZeroLength();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isZeroLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalisedCopy of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_normalisedCopy00
static int tolua_Stormfighter_Ogre_Vector3_normalisedCopy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalisedCopy'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->normalisedCopy();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalisedCopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reflect of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_reflect00
static int tolua_Stormfighter_Ogre_Vector3_reflect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reflect'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->reflect(*normal);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reflect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: positionEquals of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_positionEquals00
static int tolua_Stormfighter_Ogre_Vector3_positionEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  float tolerance = ((float)  tolua_tonumber(tolua_S,3,1e-03));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'positionEquals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->positionEquals(*rhs,tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'positionEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: directionEquals of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_directionEquals00
static int tolua_Stormfighter_Ogre_Vector3_directionEquals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rhs = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* tolerance = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'directionEquals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->directionEquals(*rhs,*tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'directionEquals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angleBetween of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_angleBetween00
static int tolua_Stormfighter_Ogre_Vector3_angleBetween00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3* self = (Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'angleBetween'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->angleBetween(*dest);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'angleBetween'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_ZERO
static int tolua_get_Ogre__Vector3_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::ZERO,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_X
static int tolua_get_Ogre__Vector3_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Y
static int tolua_get_Ogre__Vector3_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_Z
static int tolua_get_Ogre__Vector3_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_X of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_X,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Y of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Y,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: NEGATIVE_UNIT_Z of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z
static int tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::NEGATIVE_UNIT_Z,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_SCALE of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Vector3_UNIT_SCALE
static int tolua_get_Ogre__Vector3_UNIT_SCALE(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Vector3::UNIT_SCALE,"const Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new00
static int tolua_Stormfighter_Ogre_Quaternion_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fW = ((float)  tolua_tonumber(tolua_S,2,0));
  float fX = ((float)  tolua_tonumber(tolua_S,3,0));
  float fY = ((float)  tolua_tonumber(tolua_S,4,0));
  float fZ = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new00_local
static int tolua_Stormfighter_Ogre_Quaternion_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fW = ((float)  tolua_tonumber(tolua_S,2,0));
  float fX = ((float)  tolua_tonumber(tolua_S,3,0));
  float fY = ((float)  tolua_tonumber(tolua_S,4,0));
  float fZ = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(fW,fX,fY,fZ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new01
static int tolua_Stormfighter_Ogre_Quaternion_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rkQ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new01_local
static int tolua_Stormfighter_Ogre_Quaternion_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rkQ));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new02
static int tolua_Stormfighter_Ogre_Quaternion_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* rot = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rot));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new02_local
static int tolua_Stormfighter_Ogre_Quaternion_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Matrix3* rot = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rot));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new03
static int tolua_Stormfighter_Ogre_Quaternion_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new03_local
static int tolua_Stormfighter_Ogre_Quaternion_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*rfAngle,*rkAxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new04
static int tolua_Stormfighter_Ogre_Quaternion_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_new04_local
static int tolua_Stormfighter_Ogre_Quaternion_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* xaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zaxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Quaternion* tolua_ret = (Ogre::Quaternion*)  Mtolua_new((Ogre::Quaternion)(*xaxis,*yaxis,*zaxis));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromRotationMatrix of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_FromRotationMatrix00
static int tolua_Stormfighter_Ogre_Quaternion_FromRotationMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix3* kRot = ((const Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromRotationMatrix'", NULL);
#endif
  {
   self->FromRotationMatrix(*kRot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromRotationMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToRotationMatrix of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_ToRotationMatrix00
static int tolua_Stormfighter_Ogre_Quaternion_ToRotationMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Matrix3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Matrix3* kRot = ((Ogre::Matrix3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToRotationMatrix'", NULL);
#endif
  {
   self->ToRotationMatrix(*kRot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToRotationMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_FromAngleAxis00
static int tolua_Stormfighter_Ogre_Quaternion_FromAngleAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian* rfAngle = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAngleAxis'", NULL);
#endif
  {
   self->FromAngleAxis(*rfAngle,*rkAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromAngleAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis00
static int tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Radian",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Radian* rfAngle = ((Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAngleAxis'", NULL);
#endif
  {
   self->ToAngleAxis(*rfAngle,*rkAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAngleAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAngleAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis01
static int tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Degree",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Degree* dAngle = ((Ogre::Degree*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* rkAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAngleAxis'", NULL);
#endif
  {
   self->ToAngleAxis(*dAngle,*rkAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_FromAxes00
static int tolua_Stormfighter_Ogre_Quaternion_FromAxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* akAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAxes'", NULL);
#endif
  {
   self->FromAxes(akAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FromAxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FromAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_FromAxes01
static int tolua_Stormfighter_Ogre_Quaternion_FromAxes01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* xAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* yAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* zAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FromAxes'", NULL);
#endif
  {
   self->FromAxes(*xAxis,*yAxis,*zAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_FromAxes00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_ToAxes00
static int tolua_Stormfighter_Ogre_Quaternion_ToAxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* akAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxes'", NULL);
#endif
  {
   self->ToAxes(akAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToAxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToAxes of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_ToAxes01
static int tolua_Stormfighter_Ogre_Quaternion_ToAxes01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3* xAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  Ogre::Vector3* yAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  Ogre::Vector3* zAxis = ((Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToAxes'", NULL);
#endif
  {
   self->ToAxes(*xAxis,*yAxis,*zAxis);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion_ToAxes00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: xAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_xAxis00
static int tolua_Stormfighter_Ogre_Quaternion_xAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'xAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->xAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_yAxis00
static int tolua_Stormfighter_Ogre_Quaternion_yAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->yAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: zAxis of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_zAxis00
static int tolua_Stormfighter_Ogre_Quaternion_zAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'zAxis'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->zAxis();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'zAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__add00
static int tolua_Stormfighter_Ogre_Quaternion__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator+(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__sub00
static int tolua_Stormfighter_Ogre_Quaternion__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator-(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__mul00
static int tolua_Stormfighter_Ogre_Quaternion__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator*(*rkQ);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__mul01
static int tolua_Stormfighter_Ogre_Quaternion__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  float fScalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator*(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__sub01
static int tolua_Stormfighter_Ogre_Quaternion__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__eq00
static int tolua_Stormfighter_Ogre_Quaternion__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rhs = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*rhs);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dot of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Dot00
static int tolua_Stormfighter_Ogre_Quaternion_Dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dot'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Dot(*rkQ);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Norm of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Norm00
static int tolua_Stormfighter_Ogre_Quaternion_Norm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Norm'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Norm();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Norm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_normalise00
static int tolua_Stormfighter_Ogre_Quaternion_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
   float tolua_ret = (float)  self->normalise();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Inverse of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Inverse00
static int tolua_Stormfighter_Ogre_Quaternion_Inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Inverse'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Inverse();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnitInverse of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_UnitInverse00
static int tolua_Stormfighter_Ogre_Quaternion_UnitInverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnitInverse'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->UnitInverse();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnitInverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Exp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Exp00
static int tolua_Stormfighter_Ogre_Quaternion_Exp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Exp'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Exp();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Exp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Log of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Log00
static int tolua_Stormfighter_Ogre_Quaternion_Log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Log'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->Log();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Log'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion__mul02
static int tolua_Stormfighter_Ogre_Quaternion__mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkVector = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->operator*(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Quaternion__mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRoll of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_getRoll00
static int tolua_Stormfighter_Ogre_Quaternion_getRoll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRoll'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getRoll();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRoll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPitch of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_getPitch00
static int tolua_Stormfighter_Ogre_Quaternion_getPitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPitch'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getPitch();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getYaw of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_getYaw00
static int tolua_Stormfighter_Ogre_Quaternion_getYaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getYaw'", NULL);
#endif
  {
   Ogre::Radian tolua_ret = (Ogre::Radian)  self->getYaw();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Radian)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Radian));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Radian");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getYaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: equals of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_equals00
static int tolua_Stormfighter_Ogre_Quaternion_equals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* self = (const Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion* rhs = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Radian* tolerance = ((const Ogre::Radian*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'equals'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->equals(*rhs,*tolerance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'equals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Slerp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Slerp00
static int tolua_Stormfighter_Ogre_Quaternion_Slerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fT = ((float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::Slerp(fT,*rkP,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Slerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SlerpExtraSpins of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_SlerpExtraSpins00
static int tolua_Stormfighter_Ogre_Quaternion_SlerpExtraSpins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fT = ((float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  int iExtraSpins = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::SlerpExtraSpins(fT,*rkP,*rkQ,iExtraSpins);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SlerpExtraSpins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Intermediate of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Intermediate00
static int tolua_Stormfighter_Ogre_Quaternion_Intermediate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Quaternion* rkQ0 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Quaternion* rkQ1 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ2 = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  Ogre::Quaternion* rka = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,5,0));
  Ogre::Quaternion* rkB = ((Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
  {
   Ogre::Quaternion::Intermediate(*rkQ0,*rkQ1,*rkQ2,*rka,*rkB);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Intermediate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Squad of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_Squad00
static int tolua_Stormfighter_Ogre_Quaternion_Squad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fT = ((float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkA = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  const Ogre::Quaternion* rkB = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,5,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,6,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,7,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::Squad(fT,*rkP,*rkA,*rkB,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Squad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nlerp of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Quaternion_nlerp00
static int tolua_Stormfighter_Ogre_Quaternion_nlerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Quaternion",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Quaternion",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fT = ((float)  tolua_tonumber(tolua_S,2,0));
  const Ogre::Quaternion* rkP = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Quaternion* rkQ = ((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,4,0));
  bool shortestPath = ((bool)  tolua_toboolean(tolua_S,5,false));
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  Ogre::Quaternion::nlerp(fT,*rkP,*rkQ,shortestPath);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Quaternion)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Quaternion));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Quaternion");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nlerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ms_fEpsilon of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_ms_fEpsilon
static int tolua_get_Ogre__Quaternion_ms_fEpsilon(lua_State* tolua_S)
{
  tolua_pushnumber(tolua_S,(lua_Number)Ogre::Quaternion::ms_fEpsilon);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_ZERO
static int tolua_get_Ogre__Quaternion_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Quaternion::ZERO,"const Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: IDENTITY of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_IDENTITY
static int tolua_get_Ogre__Quaternion_IDENTITY(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::Quaternion::IDENTITY,"const Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_w
static int tolua_get_Ogre__Quaternion_w(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_w
static int tolua_set_Ogre__Quaternion_w(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_x
static int tolua_get_Ogre__Quaternion_x(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_x
static int tolua_set_Ogre__Quaternion_x(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_y
static int tolua_get_Ogre__Quaternion_y(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_y
static int tolua_set_Ogre__Quaternion_y(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Quaternion_z
static int tolua_get_Ogre__Quaternion_z(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  Ogre::Quaternion */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Quaternion_z
static int tolua_set_Ogre__Quaternion_z(lua_State* tolua_S)
{
  Ogre::Quaternion* self = (Ogre::Quaternion*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_ZERO
static int tolua_get_Ogre__ColourValue_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::ZERO,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Black of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Black
static int tolua_get_Ogre__ColourValue_Black(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Black,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: White of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_White
static int tolua_get_Ogre__ColourValue_White(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::White,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Red of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Red
static int tolua_get_Ogre__ColourValue_Red(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Red,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Green of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Green
static int tolua_get_Ogre__ColourValue_Green(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Green,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Blue of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_Blue
static int tolua_get_Ogre__ColourValue_Blue(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Ogre::ColourValue::Blue,"const Ogre::ColourValue");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_new00
static int tolua_Stormfighter_Ogre_ColourValue_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_new00_local
static int tolua_Stormfighter_Ogre_ColourValue_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float red = ((float)  tolua_tonumber(tolua_S,2,1.0f));
  float green = ((float)  tolua_tonumber(tolua_S,3,1.0f));
  float blue = ((float)  tolua_tonumber(tolua_S,4,1.0f));
  float alpha = ((float)  tolua_tonumber(tolua_S,5,1.0f));
  {
   Ogre::ColourValue* tolua_ret = (Ogre::ColourValue*)  Mtolua_new((Ogre::ColourValue)(red,green,blue,alpha));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_r
static int tolua_get_Ogre__ColourValue_r(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_r
static int tolua_set_Ogre__ColourValue_r(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_g
static int tolua_get_Ogre__ColourValue_g(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_g
static int tolua_set_Ogre__ColourValue_g(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_b
static int tolua_get_Ogre__ColourValue_b(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_b
static int tolua_set_Ogre__ColourValue_b(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__ColourValue_a
static int tolua_get_Ogre__ColourValue_a(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__ColourValue_a
static int tolua_set_Ogre__ColourValue_a(lua_State* tolua_S)
{
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsRGBA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_getAsRGBA00
static int tolua_Stormfighter_Ogre_ColourValue_getAsRGBA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsRGBA'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAsRGBA();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsRGBA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsARGB of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_getAsARGB00
static int tolua_Stormfighter_Ogre_ColourValue_getAsARGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsARGB'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAsARGB();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsARGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsBGRA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_getAsBGRA00
static int tolua_Stormfighter_Ogre_ColourValue_getAsBGRA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsBGRA'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAsBGRA();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsBGRA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAsABGR of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_getAsABGR00
static int tolua_Stormfighter_Ogre_ColourValue_getAsABGR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAsABGR'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAsABGR();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAsABGR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsRGBA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_setAsRGBA00
static int tolua_Stormfighter_Ogre_ColourValue_setAsRGBA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsRGBA'", NULL);
#endif
  {
   self->setAsRGBA(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsRGBA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsARGB of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_setAsARGB00
static int tolua_Stormfighter_Ogre_ColourValue_setAsARGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsARGB'", NULL);
#endif
  {
   self->setAsARGB(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsARGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsBGRA of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_setAsBGRA00
static int tolua_Stormfighter_Ogre_ColourValue_setAsBGRA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsBGRA'", NULL);
#endif
  {
   self->setAsBGRA(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsBGRA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsABGR of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_setAsABGR00
static int tolua_Stormfighter_Ogre_ColourValue_setAsABGR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  unsigned const int val = ((unsigned const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsABGR'", NULL);
#endif
  {
   self->setAsABGR(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsABGR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: saturate of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_saturate00
static int tolua_Stormfighter_Ogre_ColourValue_saturate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'saturate'", NULL);
#endif
  {
   self->saturate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saturate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: saturateCopy of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_saturateCopy00
static int tolua_Stormfighter_Ogre_ColourValue_saturateCopy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'saturateCopy'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->saturateCopy();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'saturateCopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue__add00
static int tolua_Stormfighter_Ogre_ColourValue__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rkVector = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator+(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue__sub00
static int tolua_Stormfighter_Ogre_ColourValue__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rkVector = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator-(*rkVector);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue__div00
static int tolua_Stormfighter_Ogre_ColourValue__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* rhs = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator/(*rhs);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue__div01
static int tolua_Stormfighter_Ogre_ColourValue__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::ColourValue* self = (const Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  const float fScalar = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   Ogre::ColourValue tolua_ret = (Ogre::ColourValue)  self->operator/(fScalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::ColourValue)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::ColourValue));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::ColourValue");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_ColourValue__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHSB of class  Ogre::ColourValue */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_ColourValue_setHSB00
static int tolua_Stormfighter_Ogre_ColourValue_setHSB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::ColourValue",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::ColourValue* self = (Ogre::ColourValue*)  tolua_tousertype(tolua_S,1,0);
  float hue = ((float)  tolua_tonumber(tolua_S,2,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,3,0));
  float brightness = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHSB'", NULL);
#endif
  {
   self->setHSB(hue,saturation,brightness);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHSB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new00_local
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* rkBox = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(*rkBox));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new01_local
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* rkBox = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(*rkBox));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new02
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* min = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* max = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(*min,*max));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new02_local
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* min = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* max = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(*min,*max));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new03
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float mx = ((float)  tolua_tonumber(tolua_S,2,0));
  float my = ((float)  tolua_tonumber(tolua_S,3,0));
  float mz = ((float)  tolua_tonumber(tolua_S,4,0));
  float Mx = ((float)  tolua_tonumber(tolua_S,5,0));
  float My = ((float)  tolua_tonumber(tolua_S,6,0));
  float Mz = ((float)  tolua_tonumber(tolua_S,7,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(mx,my,mz,Mx,My,Mz));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_new03_local
static int tolua_Stormfighter_Ogre_AxisAlignedBox_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float mx = ((float)  tolua_tonumber(tolua_S,2,0));
  float my = ((float)  tolua_tonumber(tolua_S,3,0));
  float mz = ((float)  tolua_tonumber(tolua_S,4,0));
  float Mx = ((float)  tolua_tonumber(tolua_S,5,0));
  float My = ((float)  tolua_tonumber(tolua_S,6,0));
  float Mz = ((float)  tolua_tonumber(tolua_S,7,0));
  {
   Ogre::AxisAlignedBox* tolua_ret = (Ogre::AxisAlignedBox*)  Mtolua_new((Ogre::AxisAlignedBox)(mx,my,mz,Mx,My,Mz));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_delete00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinimum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinimum'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getMinimum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMinimum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMinimum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMinimum'", NULL);
#endif
  {
   Ogre::Vector3& tolua_ret = (Ogre::Vector3&)  self->getMinimum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaximum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaximum'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getMaximum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaximum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaximum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaximum'", NULL);
#endif
  {
   Ogre::Vector3& tolua_ret = (Ogre::Vector3&)  self->getMaximum();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Ogre::Vector3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinimum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimum'", NULL);
#endif
  {
   self->setMinimum(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinimum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimum'", NULL);
#endif
  {
   self->setMinimum(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinimumX of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumX00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimumX'", NULL);
#endif
  {
   self->setMinimumX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimumX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinimumY of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumY00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimumY'", NULL);
#endif
  {
   self->setMinimumY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimumY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMinimumZ of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumZ00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMinimumZ'", NULL);
#endif
  {
   self->setMinimumZ(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMinimumZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaximum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* vec = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximum'", NULL);
#endif
  {
   self->setMaximum(*vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaximum of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximum'", NULL);
#endif
  {
   self->setMaximum(x,y,z);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaximumX of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumX00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximumX'", NULL);
#endif
  {
   self->setMaximumX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximumX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaximumY of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumY00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximumY'", NULL);
#endif
  {
   self->setMaximumY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximumY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaximumZ of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumZ00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float z = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaximumZ'", NULL);
#endif
  {
   self->setMaximumZ(z);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaximumZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExtents of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* min = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* max = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExtents'", NULL);
#endif
  {
   self->setExtents(*min,*max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setExtents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setExtents of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  float mx = ((float)  tolua_tonumber(tolua_S,2,0));
  float my = ((float)  tolua_tonumber(tolua_S,3,0));
  float mz = ((float)  tolua_tonumber(tolua_S,4,0));
  float Mx = ((float)  tolua_tonumber(tolua_S,5,0));
  float My = ((float)  tolua_tonumber(tolua_S,6,0));
  float Mz = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setExtents'", NULL);
#endif
  {
   self->setExtents(mx,my,mz,Mx,My,Mz);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAllCorners of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getAllCorners00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getAllCorners00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAllCorners'", NULL);
#endif
  {
   const Ogre::Vector3* tolua_ret = (const Ogre::Vector3*)  self->getAllCorners();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const Ogre::Vector3");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAllCorners'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCorner of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getCorner00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getCorner00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  Ogre::AxisAlignedBox::CornerEnum cornerToGet = ((Ogre::AxisAlignedBox::CornerEnum) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCorner'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getCorner(cornerToGet);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCorner'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: merge of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_merge00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_merge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* rhs = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'merge'", NULL);
#endif
  {
   self->merge(*rhs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'merge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: merge of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_merge01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_merge01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* point = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'merge'", NULL);
#endif
  {
   self->merge(*point);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_merge00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: transform of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_transform00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* matrix = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transform'", NULL);
#endif
  {
   self->transform(*matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transformAffine of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_transformAffine00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_transformAffine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Matrix4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Matrix4* m = ((const Ogre::Matrix4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transformAffine'", NULL);
#endif
  {
   self->transformAffine(*m);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transformAffine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNull of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setNull00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setNull00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNull'", NULL);
#endif
  {
   self->setNull();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNull'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isNull of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_isNull00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_isNull00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isNull'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isNull();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isNull'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFinite of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_isFinite00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_isFinite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFinite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFinite();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFinite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInfinite of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_setInfinite00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_setInfinite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInfinite'", NULL);
#endif
  {
   self->setInfinite();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInfinite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isInfinite of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_isInfinite00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_isInfinite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isInfinite'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isInfinite();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isInfinite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_intersects00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_intersects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* b2 = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*b2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersection of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_intersection00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_intersection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* b2 = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersection'", NULL);
#endif
  {
   Ogre::AxisAlignedBox tolua_ret = (Ogre::AxisAlignedBox)  self->intersection(*b2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::AxisAlignedBox)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::AxisAlignedBox));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: volume of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_volume00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_volume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'volume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->volume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'volume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scale of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_scale00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* s = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scale'", NULL);
#endif
  {
   self->scale(*s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_intersects01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_intersects01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Sphere",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Sphere* s = ((const Ogre::Sphere*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*s);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_intersects00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_intersects02
static int tolua_Stormfighter_Ogre_AxisAlignedBox_intersects02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Plane* p = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*p);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_intersects01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_intersects03
static int tolua_Stormfighter_Ogre_AxisAlignedBox_intersects03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_intersects02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenter of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getCenter00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenter'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getCenter();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSize of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getSize00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSize'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHalfSize of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_getHalfSize00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_getHalfSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHalfSize'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->getHalfSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Vector3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Vector3));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Vector3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHalfSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: contains of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_contains00
static int tolua_Stormfighter_Ogre_AxisAlignedBox_contains00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'contains'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->contains(*v);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'contains'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: contains of class  Ogre::AxisAlignedBox */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_AxisAlignedBox_contains01
static int tolua_Stormfighter_Ogre_AxisAlignedBox_contains01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::AxisAlignedBox",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::AxisAlignedBox* self = (const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* other = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'contains'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->contains(*other);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_AxisAlignedBox_contains00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  Component */
#ifndef TOLUA_DISABLE_tolua_get_Component_type
static int tolua_get_Component_type(lua_State* tolua_S)
{
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_clone00
static int tolua_Stormfighter_Component_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Component* self = (const Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onInit of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onInit00
static int tolua_Stormfighter_Component_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onInit'", NULL);
#endif
  {
   self->onInit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onUpdate00
static int tolua_Stormfighter_Component_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
  {
   self->onUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onPhysicsUpdate of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onPhysicsUpdate00
static int tolua_Stormfighter_Component_onPhysicsUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onPhysicsUpdate'", NULL);
#endif
  {
   self->onPhysicsUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onPhysicsUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionEnter of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onCollisionEnter00
static int tolua_Stormfighter_Component_onCollisionEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionEnter'", NULL);
#endif
  {
   self->onCollisionEnter(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionExit of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onCollisionExit00
static int tolua_Stormfighter_Component_onCollisionExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionExit'", NULL);
#endif
  {
   self->onCollisionExit(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionStay of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_onCollisionStay00
static int tolua_Stormfighter_Component_onCollisionStay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionStay'", NULL);
#endif
  {
   self->onCollisionStay(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionStay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: state of class  Component */
#ifndef TOLUA_DISABLE_tolua_get_Component_state
static int tolua_get_Component_state(lua_State* tolua_S)
{
  Component* self = (Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: object of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_object00
static int tolua_Stormfighter_Component_object00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Component* self = (const Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'object'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->object();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'object'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: application of class  Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Component_application00
static int tolua_Stormfighter_Component_application00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Component* self = (const Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'application'", NULL);
#endif
  {
   StormfighterApp* tolua_ret = (StormfighterApp*)  self->application();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"StormfighterApp");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'application'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_type
static int tolua_get_STransform_type(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: position of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_position
static int tolua_get_STransform_position(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  STransform */
#ifndef TOLUA_DISABLE_tolua_set_STransform_position
static int tolua_set_STransform_position(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setPosition(*((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: orientation of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_orientation
static int tolua_get_STransform_orientation(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orientation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->orientation(),"Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: orientation of class  STransform */
#ifndef TOLUA_DISABLE_tolua_set_STransform_orientation
static int tolua_set_STransform_orientation(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orientation'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Quaternion",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setOrientation(*((  Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_scale
static int tolua_get_STransform_scale(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->scale(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  STransform */
#ifndef TOLUA_DISABLE_tolua_set_STransform_scale
static int tolua_set_STransform_scale(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setScale(*((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: worldMatrix of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_worldMatrix00
static int tolua_Stormfighter_STransform_worldMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const STransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const STransform* self = (const STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'worldMatrix'", NULL);
#endif
  {
   const Ogre::Matrix4& tolua_ret = (const Ogre::Matrix4&)  self->worldMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Matrix4");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'worldMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: worldPosition of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_worldPosition
static int tolua_get_STransform_worldPosition(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worldPosition'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->worldPosition(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: worldOrientation of class  STransform */
#ifndef TOLUA_DISABLE_tolua_get_STransform_worldOrientation
static int tolua_get_STransform_worldOrientation(lua_State* tolua_S)
{
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worldOrientation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->worldOrientation(),"Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_lookAt00
static int tolua_Stormfighter_STransform_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3 position = *((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookAt'", NULL);
#endif
  {
   self->lookAt(position);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: move of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_move00
static int tolua_Stormfighter_STransform_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3 delta = *((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'move'", NULL);
#endif
  {
   self->move(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: moveRelative of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_moveRelative00
static int tolua_Stormfighter_STransform_moveRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3 delta = *((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'moveRelative'", NULL);
#endif
  {
   self->moveRelative(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'moveRelative'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rotate of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_rotate00
static int tolua_Stormfighter_STransform_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Quaternion delta = *((const Ogre::Quaternion*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rotate'", NULL);
#endif
  {
   self->rotate(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: yaw of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_yaw00
static int tolua_Stormfighter_STransform_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian angle = *((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'yaw'", NULL);
#endif
  {
   self->yaw(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'yaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pitch of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_pitch00
static int tolua_Stormfighter_STransform_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian angle = *((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pitch'", NULL);
#endif
  {
   self->pitch(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pitch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: roll of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_roll00
static int tolua_Stormfighter_STransform_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Radian angle = *((const Ogre::Radian*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'roll'", NULL);
#endif
  {
   self->roll(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'roll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFixedYawAxis of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_setFixedYawAxis00
static int tolua_Stormfighter_STransform_setFixedYawAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  bool useFixed = ((bool)  tolua_toboolean(tolua_S,2,0));
  const Ogre::Vector3 fixedAxis = *((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFixedYawAxis'", NULL);
#endif
  {
   self->setFixedYawAxis(useFixed,fixedAxis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFixedYawAxis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInheritScale of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_setInheritScale00
static int tolua_Stormfighter_STransform_setInheritScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  bool inherit = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInheritScale'", NULL);
#endif
  {
   self->setInheritScale(inherit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInheritScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInheritOrientation of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_setInheritOrientation00
static int tolua_Stormfighter_STransform_setInheritOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  bool inherit = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInheritOrientation'", NULL);
#endif
  {
   self->setInheritOrientation(inherit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInheritOrientation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_setVisible00
static int tolua_Stormfighter_STransform_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool cascade = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible,cascade);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showBoundingBox of class  STransform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_STransform_showBoundingBox00
static int tolua_Stormfighter_STransform_showBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"STransform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  STransform* self = (STransform*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showBoundingBox'", NULL);
#endif
  {
   self->showBoundingBox(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  SMovableObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMovableObject_getBoundingBox00
static int tolua_Stormfighter_SMovableObject_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SMovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SMovableObject* self = (const SMovableObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
    Ogre::AxisAlignedBox tolua_ret = (  Ogre::AxisAlignedBox)  self->getBoundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::AxisAlignedBox)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::AxisAlignedBox));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_new00
static int tolua_Stormfighter_SMesh_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SMesh* tolua_ret = (SMesh*)  Mtolua_new((SMesh)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SMesh");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_new00_local
static int tolua_Stormfighter_SMesh_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SMesh* tolua_ret = (SMesh*)  Mtolua_new((SMesh)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SMesh");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_new01
static int tolua_Stormfighter_SMesh_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   std::string meshname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SMesh* tolua_ret = (SMesh*)  Mtolua_new((SMesh)(meshname));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SMesh");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SMesh_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_new01_local
static int tolua_Stormfighter_SMesh_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   std::string meshname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SMesh* tolua_ret = (SMesh*)  Mtolua_new((SMesh)(meshname));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SMesh");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SMesh_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_get_SMesh_type
static int tolua_get_SMesh_type(lua_State* tolua_S)
{
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_clone00
static int tolua_Stormfighter_SMesh_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SMesh* self = (const SMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SMesh* tolua_ret = (SMesh*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SMesh");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: meshName of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_get_SMesh_meshName
static int tolua_get_SMesh_meshName(lua_State* tolua_S)
{
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'meshName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->meshName());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: meshName of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_set_SMesh_meshName
static int tolua_set_SMesh_meshName(lua_State* tolua_S)
{
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'meshName'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setMeshName(((  std::string)  tolua_tocppstring(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaterialName of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_setMaterialName00
static int tolua_Stormfighter_SMesh_setMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
   std::string materialName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaterialName'", NULL);
#endif
  {
   self->setMaterialName(materialName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaterialName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: animated of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_animated00
static int tolua_Stormfighter_SMesh_animated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SMesh* self = (const SMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'animated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->animated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'animated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationStateEnabled of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_setAnimationStateEnabled00
static int tolua_Stormfighter_SMesh_setAnimationStateEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
   std::string animstate = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  bool enabled = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationStateEnabled'", NULL);
#endif
  {
   self->setAnimationStateEnabled(animstate,enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationStateEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnimationStateLoop of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_setAnimationStateLoop00
static int tolua_Stormfighter_SMesh_setAnimationStateLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
   std::string animstate = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  bool loop = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnimationStateLoop'", NULL);
#endif
  {
   self->setAnimationStateLoop(animstate,loop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnimationStateLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addAnimationTime of class  SMesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SMesh_addAnimationTime00
static int tolua_Stormfighter_SMesh_addAnimationTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SMesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SMesh* self = (SMesh*)  tolua_tousertype(tolua_S,1,0);
   std::string animstate = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
    float time = ((   float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addAnimationTime'", NULL);
#endif
  {
   self->addAnimationTime(animstate,time);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addAnimationTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SPrimitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SPrimitive_new00
static int tolua_Stormfighter_SPrimitive_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SPrimitive",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SPrimitive::PrimitiveType type = ((SPrimitive::PrimitiveType) (int)  tolua_tonumber(tolua_S,2,0));
  {
   SPrimitive* tolua_ret = (SPrimitive*)  Mtolua_new((SPrimitive)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SPrimitive");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SPrimitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SPrimitive_new00_local
static int tolua_Stormfighter_SPrimitive_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SPrimitive",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SPrimitive::PrimitiveType type = ((SPrimitive::PrimitiveType) (int)  tolua_tonumber(tolua_S,2,0));
  {
   SPrimitive* tolua_ret = (SPrimitive*)  Mtolua_new((SPrimitive)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SPrimitive");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SPrimitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SPrimitive_delete00
static int tolua_Stormfighter_SPrimitive_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SPrimitive",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SPrimitive* self = (SPrimitive*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SPrimitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SPrimitive_clone00
static int tolua_Stormfighter_SPrimitive_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SPrimitive",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SPrimitive* self = (const SPrimitive*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SPrimitive* tolua_ret = (SPrimitive*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SPrimitive");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SPrimitive */
#ifndef TOLUA_DISABLE_tolua_get_SPrimitive_type
static int tolua_get_SPrimitive_type(lua_State* tolua_S)
{
  SPrimitive* self = (SPrimitive*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_new00
static int tolua_Stormfighter_SCamera_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SCamera* tolua_ret = (SCamera*)  Mtolua_new((SCamera)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SCamera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_new00_local
static int tolua_Stormfighter_SCamera_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SCamera* tolua_ret = (SCamera*)  Mtolua_new((SCamera)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SCamera");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_delete00
static int tolua_Stormfighter_SCamera_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_clone00
static int tolua_Stormfighter_SCamera_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SCamera* self = (const SCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SCamera* tolua_ret = (SCamera*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SCamera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_get_SCamera_type
static int tolua_get_SCamera_type(lua_State* tolua_S)
{
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNearClipDistance of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_setNearClipDistance00
static int tolua_Stormfighter_SCamera_setNearClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
    float distance = ((   float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNearClipDistance'", NULL);
#endif
  {
   self->setNearClipDistance(distance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNearClipDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAspectRatio of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_setAspectRatio00
static int tolua_Stormfighter_SCamera_setAspectRatio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
    float ratio = ((   float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAspectRatio'", NULL);
#endif
  {
   self->setAspectRatio(ratio);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAspectRatio'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPolygonMode of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_setPolygonMode00
static int tolua_Stormfighter_SCamera_setPolygonMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SCamera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::PolygonMode",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
  Ogre::PolygonMode polymode = *((Ogre::PolygonMode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPolygonMode'", NULL);
#endif
  {
   self->setPolygonMode(polymode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPolygonMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: activate of class  SCamera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SCamera_activate00
static int tolua_Stormfighter_SCamera_activate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SCamera* self = (SCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activate'", NULL);
#endif
  {
   self->activate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_new00
static int tolua_Stormfighter_SLight_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SLight",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Light::LightTypes",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light::LightTypes type = *((Ogre::Light::LightTypes*)  tolua_tousertype(tolua_S,2,0));
  {
   SLight* tolua_ret = (SLight*)  Mtolua_new((SLight)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SLight");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_new00_local
static int tolua_Stormfighter_SLight_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SLight",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Light::LightTypes",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light::LightTypes type = *((Ogre::Light::LightTypes*)  tolua_tousertype(tolua_S,2,0));
  {
   SLight* tolua_ret = (SLight*)  Mtolua_new((SLight)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SLight");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SLight */
#ifndef TOLUA_DISABLE_tolua_get_SLight_type
static int tolua_get_SLight_type(lua_State* tolua_S)
{
  SLight* self = (SLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_clone00
static int tolua_Stormfighter_SLight_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SLight* self = (const SLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SLight* tolua_ret = (SLight*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SLight");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDiffuseColour of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_setDiffuseColour00
static int tolua_Stormfighter_SLight_setDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLight",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLight* self = (SLight*)  tolua_tousertype(tolua_S,1,0);
  Ogre::ColourValue diffuse_colour = *((Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDiffuseColour'", NULL);
#endif
  {
   self->setDiffuseColour(diffuse_colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDiffuseColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSpecularColour of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_setSpecularColour00
static int tolua_Stormfighter_SLight_setSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLight",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLight* self = (SLight*)  tolua_tousertype(tolua_S,1,0);
  Ogre::ColourValue specular_colour = *((Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSpecularColour'", NULL);
#endif
  {
   self->setSpecularColour(specular_colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSpecularColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAsTerrainLight of class  SLight */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLight_setAsTerrainLight00
static int tolua_Stormfighter_SLight_setAsTerrainLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLight",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLight* self = (SLight*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAsTerrainLight'", NULL);
#endif
  {
   self->setAsTerrainLight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAsTerrainLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_new00
static int tolua_Stormfighter_SManualObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isStatic = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   SManualObject* tolua_ret = (SManualObject*)  Mtolua_new((SManualObject)(isStatic));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SManualObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_new00_local
static int tolua_Stormfighter_SManualObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isStatic = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   SManualObject* tolua_ret = (SManualObject*)  Mtolua_new((SManualObject)(isStatic));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SManualObject");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_delete00
static int tolua_Stormfighter_SManualObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_clone00
static int tolua_Stormfighter_SManualObject_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SManualObject* self = (const SManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SManualObject* tolua_ret = (SManualObject*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SManualObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onAdd of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_onAdd00
static int tolua_Stormfighter_SManualObject_onAdd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"STransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   std::string goname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  STransform* transform = ((STransform*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onAdd'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->onAdd(goname,transform);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onAdd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: begin of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_begin00
static int tolua_Stormfighter_SManualObject_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   std::string materialName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  SManualObject::OperationType opType = ((SManualObject::OperationType) (int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'begin'", NULL);
#endif
  {
   self->begin(materialName,opType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'begin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finish of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_finish00
static int tolua_Stormfighter_SManualObject_finish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finish'", NULL);
#endif
  {
   self->finish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: position of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_position00
static int tolua_Stormfighter_SManualObject_position00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 pos = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'position'", NULL);
#endif
  {
   self->position(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'position'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: colour of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_colour00
static int tolua_Stormfighter_SManualObject_colour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   Ogre::ColourValue col = *((  Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'colour'", NULL);
#endif
  {
   self->colour(col);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'colour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normal of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_normal00
static int tolua_Stormfighter_SManualObject_normal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 normal = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normal'", NULL);
#endif
  {
   self->normal(normal);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tangent of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_tangent00
static int tolua_Stormfighter_SManualObject_tangent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 tangent = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tangent'", NULL);
#endif
  {
   self->tangent(tangent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tangent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textureCoord of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_textureCoord00
static int tolua_Stormfighter_SManualObject_textureCoord00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 uvw = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'textureCoord'", NULL);
#endif
  {
   self->textureCoord(uvw);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'textureCoord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: index of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_index00
static int tolua_Stormfighter_SManualObject_index00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ind = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'index'", NULL);
#endif
  {
   self->index(ind);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'index'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: triangle of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_triangle00
static int tolua_Stormfighter_SManualObject_triangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ind1 = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int ind2 = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int ind3 = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'triangle'", NULL);
#endif
  {
   self->triangle(ind1,ind2,ind3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'triangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: quad of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_quad00
static int tolua_Stormfighter_SManualObject_quad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
  unsigned int ind1 = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int ind2 = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int ind3 = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int ind4 = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'quad'", NULL);
#endif
  {
   self->quad(ind1,ind2,ind3,ind4);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'quad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  SManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SManualObject_clear00
static int tolua_Stormfighter_SManualObject_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SManualObject* self = (SManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SScript_clone00
static int tolua_Stormfighter_SScript_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SScript* self = (const SScript*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SScript* tolua_ret = (SScript*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SScript");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SScript */
#ifndef TOLUA_DISABLE_tolua_get_SScript_type
static int tolua_get_SScript_type(lua_State* tolua_S)
{
  SScript* self = (SScript*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_new00
static int tolua_Stormfighter_SLuaScript_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   std::string type = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string callpath = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   SLuaScript* tolua_ret = (SLuaScript*)  Mtolua_new((SLuaScript)(type,callpath));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SLuaScript");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_new00_local
static int tolua_Stormfighter_SLuaScript_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   std::string type = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string callpath = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
  {
   SLuaScript* tolua_ret = (SLuaScript*)  Mtolua_new((SLuaScript)(type,callpath));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SLuaScript");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onInit of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onInit00
static int tolua_Stormfighter_SLuaScript_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onInit'", NULL);
#endif
  {
   self->onInit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onInit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onUpdate of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onUpdate00
static int tolua_Stormfighter_SLuaScript_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onUpdate'", NULL);
#endif
  {
   self->onUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onPhysicsUpdate of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onPhysicsUpdate00
static int tolua_Stormfighter_SLuaScript_onPhysicsUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onPhysicsUpdate'", NULL);
#endif
  {
   self->onPhysicsUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onPhysicsUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionEnter of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onCollisionEnter00
static int tolua_Stormfighter_SLuaScript_onCollisionEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionEnter'", NULL);
#endif
  {
   self->onCollisionEnter(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionEnter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionExit of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onCollisionExit00
static int tolua_Stormfighter_SLuaScript_onCollisionExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionExit'", NULL);
#endif
  {
   self->onCollisionExit(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onCollisionStay of class  SLuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SLuaScript_onCollisionStay00
static int tolua_Stormfighter_SLuaScript_onCollisionStay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SLuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SLuaScript* self = (SLuaScript*)  tolua_tousertype(tolua_S,1,0);
  const CollisionData* collisionData = ((const CollisionData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onCollisionStay'", NULL);
#endif
  {
   self->onCollisionStay(collisionData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onCollisionStay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_delete00
static int tolua_Stormfighter_GameObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: name of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_name00
static int tolua_Stormfighter_GameObject_name00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameObject* self = (const GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'name'", NULL);
#endif
  {
    const std::string tolua_ret = (  const std::string)  self->name();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'name'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: debug of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_debug00
static int tolua_Stormfighter_GameObject_debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'debug'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->debug();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_clone00
static int tolua_Stormfighter_GameObject_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_clone01
static int tolua_Stormfighter_GameObject_clone01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->clone(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_GameObject_clone00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addComponent of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_addComponent00
static int tolua_Stormfighter_GameObject_addComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  Component* component = ((Component*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addComponent'", NULL);
#endif
  {
   self->addComponent(component);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addComponent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: allComponents of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_allComponents00
static int tolua_Stormfighter_GameObject_allComponents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'allComponents'", NULL);
#endif
  {
    std::vector<Component*> tolua_ret = (  std::vector<Component*>)  self->allComponents();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<Component*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<Component*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'allComponents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: component of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_component00
static int tolua_Stormfighter_GameObject_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'component'", NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->component(type);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
   tolua_pushcppstring(tolua_S,(const char*)type);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasComponent of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_hasComponent00
static int tolua_Stormfighter_GameObject_hasComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const GameObject* self = (const GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasComponent'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasComponent(type);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)type);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasComponent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transform of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_transform00
static int tolua_Stormfighter_GameObject_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transform'", NULL);
#endif
  {
   STransform* tolua_ret = (STransform*)  self->transform();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"STransform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: firstComponentInChildren of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_firstComponentInChildren00
static int tolua_Stormfighter_GameObject_firstComponentInChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'firstComponentInChildren'", NULL);
#endif
  {
   Component* tolua_ret = (Component*)  self->firstComponentInChildren(type);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Component");
   tolua_pushcppstring(tolua_S,(const char*)type);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'firstComponentInChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: allComponentInChildren of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_allComponentInChildren00
static int tolua_Stormfighter_GameObject_allComponentInChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'allComponentInChildren'", NULL);
#endif
  {
    std::vector<Component*> tolua_ret = (  std::vector<Component*>)  self->allComponentInChildren(type);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<Component*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<Component*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
   tolua_pushcppstring(tolua_S,(const char*)type);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'allComponentInChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSibling of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_addSibling00
static int tolua_Stormfighter_GameObject_addSibling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  GameObject* go = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSibling'", NULL);
#endif
  {
   self->addSibling(go);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSibling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_addChild00
static int tolua_Stormfighter_GameObject_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  GameObject* go = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(go);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_setParent00
static int tolua_Stormfighter_GameObject_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  GameObject* go = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(go);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reParent of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_reParent00
static int tolua_Stormfighter_GameObject_reParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reParent'", NULL);
#endif
  {
   self->reParent();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parent of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_parent00
static int tolua_Stormfighter_GameObject_parent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parent'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->parent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: children of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_children00
static int tolua_Stormfighter_GameObject_children00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'children'", NULL);
#endif
  {
    std::vector<GameObject*> tolua_ret = (  std::vector<GameObject*>)  self->children();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<GameObject*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<GameObject*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<GameObject*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<GameObject*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'children'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_find00
static int tolua_Stormfighter_GameObject_find00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->find(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_find01
static int tolua_Stormfighter_GameObject_find01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
  const GameObject* go = ((const GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->find(go);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_GameObject_find00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearChildren of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_clearChildren00
static int tolua_Stormfighter_GameObject_clearChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearChildren'", NULL);
#endif
  {
   self->clearChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoundingBox of class  GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GameObject_getBoundingBox00
static int tolua_Stormfighter_GameObject_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GameObject* self = (GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoundingBox'", NULL);
#endif
  {
    Ogre::AxisAlignedBox tolua_ret = (  Ogre::AxisAlignedBox)  self->getBoundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::AxisAlignedBox)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::AxisAlignedBox));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::AxisAlignedBox");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hitObject of class  SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_get_SingleRayCastResult_hitObject_ptr
static int tolua_get_SingleRayCastResult_hitObject_ptr(lua_State* tolua_S)
{
  SingleRayCastResult* self = (SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitObject'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->hitObject,"GameObject");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hitObject of class  SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_set_SingleRayCastResult_hitObject_ptr
static int tolua_set_SingleRayCastResult_hitObject_ptr(lua_State* tolua_S)
{
  SingleRayCastResult* self = (SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitObject'",NULL);
  if (!tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hitObject = ((GameObject*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hitPoint of class  SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_get_SingleRayCastResult_hitPoint
static int tolua_get_SingleRayCastResult_hitPoint(lua_State* tolua_S)
{
  SingleRayCastResult* self = (SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitPoint'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->hitPoint,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hitPoint of class  SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_set_SingleRayCastResult_hitPoint
static int tolua_set_SingleRayCastResult_hitPoint(lua_State* tolua_S)
{
  SingleRayCastResult* self = (SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitPoint'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hitPoint = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: logMessage of class  Logger */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Logger_logMessage00
static int tolua_Stormfighter_Logger_logMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const std::string message = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logMessage'", NULL);
#endif
  {
   self->logMessage(message);
   tolua_pushcppstring(tolua_S,(const char*)message);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTerrainLight of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_setTerrainLight00
static int tolua_Stormfighter_Graphics_setTerrainLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Graphics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Graphics* self = (Graphics*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Light* light = ((Ogre::Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTerrainLight'", NULL);
#endif
  {
   self->setTerrainLight(light);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTerrainLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActiveCamera of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_setActiveCamera00
static int tolua_Stormfighter_Graphics_setActiveCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Graphics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Graphics* self = (Graphics*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Camera* camera = ((Ogre::Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActiveCamera'", NULL);
#endif
  {
   self->setActiveCamera(camera);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActiveCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: activeCamera of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_activeCamera00
static int tolua_Stormfighter_Graphics_activeCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Graphics* self = (const Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activeCamera'", NULL);
#endif
  {
   Ogre::Camera* tolua_ret = (Ogre::Camera*)  self->activeCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activeCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDefaultAspectRatio of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_getDefaultAspectRatio00
static int tolua_Stormfighter_Graphics_getDefaultAspectRatio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Graphics* self = (Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefaultAspectRatio'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getDefaultAspectRatio();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefaultAspectRatio'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: defaultViewport of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_defaultViewport00
static int tolua_Stormfighter_Graphics_defaultViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Graphics* self = (const Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defaultViewport'", NULL);
#endif
  {
   Ogre::Viewport* tolua_ret = (Ogre::Viewport*)  self->defaultViewport();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Viewport");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defaultViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: defaultRenderWindow of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_defaultRenderWindow00
static int tolua_Stormfighter_Graphics_defaultRenderWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Graphics* self = (const Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'defaultRenderWindow'", NULL);
#endif
  {
   Ogre::RenderWindow* tolua_ret = (Ogre::RenderWindow*)  self->defaultRenderWindow();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::RenderWindow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defaultRenderWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sceneManager of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_sceneManager00
static int tolua_Stormfighter_Graphics_sceneManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Graphics* self = (const Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sceneManager'", NULL);
#endif
  {
   Ogre::SceneManager* tolua_ret = (Ogre::SceneManager*)  self->sceneManager();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::SceneManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sceneManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: activeCameraToViewportRay of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_activeCameraToViewportRay00
static int tolua_Stormfighter_Graphics_activeCameraToViewportRay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Graphics",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Graphics* self = (Graphics*)  tolua_tousertype(tolua_S,1,0);
    float screenx = ((   float)  tolua_tonumber(tolua_S,2,0));
    float screeny = ((   float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activeCameraToViewportRay'", NULL);
#endif
  {
    Ogre::Ray tolua_ret = (  Ogre::Ray)  self->activeCameraToViewportRay(screenx,screeny);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Ogre::Ray)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Ray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Ogre::Ray));
     tolua_pushusertype(tolua_S,tolua_obj,"Ogre::Ray");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activeCameraToViewportRay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: closestExactRayQuery of class  Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Graphics_closestExactRayQuery00
static int tolua_Stormfighter_Graphics_closestExactRayQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Graphics",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Ray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Graphics* self = (Graphics*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Ray ray = *((  Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closestExactRayQuery'", NULL);
#endif
  {
   SingleRayCastResult tolua_ret = (SingleRayCastResult)  self->closestExactRayQuery(ray);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((SingleRayCastResult)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(SingleRayCastResult));
     tolua_pushusertype(tolua_S,tolua_obj,"SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'closestExactRayQuery'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pointOnA of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_pointOnA
static int tolua_get_CollisionData_pointOnA(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnA'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->pointOnA,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pointOnA of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_pointOnA
static int tolua_set_CollisionData_pointOnA(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnA'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pointOnA = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pointOnB of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_pointOnB
static int tolua_get_CollisionData_pointOnB(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnB'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->pointOnB,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pointOnB of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_pointOnB
static int tolua_set_CollisionData_pointOnB(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnB'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pointOnB = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: normalOnB of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_normalOnB
static int tolua_get_CollisionData_normalOnB(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normalOnB'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->normalOnB,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: normalOnB of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_normalOnB
static int tolua_set_CollisionData_normalOnB(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normalOnB'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->normalOnB = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: stale of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_stale
static int tolua_get_CollisionData_stale(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'stale'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->stale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: stale of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_stale
static int tolua_set_CollisionData_stale(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'stale'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->stale = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: fresh of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_fresh
static int tolua_get_CollisionData_fresh(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fresh'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->fresh);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fresh of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_fresh
static int tolua_set_CollisionData_fresh(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fresh'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->fresh = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: other of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_CollisionData_other_ptr
static int tolua_get_CollisionData_other_ptr(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'other'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->other,"GameObject");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: other of class  CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_CollisionData_other_ptr
static int tolua_set_CollisionData_other_ptr(lua_State* tolua_S)
{
  CollisionData* self = (CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'other'",NULL);
  if (!tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->other = ((GameObject*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: tick of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_tick00
static int tolua_Stormfighter_Physics_tick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
    float deltaTime = ((   float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tick'", NULL);
#endif
  {
   self->tick(deltaTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRigidBody of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_addRigidBody00
static int tolua_Stormfighter_Physics_addRigidBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
  btRigidBody* rigidBody = ((btRigidBody*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRigidBody'", NULL);
#endif
  {
   self->addRigidBody(rigidBody);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addRigidBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addRigidBody of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_addRigidBody01
static int tolua_Stormfighter_Physics_addRigidBody01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"std::vector<SString>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
  btRigidBody* rigidBody = ((btRigidBody*)  tolua_tousertype(tolua_S,2,0));
   std::string group = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   std::vector<SString> collidesWith = *((  std::vector<SString>*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRigidBody'", NULL);
#endif
  {
   self->addRigidBody(rigidBody,group,collidesWith);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Physics_addRigidBody00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeRigidBody of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_removeRigidBody00
static int tolua_Stormfighter_Physics_removeRigidBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
  btRigidBody* rigidBody = ((btRigidBody*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeRigidBody'", NULL);
#endif
  {
   self->removeRigidBody(rigidBody);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeRigidBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCollisionGroup of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_addCollisionGroup00
static int tolua_Stormfighter_Physics_addCollisionGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCollisionGroup'", NULL);
#endif
  {
   self->addCollisionGroup(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCollisionGroup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: closestRayCast of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_closestRayCast00
static int tolua_Stormfighter_Physics_closestRayCast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* from = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* to = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closestRayCast'", NULL);
#endif
  {
   SingleRayCastResult tolua_ret = (SingleRayCastResult)  self->closestRayCast(*from,*to);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((SingleRayCastResult)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(SingleRayCastResult));
     tolua_pushusertype(tolua_S,tolua_obj,"SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'closestRayCast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDebugDraw of class  Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Physics_setDebugDraw00
static int tolua_Stormfighter_Physics_setDebugDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Physics",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Physics* self = (Physics*)  tolua_tousertype(tolua_S,1,0);
  bool draw = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDebugDraw'", NULL);
#endif
  {
   self->setDebugDraw(draw);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDebugDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: capture of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_capture00
static int tolua_Stormfighter_Input_capture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'capture'", NULL);
#endif
  {
   self->capture();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'capture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isKeyDown of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_isKeyDown00
static int tolua_Stormfighter_Input_isKeyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  const OIS::KeyCode key = ((const OIS::KeyCode) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isKeyDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isKeyDown(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isKeyDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isModifierDown of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_isModifierDown00
static int tolua_Stormfighter_Input_isModifierDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  const OIS::Keyboard::Modifier mod = ((const OIS::Keyboard::Modifier) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isModifierDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isModifierDown(mod);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isModifierDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isButtonDown of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_isButtonDown00
static int tolua_Stormfighter_Input_isButtonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  const OIS::MouseButtonID button = ((const OIS::MouseButtonID) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isButtonDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isButtonDown(button);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isButtonDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: axisRelative of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_axisRelative00
static int tolua_Stormfighter_Input_axisRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  Input::Axis axis = ((Input::Axis) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'axisRelative'", NULL);
#endif
  {
   int tolua_ret = (int)  self->axisRelative(axis);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'axisRelative'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: axisAbsolute of class  Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Input_axisAbsolute00
static int tolua_Stormfighter_Input_axisAbsolute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Input* self = (Input*)  tolua_tousertype(tolua_S,1,0);
  Input::Axis axis = ((Input::Axis) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'axisAbsolute'", NULL);
#endif
  {
   int tolua_ret = (int)  self->axisAbsolute(axis);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'axisAbsolute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GUI_update00
static int tolua_Stormfighter_GUI_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUI",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUI* self = (GUI*)  tolua_tousertype(tolua_S,1,0);
  double deltaTime = ((double)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update(deltaTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: executeJS of class  GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GUI_executeJS00
static int tolua_Stormfighter_GUI_executeJS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUI",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUI* self = (GUI*)  tolua_tousertype(tolua_S,1,0);
   std::string script = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'executeJS'", NULL);
#endif
  {
   self->executeJS(script);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'executeJS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reload of class  GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GUI_reload00
static int tolua_Stormfighter_GUI_reload00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUI",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUI* self = (GUI*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reload'", NULL);
#endif
  {
   self->reload();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reload'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pollCommands of class  GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_GUI_pollCommands00
static int tolua_Stormfighter_GUI_pollCommands00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"GUI",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  GUI* self = (GUI*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pollCommands'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->pollCommands();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pollCommands'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_update00
static int tolua_Stormfighter_Hierarchy_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'update'", NULL);
#endif
  {
   self->update();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: find of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_find00
static int tolua_Stormfighter_Hierarchy_find00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->find(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createGameObject of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_createGameObject00
static int tolua_Stormfighter_Hierarchy_createGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->createGameObject(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createGameObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createGameObject of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_createGameObject01
static int tolua_Stormfighter_Hierarchy_createGameObject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->createGameObject();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Hierarchy_createGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyGameObject of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_destroyGameObject00
static int tolua_Stormfighter_Hierarchy_destroyGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyGameObject'", NULL);
#endif
  {
   self->destroyGameObject(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyGameObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyGameObject of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_destroyGameObject01
static int tolua_Stormfighter_Hierarchy_destroyGameObject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
  GameObject* gameObject = ((GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyGameObject'", NULL);
#endif
  {
   self->destroyGameObject(gameObject);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Hierarchy_destroyGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRoot of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_getRoot00
static int tolua_Stormfighter_Hierarchy_getRoot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRoot'", NULL);
#endif
  {
   GameObject* tolua_ret = (GameObject*)  self->getRoot();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"GameObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRoot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: debug of class  Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Hierarchy_debug00
static int tolua_Stormfighter_Hierarchy_debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Hierarchy* self = (Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'debug'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->debug();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_new00
static int tolua_Stormfighter_StormfighterApp_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   StormfighterApp* tolua_ret = (StormfighterApp*)  Mtolua_new((StormfighterApp)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"StormfighterApp");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_new00_local
static int tolua_Stormfighter_StormfighterApp_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   StormfighterApp* tolua_ret = (StormfighterApp*)  Mtolua_new((StormfighterApp)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"StormfighterApp");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_delete00
static int tolua_Stormfighter_StormfighterApp_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  StormfighterApp* self = (StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_log00
static int tolua_Stormfighter_StormfighterApp_log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  StormfighterApp* self = (StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
   std::string message = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'", NULL);
#endif
  {
   self->log(message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'log'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: graphics of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_graphics00
static int tolua_Stormfighter_StormfighterApp_graphics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const StormfighterApp* self = (const StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'graphics'", NULL);
#endif
  {
   Graphics* tolua_ret = (Graphics*)  self->graphics();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Graphics");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'graphics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: physics of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_physics00
static int tolua_Stormfighter_StormfighterApp_physics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const StormfighterApp* self = (const StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'physics'", NULL);
#endif
  {
   Physics* tolua_ret = (Physics*)  self->physics();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Physics");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'physics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: input of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_input00
static int tolua_Stormfighter_StormfighterApp_input00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const StormfighterApp* self = (const StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'input'", NULL);
#endif
  {
   Input* tolua_ret = (Input*)  self->input();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Input");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'input'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hierarchy of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_hierarchy00
static int tolua_Stormfighter_StormfighterApp_hierarchy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const StormfighterApp* self = (const StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hierarchy'", NULL);
#endif
  {
   Hierarchy* tolua_ret = (Hierarchy*)  self->hierarchy();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Hierarchy");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hierarchy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: deltaTime of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_deltaTime00
static int tolua_Stormfighter_StormfighterApp_deltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const StormfighterApp* self = (const StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'deltaTime'", NULL);
#endif
  {
   double tolua_ret = (double)  self->deltaTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'deltaTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPhysicsDeltaTime of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_setPhysicsDeltaTime00
static int tolua_Stormfighter_StormfighterApp_setPhysicsDeltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  StormfighterApp* self = (StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
    float pdt = ((   float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPhysicsDeltaTime'", NULL);
#endif
  {
   self->setPhysicsDeltaTime(pdt);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPhysicsDeltaTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: physicsDeltaTime of class  StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_StormfighterApp_physicsDeltaTime00
static int tolua_Stormfighter_StormfighterApp_physicsDeltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  StormfighterApp* self = (StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'physicsDeltaTime'", NULL);
#endif
  {
     float tolua_ret = (   float)  self->physicsDeltaTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'physicsDeltaTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Stormfighter_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"std",0);
  tolua_beginmodule(tolua_S,"std");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vector_std__string_","std::vector<std::string>","",tolua_collect_std__vector_std__string_);
   #else
   tolua_cclass(tolua_S,"vector_std__string_","std::vector<std::string>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vector_std__string_");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_vector_std__string__clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_vector_std__string__size00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_std__string___geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_std_vector_std__string___seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_std__string___geti01);
    tolua_function(tolua_S,"push_back",tolua_Stormfighter_std_vector_std__string__push_back00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_vector_std__string__new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_vector_std__string__new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_vector_std__string__new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_vector_std__string__delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vector_GameObject__","std::vector<GameObject*>","",tolua_collect_std__vector_GameObject__);
   #else
   tolua_cclass(tolua_S,"vector_GameObject__","std::vector<GameObject*>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vector_GameObject__");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_vector_GameObject___clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_vector_GameObject___size00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_GameObject____geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_std_vector_GameObject____seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_GameObject____geti01);
    tolua_function(tolua_S,"push_back",tolua_Stormfighter_std_vector_GameObject___push_back00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_vector_GameObject___new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_vector_GameObject___new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_vector_GameObject___new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_vector_GameObject___delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vector_Component__","std::vector<Component*>","",tolua_collect_std__vector_Component__);
   #else
   tolua_cclass(tolua_S,"vector_Component__","std::vector<Component*>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vector_Component__");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_vector_Component___clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_vector_Component___size00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_Component____geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_std_vector_Component____seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_Component____geti01);
    tolua_function(tolua_S,"push_back",tolua_Stormfighter_std_vector_Component___push_back00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_vector_Component___new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_vector_Component___new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_vector_Component___new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_vector_Component___delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"set_std__string_","std::set<std::string>","",tolua_collect_std__set_std__string_);
   #else
   tolua_cclass(tolua_S,"set_std__string_","std::set<std::string>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"set_std__string_");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_set_std__string__clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_set_std__string__size00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_set_std__string__new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_set_std__string__new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_set_std__string__new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_set_std__string__delete00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Ray","Ogre::Ray","",tolua_collect_Ogre__Ray);
   #else
   tolua_cclass(tolua_S,"Ray","Ogre::Ray","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Ray");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Ray_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Ray_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Ray_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Ray_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Ray_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Ray_new01_local);
    tolua_function(tolua_S,"setOrigin",tolua_Stormfighter_Ogre_Ray_setOrigin00);
    tolua_function(tolua_S,"getOrigin",tolua_Stormfighter_Ogre_Ray_getOrigin00);
    tolua_function(tolua_S,"setDirection",tolua_Stormfighter_Ogre_Ray_setDirection00);
    tolua_function(tolua_S,"getDirection",tolua_Stormfighter_Ogre_Ray_getDirection00);
    tolua_function(tolua_S,"getPoint",tolua_Stormfighter_Ogre_Ray_getPoint00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Ray__mul00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",tolua_collect_Ogre__Radian);
   #else
   tolua_cclass(tolua_S,"Radian","Ogre::Radian","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Radian");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Radian_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Radian_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Radian_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Radian_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Radian_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Radian_new01_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Stormfighter_Ogre_Radian_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Stormfighter_Ogre_Radian_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Stormfighter_Ogre_Radian_valueAngleUnits00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Radian__add00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Radian__add01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Radian__sub00);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Radian__sub01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Radian__sub02);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Radian__mul00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Radian__mul01);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_Radian__div00);
    tolua_function(tolua_S,".lt",tolua_Stormfighter_Ogre_Radian__lt00);
    tolua_function(tolua_S,".le",tolua_Stormfighter_Ogre_Radian__le00);
    tolua_function(tolua_S,".eq",tolua_Stormfighter_Ogre_Radian__eq00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",tolua_collect_Ogre__Degree);
   #else
   tolua_cclass(tolua_S,"Degree","Ogre::Degree","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Degree");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Degree_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Degree_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Degree_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Degree_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Degree_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Degree_new01_local);
    tolua_function(tolua_S,"valueDegrees",tolua_Stormfighter_Ogre_Degree_valueDegrees00);
    tolua_function(tolua_S,"valueRadians",tolua_Stormfighter_Ogre_Degree_valueRadians00);
    tolua_function(tolua_S,"valueAngleUnits",tolua_Stormfighter_Ogre_Degree_valueAngleUnits00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Degree__add00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Degree__add01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Degree__sub00);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Degree__sub01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Degree__sub02);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Degree__mul00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Degree__mul01);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_Degree__div00);
    tolua_function(tolua_S,".lt",tolua_Stormfighter_Ogre_Degree__lt00);
    tolua_function(tolua_S,".le",tolua_Stormfighter_Ogre_Degree__le00);
    tolua_function(tolua_S,".eq",tolua_Stormfighter_Ogre_Degree__eq00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Math","Ogre::Math","",tolua_collect_Ogre__Math);
   #else
   tolua_cclass(tolua_S,"Math","Ogre::Math","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Math");
    tolua_constant(tolua_S,"AU_DEGREE",Ogre::Math::AU_DEGREE);
    tolua_constant(tolua_S,"AU_RADIAN",Ogre::Math::AU_RADIAN);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Math_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Math_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Math_new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_Ogre_Math_delete00);
    tolua_function(tolua_S,"IAbs",tolua_Stormfighter_Ogre_Math_IAbs00);
    tolua_function(tolua_S,"ICeil",tolua_Stormfighter_Ogre_Math_ICeil00);
    tolua_function(tolua_S,"IFloor",tolua_Stormfighter_Ogre_Math_IFloor00);
    tolua_function(tolua_S,"ISign",tolua_Stormfighter_Ogre_Math_ISign00);
    tolua_function(tolua_S,"Abs",tolua_Stormfighter_Ogre_Math_Abs00);
    tolua_function(tolua_S,"Abs",tolua_Stormfighter_Ogre_Math_Abs01);
    tolua_function(tolua_S,"Abs",tolua_Stormfighter_Ogre_Math_Abs02);
    tolua_function(tolua_S,"ACos",tolua_Stormfighter_Ogre_Math_ACos00);
    tolua_function(tolua_S,"ASin",tolua_Stormfighter_Ogre_Math_ASin00);
    tolua_function(tolua_S,"ATan",tolua_Stormfighter_Ogre_Math_ATan00);
    tolua_function(tolua_S,"ATan2",tolua_Stormfighter_Ogre_Math_ATan200);
    tolua_function(tolua_S,"Ceil",tolua_Stormfighter_Ogre_Math_Ceil00);
    tolua_function(tolua_S,"Cos",tolua_Stormfighter_Ogre_Math_Cos00);
    tolua_function(tolua_S,"Cos",tolua_Stormfighter_Ogre_Math_Cos01);
    tolua_function(tolua_S,"Exp",tolua_Stormfighter_Ogre_Math_Exp00);
    tolua_function(tolua_S,"Floor",tolua_Stormfighter_Ogre_Math_Floor00);
    tolua_function(tolua_S,"Log",tolua_Stormfighter_Ogre_Math_Log00);
    tolua_function(tolua_S,"Pow",tolua_Stormfighter_Ogre_Math_Pow00);
    tolua_function(tolua_S,"Sign",tolua_Stormfighter_Ogre_Math_Sign00);
    tolua_function(tolua_S,"Sign",tolua_Stormfighter_Ogre_Math_Sign01);
    tolua_function(tolua_S,"Sign",tolua_Stormfighter_Ogre_Math_Sign02);
    tolua_function(tolua_S,"Sin",tolua_Stormfighter_Ogre_Math_Sin00);
    tolua_function(tolua_S,"Sin",tolua_Stormfighter_Ogre_Math_Sin01);
    tolua_function(tolua_S,"Sqr",tolua_Stormfighter_Ogre_Math_Sqr00);
    tolua_function(tolua_S,"Sqrt",tolua_Stormfighter_Ogre_Math_Sqrt00);
    tolua_function(tolua_S,"Sqrt",tolua_Stormfighter_Ogre_Math_Sqrt01);
    tolua_function(tolua_S,"Sqrt",tolua_Stormfighter_Ogre_Math_Sqrt02);
    tolua_function(tolua_S,"InvSqrt",tolua_Stormfighter_Ogre_Math_InvSqrt00);
    tolua_function(tolua_S,"UnitRandom",tolua_Stormfighter_Ogre_Math_UnitRandom00);
    tolua_function(tolua_S,"RangeRandom",tolua_Stormfighter_Ogre_Math_RangeRandom00);
    tolua_function(tolua_S,"SymmetricRandom",tolua_Stormfighter_Ogre_Math_SymmetricRandom00);
    tolua_function(tolua_S,"Tan",tolua_Stormfighter_Ogre_Math_Tan00);
    tolua_function(tolua_S,"Tan",tolua_Stormfighter_Ogre_Math_Tan01);
    tolua_function(tolua_S,"DegreesToRadians",tolua_Stormfighter_Ogre_Math_DegreesToRadians00);
    tolua_function(tolua_S,"RadiansToDegrees",tolua_Stormfighter_Ogre_Math_RadiansToDegrees00);
    tolua_function(tolua_S,"setAngleUnit",tolua_Stormfighter_Ogre_Math_setAngleUnit00);
    tolua_function(tolua_S,"getAngleUnit",tolua_Stormfighter_Ogre_Math_getAngleUnit00);
    tolua_function(tolua_S,"AngleUnitsToRadians",tolua_Stormfighter_Ogre_Math_AngleUnitsToRadians00);
    tolua_function(tolua_S,"RadiansToAngleUnits",tolua_Stormfighter_Ogre_Math_RadiansToAngleUnits00);
    tolua_function(tolua_S,"AngleUnitsToDegrees",tolua_Stormfighter_Ogre_Math_AngleUnitsToDegrees00);
    tolua_function(tolua_S,"DegreesToAngleUnits",tolua_Stormfighter_Ogre_Math_DegreesToAngleUnits00);
    tolua_function(tolua_S,"pointInTri2D",tolua_Stormfighter_Ogre_Math_pointInTri2D00);
    tolua_function(tolua_S,"pointInTri3D",tolua_Stormfighter_Ogre_Math_pointInTri3D00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects01);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects02);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects03);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects04);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects05);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects06);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects07);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects08);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects09);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Math_intersects10);
    tolua_function(tolua_S,"RealEqual",tolua_Stormfighter_Ogre_Math_RealEqual00);
    tolua_function(tolua_S,"RealEqual",tolua_Stormfighter_Ogre_Math_RealEqual01);
    tolua_function(tolua_S,"calculateTangentSpaceVector",tolua_Stormfighter_Ogre_Math_calculateTangentSpaceVector00);
    tolua_function(tolua_S,"buildReflectionMatrix",tolua_Stormfighter_Ogre_Math_buildReflectionMatrix00);
    tolua_function(tolua_S,"calculateFaceNormal",tolua_Stormfighter_Ogre_Math_calculateFaceNormal00);
    tolua_function(tolua_S,"calculateBasicFaceNormal",tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormal00);
    tolua_function(tolua_S,"calculateFaceNormalWithoutNormalize",tolua_Stormfighter_Ogre_Math_calculateFaceNormalWithoutNormalize00);
    tolua_function(tolua_S,"calculateBasicFaceNormalWithoutNormalize",tolua_Stormfighter_Ogre_Math_calculateBasicFaceNormalWithoutNormalize00);
    tolua_function(tolua_S,"gaussianDistribution",tolua_Stormfighter_Ogre_Math_gaussianDistribution00);
    tolua_variable(tolua_S,"POS_INFINITY",tolua_get_Ogre__Math_POS_INFINITY,NULL);
    tolua_variable(tolua_S,"NEG_INFINITY",tolua_get_Ogre__Math_NEG_INFINITY,NULL);
    tolua_variable(tolua_S,"PI",tolua_get_Ogre__Math_PI,NULL);
    tolua_variable(tolua_S,"TWO_PI",tolua_get_Ogre__Math_TWO_PI,NULL);
    tolua_variable(tolua_S,"HALF_PI",tolua_get_Ogre__Math_HALF_PI,NULL);
    tolua_variable(tolua_S,"fDeg2Rad",tolua_get_Ogre__Math_fDeg2Rad,NULL);
    tolua_variable(tolua_S,"fRad2Deg",tolua_get_Ogre__Math_fRad2Deg,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",tolua_collect_Ogre__Vector3);
   #else
   tolua_cclass(tolua_S,"Vector3","Ogre::Vector3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Vector3");
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Vector3_x,tolua_set_Ogre__Vector3_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Vector3_y,tolua_set_Ogre__Vector3_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Vector3_z,tolua_set_Ogre__Vector3_z);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Vector3_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Vector3_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Vector3_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Vector3_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Vector3_new01_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Vector3_new02);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Vector3_new02_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Vector3_new02_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Vector3_new03);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Vector3_new03_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Vector3_new03_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Vector3_new04);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Vector3_new04_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Vector3_new04_local);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_Ogre_Vector3__geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_Ogre_Vector3__seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_Ogre_Vector3__geti01);
    tolua_function(tolua_S,".eq",tolua_Stormfighter_Ogre_Vector3__eq00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Vector3__add00);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Vector3__sub00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Vector3__mul00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Vector3__mul01);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_Vector3__div00);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_Vector3__div01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Vector3__sub01);
    tolua_function(tolua_S,"length",tolua_Stormfighter_Ogre_Vector3_length00);
    tolua_function(tolua_S,"squaredLength",tolua_Stormfighter_Ogre_Vector3_squaredLength00);
    tolua_function(tolua_S,"dotProduct",tolua_Stormfighter_Ogre_Vector3_dotProduct00);
    tolua_function(tolua_S,"normalise",tolua_Stormfighter_Ogre_Vector3_normalise00);
    tolua_function(tolua_S,"crossProduct",tolua_Stormfighter_Ogre_Vector3_crossProduct00);
    tolua_function(tolua_S,"midPoint",tolua_Stormfighter_Ogre_Vector3_midPoint00);
    tolua_function(tolua_S,".lt",tolua_Stormfighter_Ogre_Vector3__lt00);
    tolua_function(tolua_S,"makeFloor",tolua_Stormfighter_Ogre_Vector3_makeFloor00);
    tolua_function(tolua_S,"makeCeil",tolua_Stormfighter_Ogre_Vector3_makeCeil00);
    tolua_function(tolua_S,"perpendicular",tolua_Stormfighter_Ogre_Vector3_perpendicular00);
    tolua_function(tolua_S,"randomDeviant",tolua_Stormfighter_Ogre_Vector3_randomDeviant00);
    tolua_function(tolua_S,"getRotationTo",tolua_Stormfighter_Ogre_Vector3_getRotationTo00);
    tolua_function(tolua_S,"isZeroLength",tolua_Stormfighter_Ogre_Vector3_isZeroLength00);
    tolua_function(tolua_S,"normalisedCopy",tolua_Stormfighter_Ogre_Vector3_normalisedCopy00);
    tolua_function(tolua_S,"reflect",tolua_Stormfighter_Ogre_Vector3_reflect00);
    tolua_function(tolua_S,"positionEquals",tolua_Stormfighter_Ogre_Vector3_positionEquals00);
    tolua_function(tolua_S,"directionEquals",tolua_Stormfighter_Ogre_Vector3_directionEquals00);
    tolua_function(tolua_S,"angleBetween",tolua_Stormfighter_Ogre_Vector3_angleBetween00);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Vector3_ZERO,NULL);
    tolua_variable(tolua_S,"UNIT_X",tolua_get_Ogre__Vector3_UNIT_X,NULL);
    tolua_variable(tolua_S,"UNIT_Y",tolua_get_Ogre__Vector3_UNIT_Y,NULL);
    tolua_variable(tolua_S,"UNIT_Z",tolua_get_Ogre__Vector3_UNIT_Z,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_X",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_X,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Y",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Y,NULL);
    tolua_variable(tolua_S,"NEGATIVE_UNIT_Z",tolua_get_Ogre__Vector3_NEGATIVE_UNIT_Z,NULL);
    tolua_variable(tolua_S,"UNIT_SCALE",tolua_get_Ogre__Vector3_UNIT_SCALE,NULL);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",tolua_collect_Ogre__Quaternion);
   #else
   tolua_cclass(tolua_S,"Quaternion","Ogre::Quaternion","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Quaternion");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Quaternion_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Quaternion_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Quaternion_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Quaternion_new01_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Quaternion_new02);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Quaternion_new02_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Quaternion_new03);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Quaternion_new03_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Quaternion_new04);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Quaternion_new04_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Quaternion_new04_local);
    tolua_function(tolua_S,"FromRotationMatrix",tolua_Stormfighter_Ogre_Quaternion_FromRotationMatrix00);
    tolua_function(tolua_S,"ToRotationMatrix",tolua_Stormfighter_Ogre_Quaternion_ToRotationMatrix00);
    tolua_function(tolua_S,"FromAngleAxis",tolua_Stormfighter_Ogre_Quaternion_FromAngleAxis00);
    tolua_function(tolua_S,"ToAngleAxis",tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis00);
    tolua_function(tolua_S,"ToAngleAxis",tolua_Stormfighter_Ogre_Quaternion_ToAngleAxis01);
    tolua_function(tolua_S,"FromAxes",tolua_Stormfighter_Ogre_Quaternion_FromAxes00);
    tolua_function(tolua_S,"FromAxes",tolua_Stormfighter_Ogre_Quaternion_FromAxes01);
    tolua_function(tolua_S,"ToAxes",tolua_Stormfighter_Ogre_Quaternion_ToAxes00);
    tolua_function(tolua_S,"ToAxes",tolua_Stormfighter_Ogre_Quaternion_ToAxes01);
    tolua_function(tolua_S,"xAxis",tolua_Stormfighter_Ogre_Quaternion_xAxis00);
    tolua_function(tolua_S,"yAxis",tolua_Stormfighter_Ogre_Quaternion_yAxis00);
    tolua_function(tolua_S,"zAxis",tolua_Stormfighter_Ogre_Quaternion_zAxis00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_Quaternion__add00);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Quaternion__sub00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Quaternion__mul00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Quaternion__mul01);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_Quaternion__sub01);
    tolua_function(tolua_S,".eq",tolua_Stormfighter_Ogre_Quaternion__eq00);
    tolua_function(tolua_S,"Dot",tolua_Stormfighter_Ogre_Quaternion_Dot00);
    tolua_function(tolua_S,"Norm",tolua_Stormfighter_Ogre_Quaternion_Norm00);
    tolua_function(tolua_S,"normalise",tolua_Stormfighter_Ogre_Quaternion_normalise00);
    tolua_function(tolua_S,"Inverse",tolua_Stormfighter_Ogre_Quaternion_Inverse00);
    tolua_function(tolua_S,"UnitInverse",tolua_Stormfighter_Ogre_Quaternion_UnitInverse00);
    tolua_function(tolua_S,"Exp",tolua_Stormfighter_Ogre_Quaternion_Exp00);
    tolua_function(tolua_S,"Log",tolua_Stormfighter_Ogre_Quaternion_Log00);
    tolua_function(tolua_S,".mul",tolua_Stormfighter_Ogre_Quaternion__mul02);
    tolua_function(tolua_S,"getRoll",tolua_Stormfighter_Ogre_Quaternion_getRoll00);
    tolua_function(tolua_S,"getPitch",tolua_Stormfighter_Ogre_Quaternion_getPitch00);
    tolua_function(tolua_S,"getYaw",tolua_Stormfighter_Ogre_Quaternion_getYaw00);
    tolua_function(tolua_S,"equals",tolua_Stormfighter_Ogre_Quaternion_equals00);
    tolua_function(tolua_S,"Slerp",tolua_Stormfighter_Ogre_Quaternion_Slerp00);
    tolua_function(tolua_S,"SlerpExtraSpins",tolua_Stormfighter_Ogre_Quaternion_SlerpExtraSpins00);
    tolua_function(tolua_S,"Intermediate",tolua_Stormfighter_Ogre_Quaternion_Intermediate00);
    tolua_function(tolua_S,"Squad",tolua_Stormfighter_Ogre_Quaternion_Squad00);
    tolua_function(tolua_S,"nlerp",tolua_Stormfighter_Ogre_Quaternion_nlerp00);
    tolua_variable(tolua_S,"ms_fEpsilon",tolua_get_Ogre__Quaternion_ms_fEpsilon,NULL);
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__Quaternion_ZERO,NULL);
    tolua_variable(tolua_S,"IDENTITY",tolua_get_Ogre__Quaternion_IDENTITY,NULL);
    tolua_variable(tolua_S,"w",tolua_get_Ogre__Quaternion_w,tolua_set_Ogre__Quaternion_w);
    tolua_variable(tolua_S,"x",tolua_get_Ogre__Quaternion_x,tolua_set_Ogre__Quaternion_x);
    tolua_variable(tolua_S,"y",tolua_get_Ogre__Quaternion_y,tolua_set_Ogre__Quaternion_y);
    tolua_variable(tolua_S,"z",tolua_get_Ogre__Quaternion_z,tolua_set_Ogre__Quaternion_z);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",tolua_collect_Ogre__ColourValue);
   #else
   tolua_cclass(tolua_S,"ColourValue","Ogre::ColourValue","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ColourValue");
    tolua_variable(tolua_S,"ZERO",tolua_get_Ogre__ColourValue_ZERO,NULL);
    tolua_variable(tolua_S,"Black",tolua_get_Ogre__ColourValue_Black,NULL);
    tolua_variable(tolua_S,"White",tolua_get_Ogre__ColourValue_White,NULL);
    tolua_variable(tolua_S,"Red",tolua_get_Ogre__ColourValue_Red,NULL);
    tolua_variable(tolua_S,"Green",tolua_get_Ogre__ColourValue_Green,NULL);
    tolua_variable(tolua_S,"Blue",tolua_get_Ogre__ColourValue_Blue,NULL);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_ColourValue_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_ColourValue_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_ColourValue_new00_local);
    tolua_variable(tolua_S,"r",tolua_get_Ogre__ColourValue_r,tolua_set_Ogre__ColourValue_r);
    tolua_variable(tolua_S,"g",tolua_get_Ogre__ColourValue_g,tolua_set_Ogre__ColourValue_g);
    tolua_variable(tolua_S,"b",tolua_get_Ogre__ColourValue_b,tolua_set_Ogre__ColourValue_b);
    tolua_variable(tolua_S,"a",tolua_get_Ogre__ColourValue_a,tolua_set_Ogre__ColourValue_a);
    tolua_function(tolua_S,"getAsRGBA",tolua_Stormfighter_Ogre_ColourValue_getAsRGBA00);
    tolua_function(tolua_S,"getAsARGB",tolua_Stormfighter_Ogre_ColourValue_getAsARGB00);
    tolua_function(tolua_S,"getAsBGRA",tolua_Stormfighter_Ogre_ColourValue_getAsBGRA00);
    tolua_function(tolua_S,"getAsABGR",tolua_Stormfighter_Ogre_ColourValue_getAsABGR00);
    tolua_function(tolua_S,"setAsRGBA",tolua_Stormfighter_Ogre_ColourValue_setAsRGBA00);
    tolua_function(tolua_S,"setAsARGB",tolua_Stormfighter_Ogre_ColourValue_setAsARGB00);
    tolua_function(tolua_S,"setAsBGRA",tolua_Stormfighter_Ogre_ColourValue_setAsBGRA00);
    tolua_function(tolua_S,"setAsABGR",tolua_Stormfighter_Ogre_ColourValue_setAsABGR00);
    tolua_function(tolua_S,"saturate",tolua_Stormfighter_Ogre_ColourValue_saturate00);
    tolua_function(tolua_S,"saturateCopy",tolua_Stormfighter_Ogre_ColourValue_saturateCopy00);
    tolua_function(tolua_S,".add",tolua_Stormfighter_Ogre_ColourValue__add00);
    tolua_function(tolua_S,".sub",tolua_Stormfighter_Ogre_ColourValue__sub00);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_ColourValue__div00);
    tolua_function(tolua_S,".div",tolua_Stormfighter_Ogre_ColourValue__div01);
    tolua_function(tolua_S,"setHSB",tolua_Stormfighter_Ogre_ColourValue_setHSB00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"AxisAlignedBox","Ogre::AxisAlignedBox","",tolua_collect_Ogre__AxisAlignedBox);
   #else
   tolua_cclass(tolua_S,"AxisAlignedBox","Ogre::AxisAlignedBox","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"AxisAlignedBox");
    tolua_constant(tolua_S,"FAR_LEFT_BOTTOM",Ogre::AxisAlignedBox::FAR_LEFT_BOTTOM);
    tolua_constant(tolua_S,"FAR_LEFT_TOP",Ogre::AxisAlignedBox::FAR_LEFT_TOP);
    tolua_constant(tolua_S,"FAR_RIGHT_TOP",Ogre::AxisAlignedBox::FAR_RIGHT_TOP);
    tolua_constant(tolua_S,"FAR_RIGHT_BOTTOM",Ogre::AxisAlignedBox::FAR_RIGHT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_RIGHT_BOTTOM",Ogre::AxisAlignedBox::NEAR_RIGHT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_LEFT_BOTTOM",Ogre::AxisAlignedBox::NEAR_LEFT_BOTTOM);
    tolua_constant(tolua_S,"NEAR_LEFT_TOP",Ogre::AxisAlignedBox::NEAR_LEFT_TOP);
    tolua_constant(tolua_S,"NEAR_RIGHT_TOP",Ogre::AxisAlignedBox::NEAR_RIGHT_TOP);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_AxisAlignedBox_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_AxisAlignedBox_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_AxisAlignedBox_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_AxisAlignedBox_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_AxisAlignedBox_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_AxisAlignedBox_new01_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_AxisAlignedBox_new02);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_AxisAlignedBox_new02_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_AxisAlignedBox_new02_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_AxisAlignedBox_new03);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_AxisAlignedBox_new03_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_AxisAlignedBox_new03_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_Ogre_AxisAlignedBox_delete00);
    tolua_function(tolua_S,"getMinimum",tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum00);
    tolua_function(tolua_S,"getMinimum",tolua_Stormfighter_Ogre_AxisAlignedBox_getMinimum01);
    tolua_function(tolua_S,"getMaximum",tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum00);
    tolua_function(tolua_S,"getMaximum",tolua_Stormfighter_Ogre_AxisAlignedBox_getMaximum01);
    tolua_function(tolua_S,"setMinimum",tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum00);
    tolua_function(tolua_S,"setMinimum",tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimum01);
    tolua_function(tolua_S,"setMinimumX",tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumX00);
    tolua_function(tolua_S,"setMinimumY",tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumY00);
    tolua_function(tolua_S,"setMinimumZ",tolua_Stormfighter_Ogre_AxisAlignedBox_setMinimumZ00);
    tolua_function(tolua_S,"setMaximum",tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum00);
    tolua_function(tolua_S,"setMaximum",tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximum01);
    tolua_function(tolua_S,"setMaximumX",tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumX00);
    tolua_function(tolua_S,"setMaximumY",tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumY00);
    tolua_function(tolua_S,"setMaximumZ",tolua_Stormfighter_Ogre_AxisAlignedBox_setMaximumZ00);
    tolua_function(tolua_S,"setExtents",tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents00);
    tolua_function(tolua_S,"setExtents",tolua_Stormfighter_Ogre_AxisAlignedBox_setExtents01);
    tolua_function(tolua_S,"getAllCorners",tolua_Stormfighter_Ogre_AxisAlignedBox_getAllCorners00);
    tolua_function(tolua_S,"getCorner",tolua_Stormfighter_Ogre_AxisAlignedBox_getCorner00);
    tolua_function(tolua_S,"merge",tolua_Stormfighter_Ogre_AxisAlignedBox_merge00);
    tolua_function(tolua_S,"merge",tolua_Stormfighter_Ogre_AxisAlignedBox_merge01);
    tolua_function(tolua_S,"transform",tolua_Stormfighter_Ogre_AxisAlignedBox_transform00);
    tolua_function(tolua_S,"transformAffine",tolua_Stormfighter_Ogre_AxisAlignedBox_transformAffine00);
    tolua_function(tolua_S,"setNull",tolua_Stormfighter_Ogre_AxisAlignedBox_setNull00);
    tolua_function(tolua_S,"isNull",tolua_Stormfighter_Ogre_AxisAlignedBox_isNull00);
    tolua_function(tolua_S,"isFinite",tolua_Stormfighter_Ogre_AxisAlignedBox_isFinite00);
    tolua_function(tolua_S,"setInfinite",tolua_Stormfighter_Ogre_AxisAlignedBox_setInfinite00);
    tolua_function(tolua_S,"isInfinite",tolua_Stormfighter_Ogre_AxisAlignedBox_isInfinite00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_AxisAlignedBox_intersects00);
    tolua_function(tolua_S,"intersection",tolua_Stormfighter_Ogre_AxisAlignedBox_intersection00);
    tolua_function(tolua_S,"volume",tolua_Stormfighter_Ogre_AxisAlignedBox_volume00);
    tolua_function(tolua_S,"scale",tolua_Stormfighter_Ogre_AxisAlignedBox_scale00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_AxisAlignedBox_intersects01);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_AxisAlignedBox_intersects02);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_AxisAlignedBox_intersects03);
    tolua_function(tolua_S,"getCenter",tolua_Stormfighter_Ogre_AxisAlignedBox_getCenter00);
    tolua_function(tolua_S,"getSize",tolua_Stormfighter_Ogre_AxisAlignedBox_getSize00);
    tolua_function(tolua_S,"getHalfSize",tolua_Stormfighter_Ogre_AxisAlignedBox_getHalfSize00);
    tolua_function(tolua_S,"contains",tolua_Stormfighter_Ogre_AxisAlignedBox_contains00);
    tolua_function(tolua_S,"contains",tolua_Stormfighter_Ogre_AxisAlignedBox_contains01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"OIS",0);
  tolua_beginmodule(tolua_S,"OIS");
   tolua_constant(tolua_S,"KC_UNASSIGNED",OIS::KC_UNASSIGNED);
   tolua_constant(tolua_S,"KC_ESCAPE",OIS::KC_ESCAPE);
   tolua_constant(tolua_S,"KC_1",OIS::KC_1);
   tolua_constant(tolua_S,"KC_2",OIS::KC_2);
   tolua_constant(tolua_S,"KC_3",OIS::KC_3);
   tolua_constant(tolua_S,"KC_4",OIS::KC_4);
   tolua_constant(tolua_S,"KC_5",OIS::KC_5);
   tolua_constant(tolua_S,"KC_6",OIS::KC_6);
   tolua_constant(tolua_S,"KC_7",OIS::KC_7);
   tolua_constant(tolua_S,"KC_8",OIS::KC_8);
   tolua_constant(tolua_S,"KC_9",OIS::KC_9);
   tolua_constant(tolua_S,"KC_0",OIS::KC_0);
   tolua_constant(tolua_S,"KC_MINUS",OIS::KC_MINUS);
   tolua_constant(tolua_S,"KC_EQUALS",OIS::KC_EQUALS);
   tolua_constant(tolua_S,"KC_BACK",OIS::KC_BACK);
   tolua_constant(tolua_S,"KC_TAB",OIS::KC_TAB);
   tolua_constant(tolua_S,"KC_Q",OIS::KC_Q);
   tolua_constant(tolua_S,"KC_W",OIS::KC_W);
   tolua_constant(tolua_S,"KC_E",OIS::KC_E);
   tolua_constant(tolua_S,"KC_R",OIS::KC_R);
   tolua_constant(tolua_S,"KC_T",OIS::KC_T);
   tolua_constant(tolua_S,"KC_Y",OIS::KC_Y);
   tolua_constant(tolua_S,"KC_U",OIS::KC_U);
   tolua_constant(tolua_S,"KC_I",OIS::KC_I);
   tolua_constant(tolua_S,"KC_O",OIS::KC_O);
   tolua_constant(tolua_S,"KC_P",OIS::KC_P);
   tolua_constant(tolua_S,"KC_LBRACKET",OIS::KC_LBRACKET);
   tolua_constant(tolua_S,"KC_RBRACKET",OIS::KC_RBRACKET);
   tolua_constant(tolua_S,"KC_RETURN",OIS::KC_RETURN);
   tolua_constant(tolua_S,"KC_LCONTROL",OIS::KC_LCONTROL);
   tolua_constant(tolua_S,"KC_A",OIS::KC_A);
   tolua_constant(tolua_S,"KC_S",OIS::KC_S);
   tolua_constant(tolua_S,"KC_D",OIS::KC_D);
   tolua_constant(tolua_S,"KC_F",OIS::KC_F);
   tolua_constant(tolua_S,"KC_G",OIS::KC_G);
   tolua_constant(tolua_S,"KC_H",OIS::KC_H);
   tolua_constant(tolua_S,"KC_J",OIS::KC_J);
   tolua_constant(tolua_S,"KC_K",OIS::KC_K);
   tolua_constant(tolua_S,"KC_L",OIS::KC_L);
   tolua_constant(tolua_S,"KC_SEMICOLON",OIS::KC_SEMICOLON);
   tolua_constant(tolua_S,"KC_APOSTROPHE",OIS::KC_APOSTROPHE);
   tolua_constant(tolua_S,"KC_GRAVE",OIS::KC_GRAVE);
   tolua_constant(tolua_S,"KC_LSHIFT",OIS::KC_LSHIFT);
   tolua_constant(tolua_S,"KC_BACKSLASH",OIS::KC_BACKSLASH);
   tolua_constant(tolua_S,"KC_Z",OIS::KC_Z);
   tolua_constant(tolua_S,"KC_X",OIS::KC_X);
   tolua_constant(tolua_S,"KC_C",OIS::KC_C);
   tolua_constant(tolua_S,"KC_V",OIS::KC_V);
   tolua_constant(tolua_S,"KC_B",OIS::KC_B);
   tolua_constant(tolua_S,"KC_N",OIS::KC_N);
   tolua_constant(tolua_S,"KC_M",OIS::KC_M);
   tolua_constant(tolua_S,"KC_COMMA",OIS::KC_COMMA);
   tolua_constant(tolua_S,"KC_PERIOD",OIS::KC_PERIOD);
   tolua_constant(tolua_S,"KC_SLASH",OIS::KC_SLASH);
   tolua_constant(tolua_S,"KC_RSHIFT",OIS::KC_RSHIFT);
   tolua_constant(tolua_S,"KC_MULTIPLY",OIS::KC_MULTIPLY);
   tolua_constant(tolua_S,"KC_LMENU",OIS::KC_LMENU);
   tolua_constant(tolua_S,"KC_SPACE",OIS::KC_SPACE);
   tolua_constant(tolua_S,"KC_CAPITAL",OIS::KC_CAPITAL);
   tolua_constant(tolua_S,"KC_F1",OIS::KC_F1);
   tolua_constant(tolua_S,"KC_F2",OIS::KC_F2);
   tolua_constant(tolua_S,"KC_F3",OIS::KC_F3);
   tolua_constant(tolua_S,"KC_F4",OIS::KC_F4);
   tolua_constant(tolua_S,"KC_F5",OIS::KC_F5);
   tolua_constant(tolua_S,"KC_F6",OIS::KC_F6);
   tolua_constant(tolua_S,"KC_F7",OIS::KC_F7);
   tolua_constant(tolua_S,"KC_F8",OIS::KC_F8);
   tolua_constant(tolua_S,"KC_F9",OIS::KC_F9);
   tolua_constant(tolua_S,"KC_F10",OIS::KC_F10);
   tolua_constant(tolua_S,"KC_NUMLOCK",OIS::KC_NUMLOCK);
   tolua_constant(tolua_S,"KC_SCROLL",OIS::KC_SCROLL);
   tolua_constant(tolua_S,"KC_NUMPAD7",OIS::KC_NUMPAD7);
   tolua_constant(tolua_S,"KC_NUMPAD8",OIS::KC_NUMPAD8);
   tolua_constant(tolua_S,"KC_NUMPAD9",OIS::KC_NUMPAD9);
   tolua_constant(tolua_S,"KC_SUBTRACT",OIS::KC_SUBTRACT);
   tolua_constant(tolua_S,"KC_NUMPAD4",OIS::KC_NUMPAD4);
   tolua_constant(tolua_S,"KC_NUMPAD5",OIS::KC_NUMPAD5);
   tolua_constant(tolua_S,"KC_NUMPAD6",OIS::KC_NUMPAD6);
   tolua_constant(tolua_S,"KC_ADD",OIS::KC_ADD);
   tolua_constant(tolua_S,"KC_NUMPAD1",OIS::KC_NUMPAD1);
   tolua_constant(tolua_S,"KC_NUMPAD2",OIS::KC_NUMPAD2);
   tolua_constant(tolua_S,"KC_NUMPAD3",OIS::KC_NUMPAD3);
   tolua_constant(tolua_S,"KC_NUMPAD0",OIS::KC_NUMPAD0);
   tolua_constant(tolua_S,"KC_DECIMAL",OIS::KC_DECIMAL);
   tolua_constant(tolua_S,"KC_OEM_102",OIS::KC_OEM_102);
   tolua_constant(tolua_S,"KC_F11",OIS::KC_F11);
   tolua_constant(tolua_S,"KC_F12",OIS::KC_F12);
   tolua_constant(tolua_S,"KC_F13",OIS::KC_F13);
   tolua_constant(tolua_S,"KC_F14",OIS::KC_F14);
   tolua_constant(tolua_S,"KC_F15",OIS::KC_F15);
   tolua_constant(tolua_S,"KC_KANA",OIS::KC_KANA);
   tolua_constant(tolua_S,"KC_ABNT_C1",OIS::KC_ABNT_C1);
   tolua_constant(tolua_S,"KC_CONVERT",OIS::KC_CONVERT);
   tolua_constant(tolua_S,"KC_NOCONVERT",OIS::KC_NOCONVERT);
   tolua_constant(tolua_S,"KC_YEN",OIS::KC_YEN);
   tolua_constant(tolua_S,"KC_ABNT_C2",OIS::KC_ABNT_C2);
   tolua_constant(tolua_S,"KC_NUMPADEQUALS",OIS::KC_NUMPADEQUALS);
   tolua_constant(tolua_S,"KC_PREVTRACK",OIS::KC_PREVTRACK);
   tolua_constant(tolua_S,"KC_AT",OIS::KC_AT);
   tolua_constant(tolua_S,"KC_COLON",OIS::KC_COLON);
   tolua_constant(tolua_S,"KC_UNDERLINE",OIS::KC_UNDERLINE);
   tolua_constant(tolua_S,"KC_KANJI",OIS::KC_KANJI);
   tolua_constant(tolua_S,"KC_STOP",OIS::KC_STOP);
   tolua_constant(tolua_S,"KC_AX",OIS::KC_AX);
   tolua_constant(tolua_S,"KC_UNLABELED",OIS::KC_UNLABELED);
   tolua_constant(tolua_S,"KC_NEXTTRACK",OIS::KC_NEXTTRACK);
   tolua_constant(tolua_S,"KC_NUMPADENTER",OIS::KC_NUMPADENTER);
   tolua_constant(tolua_S,"KC_RCONTROL",OIS::KC_RCONTROL);
   tolua_constant(tolua_S,"KC_MUTE",OIS::KC_MUTE);
   tolua_constant(tolua_S,"KC_CALCULATOR",OIS::KC_CALCULATOR);
   tolua_constant(tolua_S,"KC_PLAYPAUSE",OIS::KC_PLAYPAUSE);
   tolua_constant(tolua_S,"KC_MEDIASTOP",OIS::KC_MEDIASTOP);
   tolua_constant(tolua_S,"KC_VOLUMEDOWN",OIS::KC_VOLUMEDOWN);
   tolua_constant(tolua_S,"KC_VOLUMEUP",OIS::KC_VOLUMEUP);
   tolua_constant(tolua_S,"KC_WEBHOME",OIS::KC_WEBHOME);
   tolua_constant(tolua_S,"KC_NUMPADCOMMA",OIS::KC_NUMPADCOMMA);
   tolua_constant(tolua_S,"KC_DIVIDE",OIS::KC_DIVIDE);
   tolua_constant(tolua_S,"KC_SYSRQ",OIS::KC_SYSRQ);
   tolua_constant(tolua_S,"KC_RMENU",OIS::KC_RMENU);
   tolua_constant(tolua_S,"KC_PAUSE",OIS::KC_PAUSE);
   tolua_constant(tolua_S,"KC_HOME",OIS::KC_HOME);
   tolua_constant(tolua_S,"KC_UP",OIS::KC_UP);
   tolua_constant(tolua_S,"KC_PGUP",OIS::KC_PGUP);
   tolua_constant(tolua_S,"KC_LEFT",OIS::KC_LEFT);
   tolua_constant(tolua_S,"KC_RIGHT",OIS::KC_RIGHT);
   tolua_constant(tolua_S,"KC_END",OIS::KC_END);
   tolua_constant(tolua_S,"KC_DOWN",OIS::KC_DOWN);
   tolua_constant(tolua_S,"KC_PGDOWN",OIS::KC_PGDOWN);
   tolua_constant(tolua_S,"KC_INSERT",OIS::KC_INSERT);
   tolua_constant(tolua_S,"KC_DELETE",OIS::KC_DELETE);
   tolua_constant(tolua_S,"KC_LWIN",OIS::KC_LWIN);
   tolua_constant(tolua_S,"KC_RWIN",OIS::KC_RWIN);
   tolua_constant(tolua_S,"KC_APPS",OIS::KC_APPS);
   tolua_constant(tolua_S,"KC_POWER",OIS::KC_POWER);
   tolua_constant(tolua_S,"KC_SLEEP",OIS::KC_SLEEP);
   tolua_constant(tolua_S,"KC_WAKE",OIS::KC_WAKE);
   tolua_constant(tolua_S,"KC_WEBSEARCH",OIS::KC_WEBSEARCH);
   tolua_constant(tolua_S,"KC_WEBFAVORITES",OIS::KC_WEBFAVORITES);
   tolua_constant(tolua_S,"KC_WEBREFRESH",OIS::KC_WEBREFRESH);
   tolua_constant(tolua_S,"KC_WEBSTOP",OIS::KC_WEBSTOP);
   tolua_constant(tolua_S,"KC_WEBFORWARD",OIS::KC_WEBFORWARD);
   tolua_constant(tolua_S,"KC_WEBBACK",OIS::KC_WEBBACK);
   tolua_constant(tolua_S,"KC_MYCOMPUTER",OIS::KC_MYCOMPUTER);
   tolua_constant(tolua_S,"KC_MAIL",OIS::KC_MAIL);
   tolua_constant(tolua_S,"KC_MEDIASELECT",OIS::KC_MEDIASELECT);
   tolua_constant(tolua_S,"MB_Left",OIS::MB_Left);
   tolua_constant(tolua_S,"MB_Right",OIS::MB_Right);
   tolua_constant(tolua_S,"MB_Middle",OIS::MB_Middle);
   tolua_constant(tolua_S,"MB_Button3",OIS::MB_Button3);
   tolua_constant(tolua_S,"MB_Button4",OIS::MB_Button4);
   tolua_constant(tolua_S,"MB_Button5",OIS::MB_Button5);
   tolua_constant(tolua_S,"MB_Button6",OIS::MB_Button6);
   tolua_constant(tolua_S,"MB_Button7",OIS::MB_Button7);
   tolua_cclass(tolua_S,"Keyboard","OIS::Keyboard","",NULL);
   tolua_beginmodule(tolua_S,"Keyboard");
    tolua_constant(tolua_S,"Shift",OIS::Keyboard::Shift);
    tolua_constant(tolua_S,"Ctrl",OIS::Keyboard::Ctrl);
    tolua_constant(tolua_S,"Alt",OIS::Keyboard::Alt);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Component","Component","",NULL);
  tolua_beginmodule(tolua_S,"Component");
   tolua_variable(tolua_S,"type",tolua_get_Component_type,NULL);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_Component_clone00);
   tolua_function(tolua_S,"onInit",tolua_Stormfighter_Component_onInit00);
   tolua_function(tolua_S,"onUpdate",tolua_Stormfighter_Component_onUpdate00);
   tolua_function(tolua_S,"onPhysicsUpdate",tolua_Stormfighter_Component_onPhysicsUpdate00);
   tolua_function(tolua_S,"onCollisionEnter",tolua_Stormfighter_Component_onCollisionEnter00);
   tolua_function(tolua_S,"onCollisionExit",tolua_Stormfighter_Component_onCollisionExit00);
   tolua_function(tolua_S,"onCollisionStay",tolua_Stormfighter_Component_onCollisionStay00);
   tolua_constant(tolua_S,"CREATED",Component::CREATED);
   tolua_constant(tolua_S,"PREPARED",Component::PREPARED);
   tolua_constant(tolua_S,"READY",Component::READY);
   tolua_variable(tolua_S,"state",tolua_get_Component_state,NULL);
   tolua_constant(tolua_S,"NONE",Component::NONE);
   tolua_constant(tolua_S,"INIT",Component::INIT);
   tolua_constant(tolua_S,"UPDATE",Component::UPDATE);
   tolua_constant(tolua_S,"PHYSICS_UPDATE",Component::PHYSICS_UPDATE);
   tolua_constant(tolua_S,"COLLISION",Component::COLLISION);
   tolua_function(tolua_S,"object",tolua_Stormfighter_Component_object00);
   tolua_function(tolua_S,"application",tolua_Stormfighter_Component_application00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"STransform","STransform","Component",NULL);
  tolua_beginmodule(tolua_S,"STransform");
   tolua_variable(tolua_S,"type",tolua_get_STransform_type,NULL);
   tolua_variable(tolua_S,"position",tolua_get_STransform_position,tolua_set_STransform_position);
   tolua_variable(tolua_S,"orientation",tolua_get_STransform_orientation,tolua_set_STransform_orientation);
   tolua_variable(tolua_S,"scale",tolua_get_STransform_scale,tolua_set_STransform_scale);
   tolua_function(tolua_S,"worldMatrix",tolua_Stormfighter_STransform_worldMatrix00);
   tolua_variable(tolua_S,"worldPosition",tolua_get_STransform_worldPosition,NULL);
   tolua_variable(tolua_S,"worldOrientation",tolua_get_STransform_worldOrientation,NULL);
   tolua_function(tolua_S,"lookAt",tolua_Stormfighter_STransform_lookAt00);
   tolua_function(tolua_S,"move",tolua_Stormfighter_STransform_move00);
   tolua_function(tolua_S,"moveRelative",tolua_Stormfighter_STransform_moveRelative00);
   tolua_function(tolua_S,"rotate",tolua_Stormfighter_STransform_rotate00);
   tolua_function(tolua_S,"yaw",tolua_Stormfighter_STransform_yaw00);
   tolua_function(tolua_S,"pitch",tolua_Stormfighter_STransform_pitch00);
   tolua_function(tolua_S,"roll",tolua_Stormfighter_STransform_roll00);
   tolua_function(tolua_S,"setFixedYawAxis",tolua_Stormfighter_STransform_setFixedYawAxis00);
   tolua_function(tolua_S,"setInheritScale",tolua_Stormfighter_STransform_setInheritScale00);
   tolua_function(tolua_S,"setInheritOrientation",tolua_Stormfighter_STransform_setInheritOrientation00);
   tolua_function(tolua_S,"setVisible",tolua_Stormfighter_STransform_setVisible00);
   tolua_function(tolua_S,"showBoundingBox",tolua_Stormfighter_STransform_showBoundingBox00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SMovableObject","SMovableObject","Component",NULL);
  tolua_beginmodule(tolua_S,"SMovableObject");
   tolua_function(tolua_S,"getBoundingBox",tolua_Stormfighter_SMovableObject_getBoundingBox00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SMesh","SMesh","SMovableObject",tolua_collect_SMesh);
  #else
  tolua_cclass(tolua_S,"SMesh","SMesh","SMovableObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SMesh");
   tolua_function(tolua_S,"new",tolua_Stormfighter_SMesh_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SMesh_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SMesh_new00_local);
   tolua_function(tolua_S,"new",tolua_Stormfighter_SMesh_new01);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SMesh_new01_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SMesh_new01_local);
   tolua_variable(tolua_S,"type",tolua_get_SMesh_type,NULL);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SMesh_clone00);
   tolua_variable(tolua_S,"meshName",tolua_get_SMesh_meshName,tolua_set_SMesh_meshName);
   tolua_function(tolua_S,"setMaterialName",tolua_Stormfighter_SMesh_setMaterialName00);
   tolua_function(tolua_S,"animated",tolua_Stormfighter_SMesh_animated00);
   tolua_function(tolua_S,"setAnimationStateEnabled",tolua_Stormfighter_SMesh_setAnimationStateEnabled00);
   tolua_function(tolua_S,"setAnimationStateLoop",tolua_Stormfighter_SMesh_setAnimationStateLoop00);
   tolua_function(tolua_S,"addAnimationTime",tolua_Stormfighter_SMesh_addAnimationTime00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SPrimitive","SPrimitive","SMesh",tolua_collect_SPrimitive);
  #else
  tolua_cclass(tolua_S,"SPrimitive","SPrimitive","SMesh",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SPrimitive");
   tolua_constant(tolua_S,"CUBE",SPrimitive::CUBE);
   tolua_constant(tolua_S,"SPHERE",SPrimitive::SPHERE);
   tolua_constant(tolua_S,"PLANE",SPrimitive::PLANE);
   tolua_function(tolua_S,"new",tolua_Stormfighter_SPrimitive_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SPrimitive_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SPrimitive_new00_local);
   tolua_function(tolua_S,"delete",tolua_Stormfighter_SPrimitive_delete00);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SPrimitive_clone00);
   tolua_variable(tolua_S,"type",tolua_get_SPrimitive_type,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SCamera","SCamera","SMovableObject",tolua_collect_SCamera);
  #else
  tolua_cclass(tolua_S,"SCamera","SCamera","SMovableObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SCamera");
   tolua_function(tolua_S,"new",tolua_Stormfighter_SCamera_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SCamera_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SCamera_new00_local);
   tolua_function(tolua_S,"delete",tolua_Stormfighter_SCamera_delete00);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SCamera_clone00);
   tolua_variable(tolua_S,"type",tolua_get_SCamera_type,NULL);
   tolua_function(tolua_S,"setNearClipDistance",tolua_Stormfighter_SCamera_setNearClipDistance00);
   tolua_function(tolua_S,"setAspectRatio",tolua_Stormfighter_SCamera_setAspectRatio00);
   tolua_function(tolua_S,"setPolygonMode",tolua_Stormfighter_SCamera_setPolygonMode00);
   tolua_function(tolua_S,"activate",tolua_Stormfighter_SCamera_activate00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SLight","SLight","SMovableObject",tolua_collect_SLight);
  #else
  tolua_cclass(tolua_S,"SLight","SLight","SMovableObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SLight");
   tolua_function(tolua_S,"new",tolua_Stormfighter_SLight_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SLight_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SLight_new00_local);
   tolua_variable(tolua_S,"type",tolua_get_SLight_type,NULL);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SLight_clone00);
   tolua_function(tolua_S,"setDiffuseColour",tolua_Stormfighter_SLight_setDiffuseColour00);
   tolua_function(tolua_S,"setSpecularColour",tolua_Stormfighter_SLight_setSpecularColour00);
   tolua_function(tolua_S,"setAsTerrainLight",tolua_Stormfighter_SLight_setAsTerrainLight00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SManualObject","SManualObject","SMesh",tolua_collect_SManualObject);
  #else
  tolua_cclass(tolua_S,"SManualObject","SManualObject","SMesh",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SManualObject");
   tolua_function(tolua_S,"new",tolua_Stormfighter_SManualObject_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SManualObject_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SManualObject_new00_local);
   tolua_function(tolua_S,"delete",tolua_Stormfighter_SManualObject_delete00);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SManualObject_clone00);
   tolua_function(tolua_S,"onAdd",tolua_Stormfighter_SManualObject_onAdd00);
   tolua_function(tolua_S,"begin",tolua_Stormfighter_SManualObject_begin00);
   tolua_function(tolua_S,"finish",tolua_Stormfighter_SManualObject_finish00);
   tolua_function(tolua_S,"position",tolua_Stormfighter_SManualObject_position00);
   tolua_function(tolua_S,"colour",tolua_Stormfighter_SManualObject_colour00);
   tolua_function(tolua_S,"normal",tolua_Stormfighter_SManualObject_normal00);
   tolua_function(tolua_S,"tangent",tolua_Stormfighter_SManualObject_tangent00);
   tolua_function(tolua_S,"textureCoord",tolua_Stormfighter_SManualObject_textureCoord00);
   tolua_function(tolua_S,"index",tolua_Stormfighter_SManualObject_index00);
   tolua_function(tolua_S,"triangle",tolua_Stormfighter_SManualObject_triangle00);
   tolua_function(tolua_S,"quad",tolua_Stormfighter_SManualObject_quad00);
   tolua_function(tolua_S,"clear",tolua_Stormfighter_SManualObject_clear00);
   tolua_constant(tolua_S,"OT_POINT_LIST",SManualObject::OT_POINT_LIST);
   tolua_constant(tolua_S,"OT_LINE_LIST",SManualObject::OT_LINE_LIST);
   tolua_constant(tolua_S,"OT_LINE_STRIP",SManualObject::OT_LINE_STRIP);
   tolua_constant(tolua_S,"OT_TRIANGLE_LIST",SManualObject::OT_TRIANGLE_LIST);
   tolua_constant(tolua_S,"OT_TRIANGLE_STRIP",SManualObject::OT_TRIANGLE_STRIP);
   tolua_constant(tolua_S,"OT_TRIANGLE_FAN",SManualObject::OT_TRIANGLE_FAN);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SScript","SScript","Component",NULL);
  tolua_beginmodule(tolua_S,"SScript");
   tolua_function(tolua_S,"clone",tolua_Stormfighter_SScript_clone00);
   tolua_variable(tolua_S,"type",tolua_get_SScript_type,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SLuaScript","SLuaScript","SScript",tolua_collect_SLuaScript);
  #else
  tolua_cclass(tolua_S,"SLuaScript","SLuaScript","SScript",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SLuaScript");
   tolua_function(tolua_S,"new",tolua_Stormfighter_SLuaScript_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_SLuaScript_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_SLuaScript_new00_local);
   tolua_function(tolua_S,"onInit",tolua_Stormfighter_SLuaScript_onInit00);
   tolua_function(tolua_S,"onUpdate",tolua_Stormfighter_SLuaScript_onUpdate00);
   tolua_function(tolua_S,"onPhysicsUpdate",tolua_Stormfighter_SLuaScript_onPhysicsUpdate00);
   tolua_function(tolua_S,"onCollisionEnter",tolua_Stormfighter_SLuaScript_onCollisionEnter00);
   tolua_function(tolua_S,"onCollisionExit",tolua_Stormfighter_SLuaScript_onCollisionExit00);
   tolua_function(tolua_S,"onCollisionStay",tolua_Stormfighter_SLuaScript_onCollisionStay00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"GameObject","GameObject","",tolua_collect_GameObject);
  #else
  tolua_cclass(tolua_S,"GameObject","GameObject","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"GameObject");
   tolua_function(tolua_S,"delete",tolua_Stormfighter_GameObject_delete00);
   tolua_function(tolua_S,"name",tolua_Stormfighter_GameObject_name00);
   tolua_function(tolua_S,"debug",tolua_Stormfighter_GameObject_debug00);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_GameObject_clone00);
   tolua_function(tolua_S,"clone",tolua_Stormfighter_GameObject_clone01);
   tolua_function(tolua_S,"addComponent",tolua_Stormfighter_GameObject_addComponent00);
   tolua_function(tolua_S,"allComponents",tolua_Stormfighter_GameObject_allComponents00);
   tolua_function(tolua_S,"component",tolua_Stormfighter_GameObject_component00);
   tolua_function(tolua_S,"hasComponent",tolua_Stormfighter_GameObject_hasComponent00);
   tolua_function(tolua_S,"transform",tolua_Stormfighter_GameObject_transform00);
   tolua_function(tolua_S,"firstComponentInChildren",tolua_Stormfighter_GameObject_firstComponentInChildren00);
   tolua_function(tolua_S,"allComponentInChildren",tolua_Stormfighter_GameObject_allComponentInChildren00);
   tolua_function(tolua_S,"addSibling",tolua_Stormfighter_GameObject_addSibling00);
   tolua_function(tolua_S,"addChild",tolua_Stormfighter_GameObject_addChild00);
   tolua_function(tolua_S,"setParent",tolua_Stormfighter_GameObject_setParent00);
   tolua_function(tolua_S,"reParent",tolua_Stormfighter_GameObject_reParent00);
   tolua_function(tolua_S,"parent",tolua_Stormfighter_GameObject_parent00);
   tolua_function(tolua_S,"children",tolua_Stormfighter_GameObject_children00);
   tolua_function(tolua_S,"find",tolua_Stormfighter_GameObject_find00);
   tolua_function(tolua_S,"find",tolua_Stormfighter_GameObject_find01);
   tolua_function(tolua_S,"clearChildren",tolua_Stormfighter_GameObject_clearChildren00);
   tolua_function(tolua_S,"getBoundingBox",tolua_Stormfighter_GameObject_getBoundingBox00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SingleRayCastResult","SingleRayCastResult","",tolua_collect_SingleRayCastResult);
  #else
  tolua_cclass(tolua_S,"SingleRayCastResult","SingleRayCastResult","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SingleRayCastResult");
   tolua_variable(tolua_S,"hitObject",tolua_get_SingleRayCastResult_hitObject_ptr,tolua_set_SingleRayCastResult_hitObject_ptr);
   tolua_variable(tolua_S,"hitPoint",tolua_get_SingleRayCastResult_hitPoint,tolua_set_SingleRayCastResult_hitPoint);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Logger","Logger","",NULL);
  tolua_beginmodule(tolua_S,"Logger");
   tolua_function(tolua_S,"logMessage",tolua_Stormfighter_Logger_logMessage00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Graphics","Graphics","",NULL);
  tolua_beginmodule(tolua_S,"Graphics");
   tolua_function(tolua_S,"setTerrainLight",tolua_Stormfighter_Graphics_setTerrainLight00);
   tolua_function(tolua_S,"setActiveCamera",tolua_Stormfighter_Graphics_setActiveCamera00);
   tolua_function(tolua_S,"activeCamera",tolua_Stormfighter_Graphics_activeCamera00);
   tolua_function(tolua_S,"getDefaultAspectRatio",tolua_Stormfighter_Graphics_getDefaultAspectRatio00);
   tolua_function(tolua_S,"defaultViewport",tolua_Stormfighter_Graphics_defaultViewport00);
   tolua_function(tolua_S,"defaultRenderWindow",tolua_Stormfighter_Graphics_defaultRenderWindow00);
   tolua_function(tolua_S,"sceneManager",tolua_Stormfighter_Graphics_sceneManager00);
   tolua_function(tolua_S,"activeCameraToViewportRay",tolua_Stormfighter_Graphics_activeCameraToViewportRay00);
   tolua_function(tolua_S,"closestExactRayQuery",tolua_Stormfighter_Graphics_closestExactRayQuery00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CollisionData","CollisionData","",NULL);
  tolua_beginmodule(tolua_S,"CollisionData");
   tolua_variable(tolua_S,"pointOnA",tolua_get_CollisionData_pointOnA,tolua_set_CollisionData_pointOnA);
   tolua_variable(tolua_S,"pointOnB",tolua_get_CollisionData_pointOnB,tolua_set_CollisionData_pointOnB);
   tolua_variable(tolua_S,"normalOnB",tolua_get_CollisionData_normalOnB,tolua_set_CollisionData_normalOnB);
   tolua_variable(tolua_S,"stale",tolua_get_CollisionData_stale,tolua_set_CollisionData_stale);
   tolua_variable(tolua_S,"fresh",tolua_get_CollisionData_fresh,tolua_set_CollisionData_fresh);
   tolua_variable(tolua_S,"other",tolua_get_CollisionData_other_ptr,tolua_set_CollisionData_other_ptr);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Physics","Physics","",NULL);
  tolua_beginmodule(tolua_S,"Physics");
   tolua_function(tolua_S,"tick",tolua_Stormfighter_Physics_tick00);
   tolua_function(tolua_S,"addRigidBody",tolua_Stormfighter_Physics_addRigidBody00);
   tolua_function(tolua_S,"addRigidBody",tolua_Stormfighter_Physics_addRigidBody01);
   tolua_function(tolua_S,"removeRigidBody",tolua_Stormfighter_Physics_removeRigidBody00);
   tolua_function(tolua_S,"addCollisionGroup",tolua_Stormfighter_Physics_addCollisionGroup00);
   tolua_function(tolua_S,"closestRayCast",tolua_Stormfighter_Physics_closestRayCast00);
   tolua_function(tolua_S,"setDebugDraw",tolua_Stormfighter_Physics_setDebugDraw00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Input","Input","",NULL);
  tolua_beginmodule(tolua_S,"Input");
   tolua_constant(tolua_S,"X",Input::X);
   tolua_constant(tolua_S,"Y",Input::Y);
   tolua_constant(tolua_S,"Z",Input::Z);
   tolua_function(tolua_S,"capture",tolua_Stormfighter_Input_capture00);
   tolua_function(tolua_S,"isKeyDown",tolua_Stormfighter_Input_isKeyDown00);
   tolua_function(tolua_S,"isModifierDown",tolua_Stormfighter_Input_isModifierDown00);
   tolua_function(tolua_S,"isButtonDown",tolua_Stormfighter_Input_isButtonDown00);
   tolua_function(tolua_S,"axisRelative",tolua_Stormfighter_Input_axisRelative00);
   tolua_function(tolua_S,"axisAbsolute",tolua_Stormfighter_Input_axisAbsolute00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"GUI","GUI","",NULL);
  tolua_beginmodule(tolua_S,"GUI");
   tolua_function(tolua_S,"update",tolua_Stormfighter_GUI_update00);
   tolua_function(tolua_S,"executeJS",tolua_Stormfighter_GUI_executeJS00);
   tolua_function(tolua_S,"reload",tolua_Stormfighter_GUI_reload00);
   tolua_function(tolua_S,"pollCommands",tolua_Stormfighter_GUI_pollCommands00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Hierarchy","Hierarchy","",NULL);
  tolua_beginmodule(tolua_S,"Hierarchy");
   tolua_function(tolua_S,"update",tolua_Stormfighter_Hierarchy_update00);
   tolua_function(tolua_S,"find",tolua_Stormfighter_Hierarchy_find00);
   tolua_function(tolua_S,"createGameObject",tolua_Stormfighter_Hierarchy_createGameObject00);
   tolua_function(tolua_S,"createGameObject",tolua_Stormfighter_Hierarchy_createGameObject01);
   tolua_function(tolua_S,"destroyGameObject",tolua_Stormfighter_Hierarchy_destroyGameObject00);
   tolua_function(tolua_S,"destroyGameObject",tolua_Stormfighter_Hierarchy_destroyGameObject01);
   tolua_function(tolua_S,"getRoot",tolua_Stormfighter_Hierarchy_getRoot00);
   tolua_function(tolua_S,"debug",tolua_Stormfighter_Hierarchy_debug00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"StormfighterApp","StormfighterApp","",tolua_collect_StormfighterApp);
  #else
  tolua_cclass(tolua_S,"StormfighterApp","StormfighterApp","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"StormfighterApp");
   tolua_function(tolua_S,"new",tolua_Stormfighter_StormfighterApp_new00);
   tolua_function(tolua_S,"new_local",tolua_Stormfighter_StormfighterApp_new00_local);
   tolua_function(tolua_S,".call",tolua_Stormfighter_StormfighterApp_new00_local);
   tolua_function(tolua_S,"delete",tolua_Stormfighter_StormfighterApp_delete00);
   tolua_function(tolua_S,"log",tolua_Stormfighter_StormfighterApp_log00);
   tolua_function(tolua_S,"graphics",tolua_Stormfighter_StormfighterApp_graphics00);
   tolua_function(tolua_S,"physics",tolua_Stormfighter_StormfighterApp_physics00);
   tolua_function(tolua_S,"input",tolua_Stormfighter_StormfighterApp_input00);
   tolua_function(tolua_S,"hierarchy",tolua_Stormfighter_StormfighterApp_hierarchy00);
   tolua_function(tolua_S,"deltaTime",tolua_Stormfighter_StormfighterApp_deltaTime00);
   tolua_function(tolua_S,"setPhysicsDeltaTime",tolua_Stormfighter_StormfighterApp_setPhysicsDeltaTime00);
   tolua_function(tolua_S,"physicsDeltaTime",tolua_Stormfighter_StormfighterApp_physicsDeltaTime00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Stormfighter (lua_State* tolua_S) {
 return tolua_Stormfighter_open(tolua_S);
};
#endif

