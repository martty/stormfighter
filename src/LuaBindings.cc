/*
** Lua binding: Stormfighter
** Generated automatically by tolua++-1.0.92 on 10/22/11 11:16:03.
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

static int tolua_collect_Ogre__Plane (lua_State* tolua_S)
{
 Ogre::Plane* self = (Ogre::Plane*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__set_std__string_ (lua_State* tolua_S)
{
 std::set<std::string>* self = (std::set<std::string>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_SF__Component__ (lua_State* tolua_S)
{
 std::vector<SF::Component*>* self = (std::vector<SF::Component*>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_SF__GameObject__ (lua_State* tolua_S)
{
 std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Radian (lua_State* tolua_S)
{
 Ogre::Radian* self = (Ogre::Radian*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__SingleRayCastResult (lua_State* tolua_S)
{
 SF::SingleRayCastResult* self = (SF::SingleRayCastResult*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__Camera (lua_State* tolua_S)
{
 SF::Camera* self = (SF::Camera*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector4 (lua_State* tolua_S)
{
 Ogre::Vector4* self = (Ogre::Vector4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__RigidBody (lua_State* tolua_S)
{
 SF::RigidBody* self = (SF::RigidBody*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__AxisAlignedBox (lua_State* tolua_S)
{
 Ogre::AxisAlignedBox* self = (Ogre::AxisAlignedBox*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Sphere (lua_State* tolua_S)
{
 Ogre::Sphere* self = (Ogre::Sphere*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__BoxCollider (lua_State* tolua_S)
{
 SF::BoxCollider* self = (SF::BoxCollider*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__ColourValue (lua_State* tolua_S)
{
 Ogre::ColourValue* self = (Ogre::ColourValue*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Degree (lua_State* tolua_S)
{
 Ogre::Degree* self = (Ogre::Degree*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__ManualObject (lua_State* tolua_S)
{
 SF::ManualObject* self = (SF::ManualObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__pair_bool_float_ (lua_State* tolua_S)
{
 std::pair<bool,float>* self = (std::pair<bool,float>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_btTransform (lua_State* tolua_S)
{
 btTransform* self = (btTransform*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_std__vector_std__string_ (lua_State* tolua_S)
{
 std::vector<std::string>* self = (std::vector<std::string>*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__LuaScript (lua_State* tolua_S)
{
 SF::LuaScript* self = (SF::LuaScript*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__Primitive (lua_State* tolua_S)
{
 SF::Primitive* self = (SF::Primitive*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Ogre__Vector3 (lua_State* tolua_S)
{
 Ogre::Vector3* self = (Ogre::Vector3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__Mesh (lua_State* tolua_S)
{
 SF::Mesh* self = (SF::Mesh*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SF__Light (lua_State* tolua_S)
{
 SF::Light* self = (SF::Light*) tolua_tousertype(tolua_S,1,0);
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

static int tolua_collect_SF__GameObject (lua_State* tolua_S)
{
 SF::GameObject* self = (SF::GameObject*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Ogre::Vector2");
 tolua_usertype(tolua_S,"SF::Mesh");
 tolua_usertype(tolua_S,"std::vector<SF::GameObject*>");
 tolua_usertype(tolua_S,"Ogre::Radian");
 tolua_usertype(tolua_S,"Ogre::RenderWindow");
 tolua_usertype(tolua_S,"Ogre::Vector4");
 tolua_usertype(tolua_S,"Ogre::SceneManager");
 tolua_usertype(tolua_S,"Ogre::AxisAlignedBox");
 tolua_usertype(tolua_S,"SF::CollisionData");
 tolua_usertype(tolua_S,"SF::Script");
 tolua_usertype(tolua_S,"std::vector<SF::Component*>");
 tolua_usertype(tolua_S,"SF::MovableObject");
 tolua_usertype(tolua_S,"SF::StormfighterApp");
 tolua_usertype(tolua_S,"SF::Transform");
 tolua_usertype(tolua_S,"SF::Component");
 tolua_usertype(tolua_S,"Ogre::Light::LightTypes");
 tolua_usertype(tolua_S,"SF::Hierarchy");
 tolua_usertype(tolua_S,"SF::LuaScript");
 tolua_usertype(tolua_S,"SF::Input");
 tolua_usertype(tolua_S,"SF::Physics");
 tolua_usertype(tolua_S,"Ogre::Light");
 tolua_usertype(tolua_S,"btRigidBody");
 tolua_usertype(tolua_S,"SF::Camera");
 tolua_usertype(tolua_S,"Ogre::Matrix3");
 tolua_usertype(tolua_S,"Ogre::Viewport");
 tolua_usertype(tolua_S,"Ogre::Camera");
 tolua_usertype(tolua_S,"Ogre::Math");
 tolua_usertype(tolua_S,"Ogre::Plane");
 tolua_usertype(tolua_S,"SF::DebugDrawer");
 tolua_usertype(tolua_S,"Ogre::list<Ogre::Plane>::type");
 tolua_usertype(tolua_S,"SF::Graphics");
 tolua_usertype(tolua_S,"SF::Logger");
 tolua_usertype(tolua_S,"SF::GUI");
 tolua_usertype(tolua_S,"std::vector<std::string>");
 tolua_usertype(tolua_S,"SF::SingleRayCastResult");
 tolua_usertype(tolua_S,"Ogre::vector<Ogre::Plane>::type");
 tolua_usertype(tolua_S,"Ogre::Quaternion");
 tolua_usertype(tolua_S,"SF::RigidBody");
 tolua_usertype(tolua_S,"SF::BoxCollider");
 tolua_usertype(tolua_S,"Ogre::Sphere");
 tolua_usertype(tolua_S,"OIS::Keyboard");
 tolua_usertype(tolua_S,"SF::Collider");
 tolua_usertype(tolua_S,"SF::ManualObject");
 tolua_usertype(tolua_S,"btCollisionShape");
 tolua_usertype(tolua_S,"Ogre::ColourValue");
 tolua_usertype(tolua_S,"btTransform");
 tolua_usertype(tolua_S,"std::set<std::string>");
 tolua_usertype(tolua_S,"Ogre::Degree");
 tolua_usertype(tolua_S,"Ogre::PolygonMode");
 tolua_usertype(tolua_S,"Ogre::Vector3");
 tolua_usertype(tolua_S,"SF::Primitive");
 tolua_usertype(tolua_S,"SF::Light");
 tolua_usertype(tolua_S,"Ogre::Matrix4");
 tolua_usertype(tolua_S,"std::pair<bool,float>");
 tolua_usertype(tolua_S,"Ogre::Ray");
 tolua_usertype(tolua_S,"SF::GameObject");
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

/* method: clear of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___clear00
static int tolua_Stormfighter_std_vector_SF__GameObject___clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
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

/* method: size of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___size00
static int tolua_Stormfighter_std_vector_SF__GameObject___size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<SF::GameObject*>* self = (const std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
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

/* method: operator[] of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject____geti00
static int tolua_Stormfighter_std_vector_SF__GameObject____geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<SF::GameObject*>* self = (const std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   const SF::GameObject* tolua_ret = (const SF::GameObject*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const SF::GameObject");
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

/* method: operator&[] of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject____seti00
static int tolua_Stormfighter_std_vector_SF__GameObject____seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  SF::GameObject* tolua_value = ((SF::GameObject*)  tolua_tousertype(tolua_S,3,0));
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

/* method: operator[] of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject____geti01
static int tolua_Stormfighter_std_vector_SF__GameObject____geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_std_vector_SF__GameObject____geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___push_back00
static int tolua_Stormfighter_std_vector_SF__GameObject___push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* val = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
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

/* method: new of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___new00
static int tolua_Stormfighter_std_vector_SF__GameObject___new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<SF::GameObject*>* tolua_ret = (std::vector<SF::GameObject*>*)  Mtolua_new((std::vector<SF::GameObject*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<SF::GameObject*>");
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

/* method: new_local of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___new00_local
static int tolua_Stormfighter_std_vector_SF__GameObject___new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<SF::GameObject*>* tolua_ret = (std::vector<SF::GameObject*>*)  Mtolua_new((std::vector<SF::GameObject*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<SF::GameObject*>");
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

/* method: delete of class  std::vector<SF::GameObject*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__GameObject___delete00
static int tolua_Stormfighter_std_vector_SF__GameObject___delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::GameObject*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::GameObject*>* self = (std::vector<SF::GameObject*>*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clear of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___clear00
static int tolua_Stormfighter_std_vector_SF__Component___clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::Component*>* self = (std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
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

/* method: size of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___size00
static int tolua_Stormfighter_std_vector_SF__Component___size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<SF::Component*>* self = (const std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
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

/* method: operator[] of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component____geti00
static int tolua_Stormfighter_std_vector_SF__Component____geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const std::vector<SF::Component*>* self = (const std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   const SF::Component* tolua_ret = (const SF::Component*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const SF::Component");
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

/* method: operator&[] of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component____seti00
static int tolua_Stormfighter_std_vector_SF__Component____seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::Component*>* self = (std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  SF::Component* tolua_value = ((SF::Component*)  tolua_tousertype(tolua_S,3,0));
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

/* method: operator[] of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component____geti01
static int tolua_Stormfighter_std_vector_SF__Component____geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  std::vector<SF::Component*>* self = (std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   SF::Component* tolua_ret = (SF::Component*)  self->operator[](index);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Component");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_std_vector_SF__Component____geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___push_back00
static int tolua_Stormfighter_std_vector_SF__Component___push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::Component*>* self = (std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
  SF::Component* val = ((SF::Component*)  tolua_tousertype(tolua_S,2,0));
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

/* method: new of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___new00
static int tolua_Stormfighter_std_vector_SF__Component___new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<SF::Component*>* tolua_ret = (std::vector<SF::Component*>*)  Mtolua_new((std::vector<SF::Component*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<SF::Component*>");
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

/* method: new_local of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___new00_local
static int tolua_Stormfighter_std_vector_SF__Component___new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::vector<SF::Component*>* tolua_ret = (std::vector<SF::Component*>*)  Mtolua_new((std::vector<SF::Component*>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::vector<SF::Component*>");
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

/* method: delete of class  std::vector<SF::Component*> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_vector_SF__Component___delete00
static int tolua_Stormfighter_std_vector_SF__Component___delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"std::vector<SF::Component*>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  std::vector<SF::Component*>* self = (std::vector<SF::Component*>*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: first of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_get_std__pair_bool_float__first
static int tolua_get_std__pair_bool_float__first(lua_State* tolua_S)
{
  std::pair<bool,float>* self = (std::pair<bool,float>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'first'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->first);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: first of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_set_std__pair_bool_float__first
static int tolua_set_std__pair_bool_float__first(lua_State* tolua_S)
{
  std::pair<bool,float>* self = (std::pair<bool,float>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'first'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->first = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: second of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_get_std__pair_bool_float__second
static int tolua_get_std__pair_bool_float__second(lua_State* tolua_S)
{
  std::pair<bool,float>* self = (std::pair<bool,float>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'second'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->second);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: second of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_set_std__pair_bool_float__second
static int tolua_set_std__pair_bool_float__second(lua_State* tolua_S)
{
  std::pair<bool,float>* self = (std::pair<bool,float>*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'second'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->second = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_pair_bool_float__new00
static int tolua_Stormfighter_std_pair_bool_float__new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::pair<bool,float>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::pair<bool,float>* tolua_ret = (std::pair<bool,float>*)  Mtolua_new((std::pair<bool,float>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::pair<bool,float>");
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

/* method: new_local of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_pair_bool_float__new00_local
static int tolua_Stormfighter_std_pair_bool_float__new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::pair<bool,float>",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::pair<bool,float>* tolua_ret = (std::pair<bool,float>*)  Mtolua_new((std::pair<bool,float>)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::pair<bool,float>");
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

/* method: new of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_pair_bool_float__new01
static int tolua_Stormfighter_std_pair_bool_float__new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::pair<bool,float>",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const bool x = ((const bool)  tolua_toboolean(tolua_S,2,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   std::pair<bool,float>* tolua_ret = (std::pair<bool,float>*)  Mtolua_new((std::pair<bool,float>)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::pair<bool,float>");
   tolua_pushboolean(tolua_S,(bool)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 3;
tolua_lerror:
 return tolua_Stormfighter_std_pair_bool_float__new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  std::pair<bool,float> */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_std_pair_bool_float__new01_local
static int tolua_Stormfighter_std_pair_bool_float__new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"std::pair<bool,float>",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const bool x = ((const bool)  tolua_toboolean(tolua_S,2,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   std::pair<bool,float>* tolua_ret = (std::pair<bool,float>*)  Mtolua_new((std::pair<bool,float>)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"std::pair<bool,float>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
   tolua_pushboolean(tolua_S,(bool)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 3;
tolua_lerror:
 return tolua_Stormfighter_std_pair_bool_float__new00_local(tolua_S);
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

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new00
static int tolua_Stormfighter_Ogre_Plane_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
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

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new00_local
static int tolua_Stormfighter_Ogre_Plane_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
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

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new01
static int tolua_Stormfighter_Ogre_Plane_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Plane* rhs = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rhs));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new01_local
static int tolua_Stormfighter_Ogre_Plane_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Plane* rhs = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rhs));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new02
static int tolua_Stormfighter_Ogre_Plane_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float fConstant = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,fConstant));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new02_local
static int tolua_Stormfighter_Ogre_Plane_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float fConstant = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,fConstant));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new03
static int tolua_Stormfighter_Ogre_Plane_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float a = ((  float)  tolua_tonumber(tolua_S,2,0));
   float b = ((  float)  tolua_tonumber(tolua_S,3,0));
   float c = ((  float)  tolua_tonumber(tolua_S,4,0));
   float d = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new03_local
static int tolua_Stormfighter_Ogre_Plane_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   float a = ((  float)  tolua_tonumber(tolua_S,2,0));
   float b = ((  float)  tolua_tonumber(tolua_S,3,0));
   float c = ((  float)  tolua_tonumber(tolua_S,4,0));
   float d = ((  float)  tolua_tonumber(tolua_S,5,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(a,b,c,d));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new04
static int tolua_Stormfighter_Ogre_Plane_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,*rkPoint));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new04_local
static int tolua_Stormfighter_Ogre_Plane_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkNormal,*rkPoint));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new05
static int tolua_Stormfighter_Ogre_Plane_new05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkPoint0 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* rkPoint2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkPoint0,*rkPoint1,*rkPoint2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_new05_local
static int tolua_Stormfighter_Ogre_Plane_new05_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* rkPoint0 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* rkPoint2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
  {
   Ogre::Plane* tolua_ret = (Ogre::Plane*)  Mtolua_new((Ogre::Plane)(*rkPoint0,*rkPoint1,*rkPoint2));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Plane");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_new04_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSide of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_getSide00
static int tolua_Stormfighter_Ogre_Plane_getSide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSide'", NULL);
#endif
  {
   Ogre::Plane::Side tolua_ret = (Ogre::Plane::Side)  self->getSide(*rkPoint);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSide of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_getSide01
static int tolua_Stormfighter_Ogre_Plane_getSide01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* rkBox = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSide'", NULL);
#endif
  {
   Ogre::Plane::Side tolua_ret = (Ogre::Plane::Side)  self->getSide(*rkBox);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_getSide00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSide of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_getSide02
static int tolua_Stormfighter_Ogre_Plane_getSide02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* centre = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* halfSize = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSide'", NULL);
#endif
  {
   Ogre::Plane::Side tolua_ret = (Ogre::Plane::Side)  self->getSide(*centre,*halfSize);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_getSide01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDistance of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_getDistance00
static int tolua_Stormfighter_Ogre_Plane_getDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDistance'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getDistance(*rkPoint);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: redefine of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_redefine00
static int tolua_Stormfighter_Ogre_Plane_redefine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkPoint0 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint1 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* rkPoint2 = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'redefine'", NULL);
#endif
  {
   self->redefine(*rkPoint0,*rkPoint1,*rkPoint2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'redefine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: redefine of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_redefine01
static int tolua_Stormfighter_Ogre_Plane_redefine01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* rkNormal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* rkPoint = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'redefine'", NULL);
#endif
  {
   self->redefine(*rkNormal,*rkPoint);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Plane_redefine00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: projectVector of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_projectVector00
static int tolua_Stormfighter_Ogre_Plane_projectVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* v = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'projectVector'", NULL);
#endif
  {
   Ogre::Vector3 tolua_ret = (Ogre::Vector3)  self->projectVector(*v);
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
 tolua_error(tolua_S,"#ferror in function 'projectVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: normalise of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane_normalise00
static int tolua_Stormfighter_Ogre_Plane_normalise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Plane",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normalise'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->normalise();
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

/* get function: normal of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Plane_normal
static int tolua_get_Ogre__Plane_normal(lua_State* tolua_S)
{
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normal'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->normal,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: normal of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Plane_normal
static int tolua_set_Ogre__Plane_normal(lua_State* tolua_S)
{
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normal'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->normal = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: d of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_get_Ogre__Plane_d
static int tolua_get_Ogre__Plane_d(lua_State* tolua_S)
{
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->d);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: d of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_set_Ogre__Plane_d
static int tolua_set_Ogre__Plane_d(lua_State* tolua_S)
{
  Ogre::Plane* self = (Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'd'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->d = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  Ogre::Plane */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Plane__eq00
static int tolua_Stormfighter_Ogre_Plane__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Plane",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Plane* self = (const Ogre::Plane*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Plane* rhs = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
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

/* method: new of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_new00
static int tolua_Stormfighter_Ogre_Sphere_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Sphere* tolua_ret = (Ogre::Sphere*)  Mtolua_new((Ogre::Sphere)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Sphere");
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

/* method: new_local of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_new00_local
static int tolua_Stormfighter_Ogre_Sphere_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Ogre::Sphere* tolua_ret = (Ogre::Sphere*)  Mtolua_new((Ogre::Sphere)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Sphere");
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

/* method: new of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_new01
static int tolua_Stormfighter_Ogre_Sphere_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* center = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Sphere* tolua_ret = (Ogre::Sphere*)  Mtolua_new((Ogre::Sphere)(*center,radius));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Sphere");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Sphere_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_new01_local
static int tolua_Stormfighter_Ogre_Sphere_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* center = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
   float radius = ((  float)  tolua_tonumber(tolua_S,3,0));
  {
   Ogre::Sphere* tolua_ret = (Ogre::Sphere*)  Mtolua_new((Ogre::Sphere)(*center,radius));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Ogre::Sphere");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Sphere_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRadius of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_getRadius00
static int tolua_Stormfighter_Ogre_Sphere_getRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRadius'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_setRadius00
static int tolua_Stormfighter_Ogre_Sphere_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Sphere* self = (Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
   float radius = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'", NULL);
#endif
  {
   self->setRadius(radius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenter of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_getCenter00
static int tolua_Stormfighter_Ogre_Sphere_getCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenter'", NULL);
#endif
  {
   const Ogre::Vector3& tolua_ret = (const Ogre::Vector3&)  self->getCenter();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Ogre::Vector3");
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

/* method: setCenter of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_setCenter00
static int tolua_Stormfighter_Ogre_Sphere_setCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Sphere* self = (Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* center = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenter'", NULL);
#endif
  {
   self->setCenter(*center);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_intersects00
static int tolua_Stormfighter_Ogre_Sphere_intersects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Sphere",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
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
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_intersects01
static int tolua_Stormfighter_Ogre_Sphere_intersects01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::AxisAlignedBox",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::AxisAlignedBox* box = ((const Ogre::AxisAlignedBox*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*box);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Sphere_intersects00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_intersects02
static int tolua_Stormfighter_Ogre_Sphere_intersects02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Plane",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Plane* plane = ((const Ogre::Plane*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersects'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->intersects(*plane);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_Ogre_Sphere_intersects01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersects of class  Ogre::Sphere */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Sphere_intersects03
static int tolua_Stormfighter_Ogre_Sphere_intersects03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Sphere",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Sphere* self = (const Ogre::Sphere*)  tolua_tousertype(tolua_S,1,0);
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
 return tolua_Stormfighter_Ogre_Sphere_intersects02(tolua_S);
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
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getRotationTo of class  Ogre::Vector3 */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_Ogre_Vector3_getRotationTo01
static int tolua_Stormfighter_Ogre_Vector3_getRotationTo01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Ogre::Vector3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Ogre::Vector3* self = (const Ogre::Vector3*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* dest = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* fallbackAxis = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotationTo'", NULL);
#endif
  {
   Ogre::Quaternion tolua_ret = (Ogre::Quaternion)  self->getRotationTo(*dest,*fallbackAxis);
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
 return tolua_Stormfighter_Ogre_Vector3_getRotationTo00(tolua_S);
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

/* get function: group of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_get_SF__Component_group
static int tolua_get_SF__Component_group(lua_State* tolua_S)
{
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'group'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->group());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_get_SF__Component_type
static int tolua_get_SF__Component_type(lua_State* tolua_S)
{
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_clone00
static int tolua_Stormfighter_SF_Component_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Component* self = (const SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Component* tolua_ret = (SF::Component*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Component");
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

/* method: onInit of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onInit00
static int tolua_Stormfighter_SF_Component_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onUpdate of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onUpdate00
static int tolua_Stormfighter_SF_Component_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onPhysicsUpdate of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onPhysicsUpdate00
static int tolua_Stormfighter_SF_Component_onPhysicsUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onCollisionEnter of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onCollisionEnter00
static int tolua_Stormfighter_SF_Component_onCollisionEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* method: onCollisionExit of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onCollisionExit00
static int tolua_Stormfighter_SF_Component_onCollisionExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* method: onCollisionStay of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_onCollisionStay00
static int tolua_Stormfighter_SF_Component_onCollisionStay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Component",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* get function: state of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_get_SF__Component_state
static int tolua_get_SF__Component_state(lua_State* tolua_S)
{
  SF::Component* self = (SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'state'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->state());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: object of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_object00
static int tolua_Stormfighter_SF_Component_object00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Component* self = (const SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'object'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->object();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: application of class  SF::Component */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Component_application00
static int tolua_Stormfighter_SF_Component_application00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Component* self = (const SF::Component*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'application'", NULL);
#endif
  {
   SF::StormfighterApp* tolua_ret = (SF::StormfighterApp*)  self->application();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::StormfighterApp");
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

/* get function: position of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_get_SF__Transform_position
static int tolua_get_SF__Transform_position(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'position'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->position(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: position of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_set_SF__Transform_position
static int tolua_set_SF__Transform_position(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: orientation of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_get_SF__Transform_orientation
static int tolua_get_SF__Transform_orientation(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'orientation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->orientation(),"Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: orientation of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_set_SF__Transform_orientation
static int tolua_set_SF__Transform_orientation(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: scale of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_get_SF__Transform_scale
static int tolua_get_SF__Transform_scale(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->scale(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_set_SF__Transform_scale
static int tolua_set_SF__Transform_scale(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: worldMatrix of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_worldMatrix00
static int tolua_Stormfighter_SF_Transform_worldMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Transform* self = (const SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: worldPosition of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_get_SF__Transform_worldPosition
static int tolua_get_SF__Transform_worldPosition(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worldPosition'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->worldPosition(),"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: worldOrientation of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_get_SF__Transform_worldOrientation
static int tolua_get_SF__Transform_worldOrientation(lua_State* tolua_S)
{
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'worldOrientation'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->worldOrientation(),"Ogre::Quaternion");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookAt of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_lookAt00
static int tolua_Stormfighter_SF_Transform_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: move of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_move00
static int tolua_Stormfighter_SF_Transform_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: moveRelative of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_moveRelative00
static int tolua_Stormfighter_SF_Transform_moveRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: rotate of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_rotate00
static int tolua_Stormfighter_SF_Transform_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Quaternion",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: yaw of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_yaw00
static int tolua_Stormfighter_SF_Transform_yaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: pitch of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_pitch00
static int tolua_Stormfighter_SF_Transform_pitch00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: roll of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_roll00
static int tolua_Stormfighter_SF_Transform_roll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Radian",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setFixedYawAxis of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_setFixedYawAxis00
static int tolua_Stormfighter_SF_Transform_setFixedYawAxis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setInheritScale of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_setInheritScale00
static int tolua_Stormfighter_SF_Transform_setInheritScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setInheritOrientation of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_setInheritOrientation00
static int tolua_Stormfighter_SF_Transform_setInheritOrientation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setVisible of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_setVisible00
static int tolua_Stormfighter_SF_Transform_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: showBoundingBox of class  SF::Transform */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Transform_showBoundingBox00
static int tolua_Stormfighter_SF_Transform_showBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Transform",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Transform* self = (SF::Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getBoundingBox of class  SF::MovableObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_MovableObject_getBoundingBox00
static int tolua_Stormfighter_SF_MovableObject_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::MovableObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::MovableObject* self = (const SF::MovableObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_new00
static int tolua_Stormfighter_SF_Mesh_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SF::Mesh* tolua_ret = (SF::Mesh*)  Mtolua_new((SF::Mesh)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Mesh");
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

/* method: new_local of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_new00_local
static int tolua_Stormfighter_SF_Mesh_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SF::Mesh* tolua_ret = (SF::Mesh*)  Mtolua_new((SF::Mesh)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Mesh");
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

/* method: new of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_new01
static int tolua_Stormfighter_SF_Mesh_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   std::string meshname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SF::Mesh* tolua_ret = (SF::Mesh*)  Mtolua_new((SF::Mesh)(meshname));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Mesh");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_Mesh_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_new01_local
static int tolua_Stormfighter_SF_Mesh_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
   std::string meshname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SF::Mesh* tolua_ret = (SF::Mesh*)  Mtolua_new((SF::Mesh)(meshname));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Mesh");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_Mesh_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_clone00
static int tolua_Stormfighter_SF_Mesh_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Mesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Mesh* self = (const SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Mesh* tolua_ret = (SF::Mesh*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Mesh");
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

/* get function: meshName of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_get_SF__Mesh_meshName
static int tolua_get_SF__Mesh_meshName(lua_State* tolua_S)
{
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'meshName'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->meshName());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: meshName of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_set_SF__Mesh_meshName
static int tolua_set_SF__Mesh_meshName(lua_State* tolua_S)
{
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setMaterialName of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_setMaterialName00
static int tolua_Stormfighter_SF_Mesh_setMaterialName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: animated of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_animated00
static int tolua_Stormfighter_SF_Mesh_animated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Mesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Mesh* self = (const SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setAnimationStateEnabled of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_setAnimationStateEnabled00
static int tolua_Stormfighter_SF_Mesh_setAnimationStateEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setAnimationStateLoop of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_setAnimationStateLoop00
static int tolua_Stormfighter_SF_Mesh_setAnimationStateLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addAnimationTime of class  SF::Mesh */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Mesh_addAnimationTime00
static int tolua_Stormfighter_SF_Mesh_addAnimationTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Mesh",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Mesh* self = (SF::Mesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  SF::Primitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Primitive_new00
static int tolua_Stormfighter_SF_Primitive_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Primitive",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Primitive::PrimitiveType type = ((SF::Primitive::PrimitiveType) (int)  tolua_tonumber(tolua_S,2,0));
  {
   SF::Primitive* tolua_ret = (SF::Primitive*)  Mtolua_new((SF::Primitive)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Primitive");
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

/* method: new_local of class  SF::Primitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Primitive_new00_local
static int tolua_Stormfighter_SF_Primitive_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Primitive",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Primitive::PrimitiveType type = ((SF::Primitive::PrimitiveType) (int)  tolua_tonumber(tolua_S,2,0));
  {
   SF::Primitive* tolua_ret = (SF::Primitive*)  Mtolua_new((SF::Primitive)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Primitive");
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

/* method: delete of class  SF::Primitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Primitive_delete00
static int tolua_Stormfighter_SF_Primitive_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Primitive",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Primitive* self = (SF::Primitive*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::Primitive */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Primitive_clone00
static int tolua_Stormfighter_SF_Primitive_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Primitive",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Primitive* self = (const SF::Primitive*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Primitive* tolua_ret = (SF::Primitive*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Primitive");
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

/* method: new of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_new00
static int tolua_Stormfighter_SF_Camera_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SF::Camera* tolua_ret = (SF::Camera*)  Mtolua_new((SF::Camera)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Camera");
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

/* method: new_local of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_new00_local
static int tolua_Stormfighter_SF_Camera_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SF::Camera* tolua_ret = (SF::Camera*)  Mtolua_new((SF::Camera)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Camera");
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

/* method: delete of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_delete00
static int tolua_Stormfighter_SF_Camera_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Camera* self = (SF::Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_clone00
static int tolua_Stormfighter_SF_Camera_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Camera* self = (const SF::Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Camera* tolua_ret = (SF::Camera*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Camera");
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

/* method: setNearClipDistance of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_setNearClipDistance00
static int tolua_Stormfighter_SF_Camera_setNearClipDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Camera* self = (SF::Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setAspectRatio of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_setAspectRatio00
static int tolua_Stormfighter_SF_Camera_setAspectRatio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Camera* self = (SF::Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setPolygonMode of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_setPolygonMode00
static int tolua_Stormfighter_SF_Camera_setPolygonMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::PolygonMode",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Camera* self = (SF::Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: activate of class  SF::Camera */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Camera_activate00
static int tolua_Stormfighter_SF_Camera_activate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Camera* self = (SF::Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_new00
static int tolua_Stormfighter_SF_Light_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Light::LightTypes",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light::LightTypes type = *((Ogre::Light::LightTypes*)  tolua_tousertype(tolua_S,2,0));
  {
   SF::Light* tolua_ret = (SF::Light*)  Mtolua_new((SF::Light)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Light");
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

/* method: new_local of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_new00_local
static int tolua_Stormfighter_SF_Light_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Light::LightTypes",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Light::LightTypes type = *((Ogre::Light::LightTypes*)  tolua_tousertype(tolua_S,2,0));
  {
   SF::Light* tolua_ret = (SF::Light*)  Mtolua_new((SF::Light)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Light");
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

/* method: clone of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_clone00
static int tolua_Stormfighter_SF_Light_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Light* self = (const SF::Light*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Light* tolua_ret = (SF::Light*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Light");
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

/* method: setDiffuseColour of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_setDiffuseColour00
static int tolua_Stormfighter_SF_Light_setDiffuseColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Light* self = (SF::Light*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setSpecularColour of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_setSpecularColour00
static int tolua_Stormfighter_SF_Light_setSpecularColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Light",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Light* self = (SF::Light*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setAsTerrainLight of class  SF::Light */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Light_setAsTerrainLight00
static int tolua_Stormfighter_SF_Light_setAsTerrainLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Light* self = (SF::Light*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_new00
static int tolua_Stormfighter_SF_ManualObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isStatic = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   SF::ManualObject* tolua_ret = (SF::ManualObject*)  Mtolua_new((SF::ManualObject)(isStatic));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::ManualObject");
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

/* method: new_local of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_new00_local
static int tolua_Stormfighter_SF_ManualObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isStatic = ((bool)  tolua_toboolean(tolua_S,2,0));
  {
   SF::ManualObject* tolua_ret = (SF::ManualObject*)  Mtolua_new((SF::ManualObject)(isStatic));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::ManualObject");
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

/* method: delete of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_delete00
static int tolua_Stormfighter_SF_ManualObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_clone00
static int tolua_Stormfighter_SF_ManualObject_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::ManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::ManualObject* self = (const SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::ManualObject* tolua_ret = (SF::ManualObject*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::ManualObject");
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

/* method: onAdd of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_onAdd00
static int tolua_Stormfighter_SF_ManualObject_onAdd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"SF::Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
   std::string goname = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  SF::Transform* transform = ((SF::Transform*)  tolua_tousertype(tolua_S,3,0));
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

/* method: begin of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_begin00
static int tolua_Stormfighter_SF_ManualObject_begin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
   std::string materialName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  SF::ManualObject::OperationType opType = ((SF::ManualObject::OperationType) (int)  tolua_tonumber(tolua_S,3,0));
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

/* method: finishSection of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_finishSection00
static int tolua_Stormfighter_SF_ManualObject_finishSection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finishSection'", NULL);
#endif
  {
   self->finishSection();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finishSection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finish of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_finish00
static int tolua_Stormfighter_SF_ManualObject_finish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: position of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_position00
static int tolua_Stormfighter_SF_ManualObject_position00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* pos = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'position'", NULL);
#endif
  {
   self->position(*pos);
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

/* method: colour of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_colour00
static int tolua_Stormfighter_SF_ManualObject_colour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::ColourValue* col = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'colour'", NULL);
#endif
  {
   self->colour(*col);
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

/* method: normal of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_normal00
static int tolua_Stormfighter_SF_ManualObject_normal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* normal = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'normal'", NULL);
#endif
  {
   self->normal(*normal);
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

/* method: tangent of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_tangent00
static int tolua_Stormfighter_SF_ManualObject_tangent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* tangent = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'tangent'", NULL);
#endif
  {
   self->tangent(*tangent);
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

/* method: textureCoord of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_textureCoord00
static int tolua_Stormfighter_SF_ManualObject_textureCoord00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* uvw = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'textureCoord'", NULL);
#endif
  {
   self->textureCoord(*uvw);
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

/* method: index of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_index00
static int tolua_Stormfighter_SF_ManualObject_index00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: triangle of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_triangle00
static int tolua_Stormfighter_SF_ManualObject_triangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: quad of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_quad00
static int tolua_Stormfighter_SF_ManualObject_quad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
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
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clear of class  SF::ManualObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_ManualObject_clear00
static int tolua_Stormfighter_SF_ManualObject_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::ManualObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::ManualObject* self = (SF::ManualObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::Collider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Collider_clone00
static int tolua_Stormfighter_SF_Collider_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Collider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Collider* self = (const SF::Collider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Collider* tolua_ret = (SF::Collider*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Collider");
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

/* method: collisionShape of class  SF::Collider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Collider_collisionShape00
static int tolua_Stormfighter_SF_Collider_collisionShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Collider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Collider* self = (SF::Collider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'collisionShape'", NULL);
#endif
  {
   btCollisionShape* tolua_ret = (btCollisionShape*)  self->collisionShape();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"btCollisionShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'collisionShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: shapeTransform of class  SF::Collider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Collider_shapeTransform00
static int tolua_Stormfighter_SF_Collider_shapeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Collider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Collider* self = (SF::Collider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'shapeTransform'", NULL);
#endif
  {
   btTransform tolua_ret = (btTransform)  self->shapeTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((btTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"btTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(btTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"btTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'shapeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_new00
static int tolua_Stormfighter_SF_BoxCollider_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3 halfextents = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   SF::BoxCollider* tolua_ret = (SF::BoxCollider*)  Mtolua_new((SF::BoxCollider)(halfextents));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::BoxCollider");
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

/* method: new_local of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_new00_local
static int tolua_Stormfighter_SF_BoxCollider_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Ogre::Vector3 halfextents = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  {
   SF::BoxCollider* tolua_ret = (SF::BoxCollider*)  Mtolua_new((SF::BoxCollider)(halfextents));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::BoxCollider");
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

/* method: new of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_new01
static int tolua_Stormfighter_SF_BoxCollider_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   SF::BoxCollider* tolua_ret = (SF::BoxCollider*)  Mtolua_new((SF::BoxCollider)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::BoxCollider");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_BoxCollider_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_new01_local
static int tolua_Stormfighter_SF_BoxCollider_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   SF::BoxCollider* tolua_ret = (SF::BoxCollider*)  Mtolua_new((SF::BoxCollider)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::BoxCollider");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_BoxCollider_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_delete00
static int tolua_Stormfighter_SF_BoxCollider_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::BoxCollider* self = (SF::BoxCollider*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_clone00
static int tolua_Stormfighter_SF_BoxCollider_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::BoxCollider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::BoxCollider* self = (const SF::BoxCollider*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::BoxCollider* tolua_ret = (SF::BoxCollider*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::BoxCollider");
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

/* method: onInit of class  SF::BoxCollider */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_BoxCollider_onInit00
static int tolua_Stormfighter_SF_BoxCollider_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::BoxCollider",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::BoxCollider* self = (SF::BoxCollider*)  tolua_tousertype(tolua_S,1,0);
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

/* method: new of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_new00
static int tolua_Stormfighter_SF_RigidBody_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
    float mass = ((   float)  tolua_tonumber(tolua_S,2,0));
  {
   SF::RigidBody* tolua_ret = (SF::RigidBody*)  Mtolua_new((SF::RigidBody)(mass));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::RigidBody");
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

/* method: new_local of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_new00_local
static int tolua_Stormfighter_SF_RigidBody_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
    float mass = ((   float)  tolua_tonumber(tolua_S,2,0));
  {
   SF::RigidBody* tolua_ret = (SF::RigidBody*)  Mtolua_new((SF::RigidBody)(mass));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::RigidBody");
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

/* method: delete of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_delete00
static int tolua_Stormfighter_SF_RigidBody_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_clone00
static int tolua_Stormfighter_SF_RigidBody_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::RigidBody* self = (const SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::RigidBody* tolua_ret = (SF::RigidBody*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::RigidBody");
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

/* method: onInit of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_onInit00
static int tolua_Stormfighter_SF_RigidBody_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setKinematic of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setKinematic00
static int tolua_Stormfighter_SF_RigidBody_setKinematic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  bool isKinematic = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setKinematic'", NULL);
#endif
  {
   self->setKinematic(isKinematic);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setKinematic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCollisionResponse of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setCollisionResponse00
static int tolua_Stormfighter_SF_RigidBody_setCollisionResponse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  bool hasResponse = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCollisionResponse'", NULL);
#endif
  {
   self->setCollisionResponse(hasResponse);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCollisionResponse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCallbacks of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setCallbacks00
static int tolua_Stormfighter_SF_RigidBody_setCallbacks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  bool hasCallbacks = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCallbacks'", NULL);
#endif
  {
   self->setCallbacks(hasCallbacks);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCallbacks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: kinematic of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_kinematic00
static int tolua_Stormfighter_SF_RigidBody_kinematic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::RigidBody* self = (const SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'kinematic'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->kinematic();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'kinematic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: static_ of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_static_00
static int tolua_Stormfighter_SF_RigidBody_static_00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::RigidBody* self = (const SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'static_'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->static_();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'static_'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: trigger of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_trigger00
static int tolua_Stormfighter_SF_RigidBody_trigger00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::RigidBody* self = (const SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'trigger'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->trigger();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'trigger'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mass of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_mass00
static int tolua_Stormfighter_SF_RigidBody_mass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::RigidBody* self = (const SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mass'", NULL);
#endif
  {
     float tolua_ret = (   float)  self->mass();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCollisionGroup of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setCollisionGroup00
static int tolua_Stormfighter_SF_RigidBody_setCollisionGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
   std::string group = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCollisionGroup'", NULL);
#endif
  {
   self->setCollisionGroup(group);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCollisionGroup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCollidesWith of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setCollidesWith00
static int tolua_Stormfighter_SF_RigidBody_setCollidesWith00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
   std::vector<std::string> collidesWith = *((  std::vector<std::string>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCollidesWith'", NULL);
#endif
  {
   self->setCollidesWith(collidesWith);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCollidesWith'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint2PointConstraint of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint00
static int tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* pivotInA = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint2PointConstraint'", NULL);
#endif
  {
   self->addPoint2PointConstraint(*pivotInA);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPoint2PointConstraint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPoint2PointConstraint of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint01
static int tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  SF::RigidBody* rbB = ((SF::RigidBody*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* pivotInA = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::Vector3* pivotInB = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPoint2PointConstraint'", NULL);
#endif
  {
   self->addPoint2PointConstraint(rbB,*pivotInA,*pivotInB);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDamping of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setDamping00
static int tolua_Stormfighter_SF_RigidBody_setDamping00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
    float linear = ((   float)  tolua_tonumber(tolua_S,2,0));
    float angular = ((   float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDamping'", NULL);
#endif
  {
   self->setDamping(linear,angular);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDamping'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: applyCentralImpulse of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_applyCentralImpulse00
static int tolua_Stormfighter_SF_RigidBody_applyCentralImpulse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3 direction = *((Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'applyCentralImpulse'", NULL);
#endif
  {
   self->applyCentralImpulse(direction);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'applyCentralImpulse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setLinearVelocity of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setLinearVelocity00
static int tolua_Stormfighter_SF_RigidBody_setLinearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 linvel = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLinearVelocity'", NULL);
#endif
  {
   self->setLinearVelocity(linvel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLinearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: linearVelocity of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_linearVelocity00
static int tolua_Stormfighter_SF_RigidBody_linearVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'linearVelocity'", NULL);
#endif
  {
    Ogre::Vector3 tolua_ret = (  Ogre::Vector3)  self->linearVelocity();
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
 tolua_error(tolua_S,"#ferror in function 'linearVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngularVelocity of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_setAngularVelocity00
static int tolua_Stormfighter_SF_RigidBody_setAngularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Vector3 angvel = *((  Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngularVelocity'", NULL);
#endif
  {
   self->setAngularVelocity(angvel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: angularVelocity of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_angularVelocity00
static int tolua_Stormfighter_SF_RigidBody_angularVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'angularVelocity'", NULL);
#endif
  {
    Ogre::Vector3 tolua_ret = (  Ogre::Vector3)  self->angularVelocity();
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
 tolua_error(tolua_S,"#ferror in function 'angularVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disableDebugDraw of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_disableDebugDraw00
static int tolua_Stormfighter_SF_RigidBody_disableDebugDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disableDebugDraw'", NULL);
#endif
  {
   self->disableDebugDraw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disableDebugDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_add00
static int tolua_Stormfighter_SF_RigidBody_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'", NULL);
#endif
  {
   self->add();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: remove of class  SF::RigidBody */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_RigidBody_remove00
static int tolua_Stormfighter_SF_RigidBody_remove00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::RigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::RigidBody* self = (SF::RigidBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'remove'", NULL);
#endif
  {
   self->remove();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clone of class  SF::Script */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Script_clone00
static int tolua_Stormfighter_SF_Script_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Script",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Script* self = (const SF::Script*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::Script* tolua_ret = (SF::Script*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Script");
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

/* get function: type of class  SF::Script */
#ifndef TOLUA_DISABLE_tolua_get_SF__Script_type
static int tolua_get_SF__Script_type(lua_State* tolua_S)
{
  SF::Script* self = (SF::Script*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->type());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_new00
static int tolua_Stormfighter_SF_LuaScript_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   std::string type = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SF::LuaScript* tolua_ret = (SF::LuaScript*)  Mtolua_new((SF::LuaScript)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::LuaScript");
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

/* method: new_local of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_new00_local
static int tolua_Stormfighter_SF_LuaScript_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   std::string type = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  {
   SF::LuaScript* tolua_ret = (SF::LuaScript*)  Mtolua_new((SF::LuaScript)(type));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::LuaScript");
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

/* method: setTrackingId of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_setTrackingId00
static int tolua_Stormfighter_SF_LuaScript_setTrackingId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTrackingId'", NULL);
#endif
  {
   self->setTrackingId(id);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTrackingId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onInit of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onInit00
static int tolua_Stormfighter_SF_LuaScript_onInit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onUpdate of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onUpdate00
static int tolua_Stormfighter_SF_LuaScript_onUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onPhysicsUpdate of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onPhysicsUpdate00
static int tolua_Stormfighter_SF_LuaScript_onPhysicsUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onCollisionEnter of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onCollisionEnter00
static int tolua_Stormfighter_SF_LuaScript_onCollisionEnter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* method: onCollisionExit of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onCollisionExit00
static int tolua_Stormfighter_SF_LuaScript_onCollisionExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* method: onCollisionStay of class  SF::LuaScript */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_LuaScript_onCollisionStay00
static int tolua_Stormfighter_SF_LuaScript_onCollisionStay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::LuaScript",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::CollisionData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::LuaScript* self = (SF::LuaScript*)  tolua_tousertype(tolua_S,1,0);
  const SF::CollisionData* collisionData = ((const SF::CollisionData*)  tolua_tousertype(tolua_S,2,0));
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

/* method: delete of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_delete00
static int tolua_Stormfighter_SF_GameObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: name of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_name00
static int tolua_Stormfighter_SF_GameObject_name00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::GameObject* self = (const SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'name'", NULL);
#endif
  {
    const std::string& tolua_ret = (  const std::string&)  self->name();
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

/* method: debug of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_debug00
static int tolua_Stormfighter_SF_GameObject_debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clone of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_clone00
static int tolua_Stormfighter_SF_GameObject_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->clone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: clone of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_clone01
static int tolua_Stormfighter_SF_GameObject_clone01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clone'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->clone(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_GameObject_clone00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addComponent of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_addComponent00
static int tolua_Stormfighter_SF_GameObject_addComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::Component",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  SF::Component* component = ((SF::Component*)  tolua_tousertype(tolua_S,2,0));
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

/* method: allComponents of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_allComponents00
static int tolua_Stormfighter_SF_GameObject_allComponents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'allComponents'", NULL);
#endif
  {
    std::vector<SF::Component*> tolua_ret = (  std::vector<SF::Component*>)  self->allComponents();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<SF::Component*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<SF::Component*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::Component*>");
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

/* method: component of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_component00
static int tolua_Stormfighter_SF_GameObject_component00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'component'", NULL);
#endif
  {
   SF::Component* tolua_ret = (SF::Component*)  self->component(type);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Component");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'component'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasComponent of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_hasComponent00
static int tolua_Stormfighter_SF_GameObject_hasComponent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::GameObject* self = (const SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasComponent'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasComponent(type);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasComponent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transform of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_transform00
static int tolua_Stormfighter_SF_GameObject_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transform'", NULL);
#endif
  {
   SF::Transform* tolua_ret = (SF::Transform*)  self->transform();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Transform");
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

/* method: firstComponentInChildren of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_firstComponentInChildren00
static int tolua_Stormfighter_SF_GameObject_firstComponentInChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'firstComponentInChildren'", NULL);
#endif
  {
   SF::Component* tolua_ret = (SF::Component*)  self->firstComponentInChildren(type);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Component");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'firstComponentInChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: allComponentInChildren of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_allComponentInChildren00
static int tolua_Stormfighter_SF_GameObject_allComponentInChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string type = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'allComponentInChildren'", NULL);
#endif
  {
    std::vector<SF::Component*> tolua_ret = (  std::vector<SF::Component*>)  self->allComponentInChildren(type);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<SF::Component*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<SF::Component*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::Component*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'allComponentInChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSibling of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_addSibling00
static int tolua_Stormfighter_SF_GameObject_addSibling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* go = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
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

/* method: addChild of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_addChild00
static int tolua_Stormfighter_SF_GameObject_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* go = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
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

/* method: setParent of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_setParent00
static int tolua_Stormfighter_SF_GameObject_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* go = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
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

/* method: reParent of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_reParent00
static int tolua_Stormfighter_SF_GameObject_reParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: parent of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_parent00
static int tolua_Stormfighter_SF_GameObject_parent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parent'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->parent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: children of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_children00
static int tolua_Stormfighter_SF_GameObject_children00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'children'", NULL);
#endif
  {
    std::vector<SF::GameObject*> tolua_ret = (  std::vector<SF::GameObject*>)  self->children();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<SF::GameObject*>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::GameObject*>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<SF::GameObject*>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<SF::GameObject*>");
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

/* method: find of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_find00
static int tolua_Stormfighter_SF_GameObject_find00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->find(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: find of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_find01
static int tolua_Stormfighter_SF_GameObject_find01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
  const SF::GameObject* go = ((const SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->find(go);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_GameObject_find00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearChildren of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_clearChildren00
static int tolua_Stormfighter_SF_GameObject_clearChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getBoundingBox of class  SF::GameObject */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GameObject_getBoundingBox00
static int tolua_Stormfighter_SF_GameObject_getBoundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GameObject* self = (SF::GameObject*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: hitObject of class  SF::SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_get_SF__SingleRayCastResult_hitObject_ptr
static int tolua_get_SF__SingleRayCastResult_hitObject_ptr(lua_State* tolua_S)
{
  SF::SingleRayCastResult* self = (SF::SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitObject'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->hitObject,"SF::GameObject");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hitObject of class  SF::SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_set_SF__SingleRayCastResult_hitObject_ptr
static int tolua_set_SF__SingleRayCastResult_hitObject_ptr(lua_State* tolua_S)
{
  SF::SingleRayCastResult* self = (SF::SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitObject'",NULL);
  if (!tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->hitObject = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: hitPoint of class  SF::SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_get_SF__SingleRayCastResult_hitPoint
static int tolua_get_SF__SingleRayCastResult_hitPoint(lua_State* tolua_S)
{
  SF::SingleRayCastResult* self = (SF::SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'hitPoint'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->hitPoint,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: hitPoint of class  SF::SingleRayCastResult */
#ifndef TOLUA_DISABLE_tolua_set_SF__SingleRayCastResult_hitPoint
static int tolua_set_SF__SingleRayCastResult_hitPoint(lua_State* tolua_S)
{
  SF::SingleRayCastResult* self = (SF::SingleRayCastResult*)  tolua_tousertype(tolua_S,1,0);
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

/* method: logMessage of class  SF::Logger */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Logger_logMessage00
static int tolua_Stormfighter_SF_Logger_logMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Logger",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Logger* self = (SF::Logger*)  tolua_tousertype(tolua_S,1,0);
  const std::string message = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logMessage'", NULL);
#endif
  {
   self->logMessage(message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTerrainLight of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_setTerrainLight00
static int tolua_Stormfighter_SF_Graphics_setTerrainLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: renderGameObjectIntoFile of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_renderGameObjectIntoFile00
static int tolua_Stormfighter_SF_Graphics_renderGameObjectIntoFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* go = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
   std::string filename = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
    float width = ((   float)  tolua_tonumber(tolua_S,4,0));
    float height = ((   float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renderGameObjectIntoFile'", NULL);
#endif
  {
   self->renderGameObjectIntoFile(go,filename,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'renderGameObjectIntoFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLoadedMaterialNames of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_getLoadedMaterialNames00
static int tolua_Stormfighter_SF_Graphics_getLoadedMaterialNames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLoadedMaterialNames'", NULL);
#endif
  {
    std::vector<std::string> tolua_ret = (  std::vector<std::string>)  self->getLoadedMaterialNames();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((std::vector<std::string>)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(std::vector<std::string>));
     tolua_pushusertype(tolua_S,tolua_obj,"std::vector<std::string>");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLoadedMaterialNames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActiveCamera of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_setActiveCamera00
static int tolua_Stormfighter_SF_Graphics_setActiveCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Ogre::Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: activeCamera of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_activeCamera00
static int tolua_Stormfighter_SF_Graphics_activeCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Graphics* self = (const SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getDefaultAspectRatio of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_getDefaultAspectRatio00
static int tolua_Stormfighter_SF_Graphics_getDefaultAspectRatio00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: defaultViewport of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_defaultViewport00
static int tolua_Stormfighter_SF_Graphics_defaultViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Graphics* self = (const SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: defaultRenderWindow of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_defaultRenderWindow00
static int tolua_Stormfighter_SF_Graphics_defaultRenderWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Graphics* self = (const SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: sceneManager of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_sceneManager00
static int tolua_Stormfighter_SF_Graphics_sceneManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::Graphics* self = (const SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: activeCameraToViewportRay of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_activeCameraToViewportRay00
static int tolua_Stormfighter_SF_Graphics_activeCameraToViewportRay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: closestExactRayQuery of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_closestExactRayQuery00
static int tolua_Stormfighter_SF_Graphics_closestExactRayQuery00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Ogre::Ray",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
   Ogre::Ray ray = *((  Ogre::Ray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closestExactRayQuery'", NULL);
#endif
  {
   SF::SingleRayCastResult tolua_ret = (SF::SingleRayCastResult)  self->closestExactRayQuery(ray);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((SF::SingleRayCastResult)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"SF::SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(SF::SingleRayCastResult));
     tolua_pushusertype(tolua_S,tolua_obj,"SF::SingleRayCastResult");
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

/* method: debugDrawer of class  SF::Graphics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Graphics_debugDrawer00
static int tolua_Stormfighter_SF_Graphics_debugDrawer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Graphics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Graphics* self = (SF::Graphics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'debugDrawer'", NULL);
#endif
  {
   SF::DebugDrawer* tolua_ret = (SF::DebugDrawer*)  self->debugDrawer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::DebugDrawer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debugDrawer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIcoSphereRecursionLevel of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_setIcoSphereRecursionLevel00
static int tolua_Stormfighter_SF_DebugDrawer_setIcoSphereRecursionLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  int recursionLevel = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIcoSphereRecursionLevel'", NULL);
#endif
  {
   self->setIcoSphereRecursionLevel(recursionLevel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIcoSphereRecursionLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawLine of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawLine00
static int tolua_Stormfighter_SF_DebugDrawer_drawLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* start = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* end = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawLine'", NULL);
#endif
  {
   self->drawLine(*start,*end,*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawCircle of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawCircle00
static int tolua_Stormfighter_SF_DebugDrawer_drawCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* centre = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  int segmentsCount = ((int)  tolua_tonumber(tolua_S,4,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,5,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,6,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawCircle'", NULL);
#endif
  {
   self->drawCircle(*centre,radius,segmentsCount,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawCylinder of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawCylinder00
static int tolua_Stormfighter_SF_DebugDrawer_drawCylinder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,7,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* centre = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  int segmentsCount = ((int)  tolua_tonumber(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,6,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,7,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawCylinder'", NULL);
#endif
  {
   self->drawCylinder(*centre,radius,segmentsCount,height,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawCylinder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawQuad of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawQuad00
static int tolua_Stormfighter_SF_DebugDrawer_drawQuad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3 vertices[4];
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,3,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawQuad'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Ogre::Vector3",4,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<4;i++)
    vertices[i] = *((Ogre::Vector3*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   self->drawQuad(vertices,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawQuad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawCuboid of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawCuboid00
static int tolua_Stormfighter_SF_DebugDrawer_drawCuboid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_istable(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  Ogre::Vector3 vertices[8];
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,3,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawCuboid'", NULL);
#endif
  {
#ifndef TOLUA_RELEASE
   if (!tolua_isusertypearray(tolua_S,2,"Ogre::Vector3",8,0,&tolua_err))
    goto tolua_lerror;
   else
#endif
   {
    int i;
    for(i=0; i<8;i++)
    vertices[i] = *((Ogre::Vector3*)  tolua_tofieldusertype(tolua_S,2,i+1,0));
   }
  }
  {
   self->drawCuboid(vertices,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawCuboid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawSphere of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawSphere00
static int tolua_Stormfighter_SF_DebugDrawer_drawSphere00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* centre = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,4,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,5,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawSphere'", NULL);
#endif
  {
   self->drawSphere(*centre,radius,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawSphere'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawTetrahedron of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_drawTetrahedron00
static int tolua_Stormfighter_SF_DebugDrawer_drawTetrahedron00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const Ogre::ColourValue",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* centre = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  float scale = ((float)  tolua_tonumber(tolua_S,3,0));
  const Ogre::ColourValue* colour = ((const Ogre::ColourValue*)  tolua_tousertype(tolua_S,4,0));
  bool isFilled = ((bool)  tolua_toboolean(tolua_S,5,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawTetrahedron'", NULL);
#endif
  {
   self->drawTetrahedron(*centre,scale,*colour,isFilled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawTetrahedron'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEnabled of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_getEnabled00
static int tolua_Stormfighter_SF_DebugDrawer_getEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEnabled of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_setEnabled00
static int tolua_Stormfighter_SF_DebugDrawer_setEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
  bool _isEnabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEnabled'", NULL);
#endif
  {
   self->setEnabled(_isEnabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchEnabled of class  SF::DebugDrawer */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_DebugDrawer_switchEnabled00
static int tolua_Stormfighter_SF_DebugDrawer_switchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::DebugDrawer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::DebugDrawer* self = (SF::DebugDrawer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchEnabled'", NULL);
#endif
  {
   self->switchEnabled();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pointOnA of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_pointOnA
static int tolua_get_SF__CollisionData_pointOnA(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnA'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->pointOnA,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pointOnA of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_pointOnA
static int tolua_set_SF__CollisionData_pointOnA(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: pointOnB of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_pointOnB
static int tolua_get_SF__CollisionData_pointOnB(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pointOnB'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->pointOnB,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pointOnB of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_pointOnB
static int tolua_set_SF__CollisionData_pointOnB(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: normalOnB of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_normalOnB
static int tolua_get_SF__CollisionData_normalOnB(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'normalOnB'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->normalOnB,"Ogre::Vector3");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: normalOnB of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_normalOnB
static int tolua_set_SF__CollisionData_normalOnB(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: stale of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_stale
static int tolua_get_SF__CollisionData_stale(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'stale'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->stale);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: stale of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_stale
static int tolua_set_SF__CollisionData_stale(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: fresh of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_fresh
static int tolua_get_SF__CollisionData_fresh(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'fresh'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->fresh);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: fresh of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_fresh
static int tolua_set_SF__CollisionData_fresh(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: other of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_get_SF__CollisionData_other_ptr
static int tolua_get_SF__CollisionData_other_ptr(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'other'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->other,"SF::GameObject");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: other of class  SF::CollisionData */
#ifndef TOLUA_DISABLE_tolua_set_SF__CollisionData_other_ptr
static int tolua_set_SF__CollisionData_other_ptr(lua_State* tolua_S)
{
  SF::CollisionData* self = (SF::CollisionData*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'other'",NULL);
  if (!tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->other = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: tick of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_tick00
static int tolua_Stormfighter_SF_Physics_tick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addRigidBody of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_addRigidBody00
static int tolua_Stormfighter_SF_Physics_addRigidBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addRigidBody of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_addRigidBody01
static int tolua_Stormfighter_SF_Physics_addRigidBody01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
  btRigidBody* rigidBody = ((btRigidBody*)  tolua_tousertype(tolua_S,2,0));
   std::string group = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   std::vector<std::string> collidesWith = *((  std::vector<std::string>*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addRigidBody'", NULL);
#endif
  {
   self->addRigidBody(rigidBody,group,collidesWith);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_SF_Physics_addRigidBody00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeRigidBody of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_removeRigidBody00
static int tolua_Stormfighter_SF_Physics_removeRigidBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"btRigidBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addCollisionGroup of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_addCollisionGroup00
static int tolua_Stormfighter_SF_Physics_addCollisionGroup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: closestRayCast of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_closestRayCast00
static int tolua_Stormfighter_SF_Physics_closestRayCast00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Ogre::Vector3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const Ogre::Vector3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
  const Ogre::Vector3* from = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,2,0));
  const Ogre::Vector3* to = ((const Ogre::Vector3*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closestRayCast'", NULL);
#endif
  {
   SF::SingleRayCastResult tolua_ret = (SF::SingleRayCastResult)  self->closestRayCast(*from,*to);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((SF::SingleRayCastResult)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"SF::SingleRayCastResult");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(SF::SingleRayCastResult));
     tolua_pushusertype(tolua_S,tolua_obj,"SF::SingleRayCastResult");
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

/* method: setDebugDraw of class  SF::Physics */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Physics_setDebugDraw00
static int tolua_Stormfighter_SF_Physics_setDebugDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Physics",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Physics* self = (SF::Physics*)  tolua_tousertype(tolua_S,1,0);
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

/* method: capture of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_capture00
static int tolua_Stormfighter_SF_Input_capture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isKeyDown of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_isKeyDown00
static int tolua_Stormfighter_SF_Input_isKeyDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isModifierDown of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_isModifierDown00
static int tolua_Stormfighter_SF_Input_isModifierDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isButtonDown of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_isButtonDown00
static int tolua_Stormfighter_SF_Input_isButtonDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
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

/* method: axisRelative of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_axisRelative00
static int tolua_Stormfighter_SF_Input_axisRelative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
  SF::Input::Axis axis = ((SF::Input::Axis) (int)  tolua_tonumber(tolua_S,2,0));
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

/* method: axisAbsolute of class  SF::Input */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Input_axisAbsolute00
static int tolua_Stormfighter_SF_Input_axisAbsolute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Input",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Input* self = (SF::Input*)  tolua_tousertype(tolua_S,1,0);
  SF::Input::Axis axis = ((SF::Input::Axis) (int)  tolua_tonumber(tolua_S,2,0));
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

/* method: update of class  SF::GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GUI_update00
static int tolua_Stormfighter_SF_GUI_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GUI",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GUI* self = (SF::GUI*)  tolua_tousertype(tolua_S,1,0);
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

/* method: executeJS of class  SF::GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GUI_executeJS00
static int tolua_Stormfighter_SF_GUI_executeJS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GUI",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GUI* self = (SF::GUI*)  tolua_tousertype(tolua_S,1,0);
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

/* method: reload of class  SF::GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GUI_reload00
static int tolua_Stormfighter_SF_GUI_reload00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GUI",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GUI* self = (SF::GUI*)  tolua_tousertype(tolua_S,1,0);
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

/* method: pollCommands of class  SF::GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GUI_pollCommands00
static int tolua_Stormfighter_SF_GUI_pollCommands00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GUI",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GUI* self = (SF::GUI*)  tolua_tousertype(tolua_S,1,0);
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

/* method: isInGUI of class  SF::GUI */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_GUI_isInGUI00
static int tolua_Stormfighter_SF_GUI_isInGUI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::GUI",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::GUI* self = (SF::GUI*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isInGUI'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isInGUI(x,y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isInGUI'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: update of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_update00
static int tolua_Stormfighter_SF_Hierarchy_update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
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

/* method: find of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_find00
static int tolua_Stormfighter_SF_Hierarchy_find00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'find'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->find(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: createGameObject of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_createGameObject00
static int tolua_Stormfighter_SF_Hierarchy_createGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->createGameObject(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: createGameObject of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_createGameObject01
static int tolua_Stormfighter_SF_Hierarchy_createGameObject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createGameObject'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->createGameObject();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Stormfighter_SF_Hierarchy_createGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyGameObject of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_destroyGameObject00
static int tolua_Stormfighter_SF_Hierarchy_destroyGameObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
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

/* method: destroyGameObject of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_destroyGameObject01
static int tolua_Stormfighter_SF_Hierarchy_destroyGameObject01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SF::GameObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
  SF::GameObject* gameObject = ((SF::GameObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroyGameObject'", NULL);
#endif
  {
   self->destroyGameObject(gameObject);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Stormfighter_SF_Hierarchy_destroyGameObject00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRoot of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_getRoot00
static int tolua_Stormfighter_SF_Hierarchy_getRoot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRoot'", NULL);
#endif
  {
   SF::GameObject* tolua_ret = (SF::GameObject*)  self->getRoot();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::GameObject");
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

/* method: debug of class  SF::Hierarchy */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_Hierarchy_debug00
static int tolua_Stormfighter_SF_Hierarchy_debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::Hierarchy",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::Hierarchy* self = (SF::Hierarchy*)  tolua_tousertype(tolua_S,1,0);
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

/* method: log of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_log00
static int tolua_Stormfighter_SF_StormfighterApp_log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::StormfighterApp",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::StormfighterApp* self = (SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
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

/* method: graphics of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_graphics00
static int tolua_Stormfighter_SF_StormfighterApp_graphics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::StormfighterApp* self = (const SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'graphics'", NULL);
#endif
  {
   SF::Graphics* tolua_ret = (SF::Graphics*)  self->graphics();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Graphics");
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

/* method: physics of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_physics00
static int tolua_Stormfighter_SF_StormfighterApp_physics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::StormfighterApp* self = (const SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'physics'", NULL);
#endif
  {
   SF::Physics* tolua_ret = (SF::Physics*)  self->physics();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Physics");
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

/* method: input of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_input00
static int tolua_Stormfighter_SF_StormfighterApp_input00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::StormfighterApp* self = (const SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'input'", NULL);
#endif
  {
   SF::Input* tolua_ret = (SF::Input*)  self->input();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Input");
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

/* method: hierarchy of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_hierarchy00
static int tolua_Stormfighter_SF_StormfighterApp_hierarchy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::StormfighterApp* self = (const SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hierarchy'", NULL);
#endif
  {
   SF::Hierarchy* tolua_ret = (SF::Hierarchy*)  self->hierarchy();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SF::Hierarchy");
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

/* method: deltaTime of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_deltaTime00
static int tolua_Stormfighter_SF_StormfighterApp_deltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SF::StormfighterApp* self = (const SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setPhysicsDeltaTime of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_setPhysicsDeltaTime00
static int tolua_Stormfighter_SF_StormfighterApp_setPhysicsDeltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::StormfighterApp* self = (SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
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

/* method: physicsDeltaTime of class  SF::StormfighterApp */
#ifndef TOLUA_DISABLE_tolua_Stormfighter_SF_StormfighterApp_physicsDeltaTime00
static int tolua_Stormfighter_SF_StormfighterApp_physicsDeltaTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SF::StormfighterApp",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SF::StormfighterApp* self = (SF::StormfighterApp*)  tolua_tousertype(tolua_S,1,0);
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
   tolua_cclass(tolua_S,"vector_SF__GameObject__","std::vector<SF::GameObject*>","",tolua_collect_std__vector_SF__GameObject__);
   #else
   tolua_cclass(tolua_S,"vector_SF__GameObject__","std::vector<SF::GameObject*>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vector_SF__GameObject__");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_vector_SF__GameObject___clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_vector_SF__GameObject___size00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_SF__GameObject____geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_std_vector_SF__GameObject____seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_SF__GameObject____geti01);
    tolua_function(tolua_S,"push_back",tolua_Stormfighter_std_vector_SF__GameObject___push_back00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_vector_SF__GameObject___new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_vector_SF__GameObject___new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_vector_SF__GameObject___new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_vector_SF__GameObject___delete00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vector_SF__Component__","std::vector<SF::Component*>","",tolua_collect_std__vector_SF__Component__);
   #else
   tolua_cclass(tolua_S,"vector_SF__Component__","std::vector<SF::Component*>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vector_SF__Component__");
    tolua_function(tolua_S,"clear",tolua_Stormfighter_std_vector_SF__Component___clear00);
    tolua_function(tolua_S,"size",tolua_Stormfighter_std_vector_SF__Component___size00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_SF__Component____geti00);
    tolua_function(tolua_S,".seti",tolua_Stormfighter_std_vector_SF__Component____seti00);
    tolua_function(tolua_S,".geti",tolua_Stormfighter_std_vector_SF__Component____geti01);
    tolua_function(tolua_S,"push_back",tolua_Stormfighter_std_vector_SF__Component___push_back00);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_vector_SF__Component___new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_vector_SF__Component___new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_vector_SF__Component___new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_std_vector_SF__Component___delete00);
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
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"pair_bool_float_","std::pair<bool,float>","",tolua_collect_std__pair_bool_float_);
   #else
   tolua_cclass(tolua_S,"pair_bool_float_","std::pair<bool,float>","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"pair_bool_float_");
    tolua_variable(tolua_S,"first",tolua_get_std__pair_bool_float__first,tolua_set_std__pair_bool_float__first);
    tolua_variable(tolua_S,"second",tolua_get_std__pair_bool_float__second,tolua_set_std__pair_bool_float__second);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_pair_bool_float__new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_pair_bool_float__new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_pair_bool_float__new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_std_pair_bool_float__new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_std_pair_bool_float__new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_std_pair_bool_float__new01_local);
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
   tolua_cclass(tolua_S,"Plane","Ogre::Plane","",tolua_collect_Ogre__Plane);
   #else
   tolua_cclass(tolua_S,"Plane","Ogre::Plane","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Plane");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new01_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new02);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new02_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new02_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new03);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new03_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new03_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new04);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new04_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new04_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Plane_new05);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Plane_new05_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Plane_new05_local);
    tolua_constant(tolua_S,"NO_SIDE",Ogre::Plane::NO_SIDE);
    tolua_constant(tolua_S,"POSITIVE_SIDE",Ogre::Plane::POSITIVE_SIDE);
    tolua_constant(tolua_S,"NEGATIVE_SIDE",Ogre::Plane::NEGATIVE_SIDE);
    tolua_constant(tolua_S,"BOTH_SIDE",Ogre::Plane::BOTH_SIDE);
    tolua_function(tolua_S,"getSide",tolua_Stormfighter_Ogre_Plane_getSide00);
    tolua_function(tolua_S,"getSide",tolua_Stormfighter_Ogre_Plane_getSide01);
    tolua_function(tolua_S,"getSide",tolua_Stormfighter_Ogre_Plane_getSide02);
    tolua_function(tolua_S,"getDistance",tolua_Stormfighter_Ogre_Plane_getDistance00);
    tolua_function(tolua_S,"redefine",tolua_Stormfighter_Ogre_Plane_redefine00);
    tolua_function(tolua_S,"redefine",tolua_Stormfighter_Ogre_Plane_redefine01);
    tolua_function(tolua_S,"projectVector",tolua_Stormfighter_Ogre_Plane_projectVector00);
    tolua_function(tolua_S,"normalise",tolua_Stormfighter_Ogre_Plane_normalise00);
    tolua_variable(tolua_S,"normal",tolua_get_Ogre__Plane_normal,tolua_set_Ogre__Plane_normal);
    tolua_variable(tolua_S,"d",tolua_get_Ogre__Plane_d,tolua_set_Ogre__Plane_d);
    tolua_function(tolua_S,".eq",tolua_Stormfighter_Ogre_Plane__eq00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"Ogre",0);
  tolua_beginmodule(tolua_S,"Ogre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Sphere","Ogre::Sphere","",tolua_collect_Ogre__Sphere);
   #else
   tolua_cclass(tolua_S,"Sphere","Ogre::Sphere","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Sphere");
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Sphere_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Sphere_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Sphere_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_Ogre_Sphere_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_Ogre_Sphere_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_Ogre_Sphere_new01_local);
    tolua_function(tolua_S,"getRadius",tolua_Stormfighter_Ogre_Sphere_getRadius00);
    tolua_function(tolua_S,"setRadius",tolua_Stormfighter_Ogre_Sphere_setRadius00);
    tolua_function(tolua_S,"getCenter",tolua_Stormfighter_Ogre_Sphere_getCenter00);
    tolua_function(tolua_S,"setCenter",tolua_Stormfighter_Ogre_Sphere_setCenter00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Sphere_intersects00);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Sphere_intersects01);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Sphere_intersects02);
    tolua_function(tolua_S,"intersects",tolua_Stormfighter_Ogre_Sphere_intersects03);
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
    tolua_function(tolua_S,"getRotationTo",tolua_Stormfighter_Ogre_Vector3_getRotationTo01);
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
  tolua_module(tolua_S,"SF",0);
  tolua_beginmodule(tolua_S,"SF");
  tolua_endmodule(tolua_S);
  tolua_module(tolua_S,"SF",0);
  tolua_beginmodule(tolua_S,"SF");
   tolua_cclass(tolua_S,"Component","SF::Component","",NULL);
   tolua_beginmodule(tolua_S,"Component");
    tolua_variable(tolua_S,"group",tolua_get_SF__Component_group,NULL);
    tolua_variable(tolua_S,"type",tolua_get_SF__Component_type,NULL);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Component_clone00);
    tolua_function(tolua_S,"onInit",tolua_Stormfighter_SF_Component_onInit00);
    tolua_function(tolua_S,"onUpdate",tolua_Stormfighter_SF_Component_onUpdate00);
    tolua_function(tolua_S,"onPhysicsUpdate",tolua_Stormfighter_SF_Component_onPhysicsUpdate00);
    tolua_function(tolua_S,"onCollisionEnter",tolua_Stormfighter_SF_Component_onCollisionEnter00);
    tolua_function(tolua_S,"onCollisionExit",tolua_Stormfighter_SF_Component_onCollisionExit00);
    tolua_function(tolua_S,"onCollisionStay",tolua_Stormfighter_SF_Component_onCollisionStay00);
    tolua_constant(tolua_S,"CREATED",SF::Component::CREATED);
    tolua_constant(tolua_S,"PREPARED",SF::Component::PREPARED);
    tolua_constant(tolua_S,"READY",SF::Component::READY);
    tolua_variable(tolua_S,"state",tolua_get_SF__Component_state,NULL);
    tolua_constant(tolua_S,"NONE",SF::Component::NONE);
    tolua_constant(tolua_S,"INIT",SF::Component::INIT);
    tolua_constant(tolua_S,"UPDATE",SF::Component::UPDATE);
    tolua_constant(tolua_S,"PHYSICS_UPDATE",SF::Component::PHYSICS_UPDATE);
    tolua_constant(tolua_S,"COLLISION",SF::Component::COLLISION);
    tolua_function(tolua_S,"object",tolua_Stormfighter_SF_Component_object00);
    tolua_function(tolua_S,"application",tolua_Stormfighter_SF_Component_application00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Transform","SF::Transform","SF::Component",NULL);
   tolua_beginmodule(tolua_S,"Transform");
    tolua_variable(tolua_S,"position",tolua_get_SF__Transform_position,tolua_set_SF__Transform_position);
    tolua_variable(tolua_S,"orientation",tolua_get_SF__Transform_orientation,tolua_set_SF__Transform_orientation);
    tolua_variable(tolua_S,"scale",tolua_get_SF__Transform_scale,tolua_set_SF__Transform_scale);
    tolua_function(tolua_S,"worldMatrix",tolua_Stormfighter_SF_Transform_worldMatrix00);
    tolua_variable(tolua_S,"worldPosition",tolua_get_SF__Transform_worldPosition,NULL);
    tolua_variable(tolua_S,"worldOrientation",tolua_get_SF__Transform_worldOrientation,NULL);
    tolua_function(tolua_S,"lookAt",tolua_Stormfighter_SF_Transform_lookAt00);
    tolua_function(tolua_S,"move",tolua_Stormfighter_SF_Transform_move00);
    tolua_function(tolua_S,"moveRelative",tolua_Stormfighter_SF_Transform_moveRelative00);
    tolua_function(tolua_S,"rotate",tolua_Stormfighter_SF_Transform_rotate00);
    tolua_function(tolua_S,"yaw",tolua_Stormfighter_SF_Transform_yaw00);
    tolua_function(tolua_S,"pitch",tolua_Stormfighter_SF_Transform_pitch00);
    tolua_function(tolua_S,"roll",tolua_Stormfighter_SF_Transform_roll00);
    tolua_function(tolua_S,"setFixedYawAxis",tolua_Stormfighter_SF_Transform_setFixedYawAxis00);
    tolua_function(tolua_S,"setInheritScale",tolua_Stormfighter_SF_Transform_setInheritScale00);
    tolua_function(tolua_S,"setInheritOrientation",tolua_Stormfighter_SF_Transform_setInheritOrientation00);
    tolua_function(tolua_S,"setVisible",tolua_Stormfighter_SF_Transform_setVisible00);
    tolua_function(tolua_S,"showBoundingBox",tolua_Stormfighter_SF_Transform_showBoundingBox00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"MovableObject","SF::MovableObject","SF::Component",NULL);
   tolua_beginmodule(tolua_S,"MovableObject");
    tolua_function(tolua_S,"getBoundingBox",tolua_Stormfighter_SF_MovableObject_getBoundingBox00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Mesh","SF::Mesh","SF::MovableObject",tolua_collect_SF__Mesh);
   #else
   tolua_cclass(tolua_S,"Mesh","SF::Mesh","SF::MovableObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Mesh");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_Mesh_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_Mesh_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_Mesh_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_Mesh_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_Mesh_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_Mesh_new01_local);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Mesh_clone00);
    tolua_variable(tolua_S,"meshName",tolua_get_SF__Mesh_meshName,tolua_set_SF__Mesh_meshName);
    tolua_function(tolua_S,"setMaterialName",tolua_Stormfighter_SF_Mesh_setMaterialName00);
    tolua_function(tolua_S,"animated",tolua_Stormfighter_SF_Mesh_animated00);
    tolua_function(tolua_S,"setAnimationStateEnabled",tolua_Stormfighter_SF_Mesh_setAnimationStateEnabled00);
    tolua_function(tolua_S,"setAnimationStateLoop",tolua_Stormfighter_SF_Mesh_setAnimationStateLoop00);
    tolua_function(tolua_S,"addAnimationTime",tolua_Stormfighter_SF_Mesh_addAnimationTime00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Primitive","SF::Primitive","SF::Mesh",tolua_collect_SF__Primitive);
   #else
   tolua_cclass(tolua_S,"Primitive","SF::Primitive","SF::Mesh",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Primitive");
    tolua_constant(tolua_S,"CUBE",SF::Primitive::CUBE);
    tolua_constant(tolua_S,"SPHERE",SF::Primitive::SPHERE);
    tolua_constant(tolua_S,"PLANE",SF::Primitive::PLANE);
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_Primitive_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_Primitive_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_Primitive_new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_Primitive_delete00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Primitive_clone00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Camera","SF::Camera","SF::MovableObject",tolua_collect_SF__Camera);
   #else
   tolua_cclass(tolua_S,"Camera","SF::Camera","SF::MovableObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Camera");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_Camera_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_Camera_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_Camera_new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_Camera_delete00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Camera_clone00);
    tolua_function(tolua_S,"setNearClipDistance",tolua_Stormfighter_SF_Camera_setNearClipDistance00);
    tolua_function(tolua_S,"setAspectRatio",tolua_Stormfighter_SF_Camera_setAspectRatio00);
    tolua_function(tolua_S,"setPolygonMode",tolua_Stormfighter_SF_Camera_setPolygonMode00);
    tolua_function(tolua_S,"activate",tolua_Stormfighter_SF_Camera_activate00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Light","SF::Light","SF::MovableObject",tolua_collect_SF__Light);
   #else
   tolua_cclass(tolua_S,"Light","SF::Light","SF::MovableObject",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Light");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_Light_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_Light_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_Light_new00_local);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Light_clone00);
    tolua_function(tolua_S,"setDiffuseColour",tolua_Stormfighter_SF_Light_setDiffuseColour00);
    tolua_function(tolua_S,"setSpecularColour",tolua_Stormfighter_SF_Light_setSpecularColour00);
    tolua_function(tolua_S,"setAsTerrainLight",tolua_Stormfighter_SF_Light_setAsTerrainLight00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"ManualObject","SF::ManualObject","SF::Mesh",tolua_collect_SF__ManualObject);
   #else
   tolua_cclass(tolua_S,"ManualObject","SF::ManualObject","SF::Mesh",NULL);
   #endif
   tolua_beginmodule(tolua_S,"ManualObject");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_ManualObject_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_ManualObject_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_ManualObject_new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_ManualObject_delete00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_ManualObject_clone00);
    tolua_function(tolua_S,"onAdd",tolua_Stormfighter_SF_ManualObject_onAdd00);
    tolua_function(tolua_S,"begin",tolua_Stormfighter_SF_ManualObject_begin00);
    tolua_function(tolua_S,"finishSection",tolua_Stormfighter_SF_ManualObject_finishSection00);
    tolua_function(tolua_S,"finish",tolua_Stormfighter_SF_ManualObject_finish00);
    tolua_function(tolua_S,"position",tolua_Stormfighter_SF_ManualObject_position00);
    tolua_function(tolua_S,"colour",tolua_Stormfighter_SF_ManualObject_colour00);
    tolua_function(tolua_S,"normal",tolua_Stormfighter_SF_ManualObject_normal00);
    tolua_function(tolua_S,"tangent",tolua_Stormfighter_SF_ManualObject_tangent00);
    tolua_function(tolua_S,"textureCoord",tolua_Stormfighter_SF_ManualObject_textureCoord00);
    tolua_function(tolua_S,"index",tolua_Stormfighter_SF_ManualObject_index00);
    tolua_function(tolua_S,"triangle",tolua_Stormfighter_SF_ManualObject_triangle00);
    tolua_function(tolua_S,"quad",tolua_Stormfighter_SF_ManualObject_quad00);
    tolua_function(tolua_S,"clear",tolua_Stormfighter_SF_ManualObject_clear00);
    tolua_constant(tolua_S,"OT_POINT_LIST",SF::ManualObject::OT_POINT_LIST);
    tolua_constant(tolua_S,"OT_LINE_LIST",SF::ManualObject::OT_LINE_LIST);
    tolua_constant(tolua_S,"OT_LINE_STRIP",SF::ManualObject::OT_LINE_STRIP);
    tolua_constant(tolua_S,"OT_TRIANGLE_LIST",SF::ManualObject::OT_TRIANGLE_LIST);
    tolua_constant(tolua_S,"OT_TRIANGLE_STRIP",SF::ManualObject::OT_TRIANGLE_STRIP);
    tolua_constant(tolua_S,"OT_TRIANGLE_FAN",SF::ManualObject::OT_TRIANGLE_FAN);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Collider","SF::Collider","SF::Component",NULL);
   tolua_beginmodule(tolua_S,"Collider");
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Collider_clone00);
    tolua_function(tolua_S,"collisionShape",tolua_Stormfighter_SF_Collider_collisionShape00);
    tolua_function(tolua_S,"shapeTransform",tolua_Stormfighter_SF_Collider_shapeTransform00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"BoxCollider","SF::BoxCollider","SF::Collider",tolua_collect_SF__BoxCollider);
   #else
   tolua_cclass(tolua_S,"BoxCollider","SF::BoxCollider","SF::Collider",NULL);
   #endif
   tolua_beginmodule(tolua_S,"BoxCollider");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_BoxCollider_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_BoxCollider_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_BoxCollider_new00_local);
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_BoxCollider_new01);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_BoxCollider_new01_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_BoxCollider_new01_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_BoxCollider_delete00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_BoxCollider_clone00);
    tolua_function(tolua_S,"onInit",tolua_Stormfighter_SF_BoxCollider_onInit00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"RigidBody","SF::RigidBody","SF::Component",tolua_collect_SF__RigidBody);
   #else
   tolua_cclass(tolua_S,"RigidBody","SF::RigidBody","SF::Component",NULL);
   #endif
   tolua_beginmodule(tolua_S,"RigidBody");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_RigidBody_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_RigidBody_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_RigidBody_new00_local);
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_RigidBody_delete00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_RigidBody_clone00);
    tolua_function(tolua_S,"onInit",tolua_Stormfighter_SF_RigidBody_onInit00);
    tolua_function(tolua_S,"setKinematic",tolua_Stormfighter_SF_RigidBody_setKinematic00);
    tolua_function(tolua_S,"setCollisionResponse",tolua_Stormfighter_SF_RigidBody_setCollisionResponse00);
    tolua_function(tolua_S,"setCallbacks",tolua_Stormfighter_SF_RigidBody_setCallbacks00);
    tolua_function(tolua_S,"kinematic",tolua_Stormfighter_SF_RigidBody_kinematic00);
    tolua_function(tolua_S,"static_",tolua_Stormfighter_SF_RigidBody_static_00);
    tolua_function(tolua_S,"trigger",tolua_Stormfighter_SF_RigidBody_trigger00);
    tolua_function(tolua_S,"mass",tolua_Stormfighter_SF_RigidBody_mass00);
    tolua_function(tolua_S,"setCollisionGroup",tolua_Stormfighter_SF_RigidBody_setCollisionGroup00);
    tolua_function(tolua_S,"setCollidesWith",tolua_Stormfighter_SF_RigidBody_setCollidesWith00);
    tolua_function(tolua_S,"addPoint2PointConstraint",tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint00);
    tolua_function(tolua_S,"addPoint2PointConstraint",tolua_Stormfighter_SF_RigidBody_addPoint2PointConstraint01);
    tolua_function(tolua_S,"setDamping",tolua_Stormfighter_SF_RigidBody_setDamping00);
    tolua_function(tolua_S,"applyCentralImpulse",tolua_Stormfighter_SF_RigidBody_applyCentralImpulse00);
    tolua_function(tolua_S,"setLinearVelocity",tolua_Stormfighter_SF_RigidBody_setLinearVelocity00);
    tolua_function(tolua_S,"linearVelocity",tolua_Stormfighter_SF_RigidBody_linearVelocity00);
    tolua_function(tolua_S,"setAngularVelocity",tolua_Stormfighter_SF_RigidBody_setAngularVelocity00);
    tolua_function(tolua_S,"angularVelocity",tolua_Stormfighter_SF_RigidBody_angularVelocity00);
    tolua_function(tolua_S,"disableDebugDraw",tolua_Stormfighter_SF_RigidBody_disableDebugDraw00);
    tolua_function(tolua_S,"add",tolua_Stormfighter_SF_RigidBody_add00);
    tolua_function(tolua_S,"remove",tolua_Stormfighter_SF_RigidBody_remove00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Script","SF::Script","SF::Component",NULL);
   tolua_beginmodule(tolua_S,"Script");
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_Script_clone00);
    tolua_variable(tolua_S,"type",tolua_get_SF__Script_type,NULL);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"LuaScript","SF::LuaScript","SF::Script",tolua_collect_SF__LuaScript);
   #else
   tolua_cclass(tolua_S,"LuaScript","SF::LuaScript","SF::Script",NULL);
   #endif
   tolua_beginmodule(tolua_S,"LuaScript");
    tolua_function(tolua_S,"new",tolua_Stormfighter_SF_LuaScript_new00);
    tolua_function(tolua_S,"new_local",tolua_Stormfighter_SF_LuaScript_new00_local);
    tolua_function(tolua_S,".call",tolua_Stormfighter_SF_LuaScript_new00_local);
    tolua_function(tolua_S,"setTrackingId",tolua_Stormfighter_SF_LuaScript_setTrackingId00);
    tolua_function(tolua_S,"onInit",tolua_Stormfighter_SF_LuaScript_onInit00);
    tolua_function(tolua_S,"onUpdate",tolua_Stormfighter_SF_LuaScript_onUpdate00);
    tolua_function(tolua_S,"onPhysicsUpdate",tolua_Stormfighter_SF_LuaScript_onPhysicsUpdate00);
    tolua_function(tolua_S,"onCollisionEnter",tolua_Stormfighter_SF_LuaScript_onCollisionEnter00);
    tolua_function(tolua_S,"onCollisionExit",tolua_Stormfighter_SF_LuaScript_onCollisionExit00);
    tolua_function(tolua_S,"onCollisionStay",tolua_Stormfighter_SF_LuaScript_onCollisionStay00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"GameObject","SF::GameObject","",tolua_collect_SF__GameObject);
   #else
   tolua_cclass(tolua_S,"GameObject","SF::GameObject","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"GameObject");
    tolua_function(tolua_S,"delete",tolua_Stormfighter_SF_GameObject_delete00);
    tolua_function(tolua_S,"name",tolua_Stormfighter_SF_GameObject_name00);
    tolua_function(tolua_S,"debug",tolua_Stormfighter_SF_GameObject_debug00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_GameObject_clone00);
    tolua_function(tolua_S,"clone",tolua_Stormfighter_SF_GameObject_clone01);
    tolua_function(tolua_S,"addComponent",tolua_Stormfighter_SF_GameObject_addComponent00);
    tolua_function(tolua_S,"allComponents",tolua_Stormfighter_SF_GameObject_allComponents00);
    tolua_function(tolua_S,"component",tolua_Stormfighter_SF_GameObject_component00);
    tolua_function(tolua_S,"hasComponent",tolua_Stormfighter_SF_GameObject_hasComponent00);
    tolua_function(tolua_S,"transform",tolua_Stormfighter_SF_GameObject_transform00);
    tolua_function(tolua_S,"firstComponentInChildren",tolua_Stormfighter_SF_GameObject_firstComponentInChildren00);
    tolua_function(tolua_S,"allComponentInChildren",tolua_Stormfighter_SF_GameObject_allComponentInChildren00);
    tolua_function(tolua_S,"addSibling",tolua_Stormfighter_SF_GameObject_addSibling00);
    tolua_function(tolua_S,"addChild",tolua_Stormfighter_SF_GameObject_addChild00);
    tolua_function(tolua_S,"setParent",tolua_Stormfighter_SF_GameObject_setParent00);
    tolua_function(tolua_S,"reParent",tolua_Stormfighter_SF_GameObject_reParent00);
    tolua_function(tolua_S,"parent",tolua_Stormfighter_SF_GameObject_parent00);
    tolua_function(tolua_S,"children",tolua_Stormfighter_SF_GameObject_children00);
    tolua_function(tolua_S,"find",tolua_Stormfighter_SF_GameObject_find00);
    tolua_function(tolua_S,"find",tolua_Stormfighter_SF_GameObject_find01);
    tolua_function(tolua_S,"clearChildren",tolua_Stormfighter_SF_GameObject_clearChildren00);
    tolua_function(tolua_S,"getBoundingBox",tolua_Stormfighter_SF_GameObject_getBoundingBox00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"SingleRayCastResult","SF::SingleRayCastResult","",tolua_collect_SF__SingleRayCastResult);
   #else
   tolua_cclass(tolua_S,"SingleRayCastResult","SF::SingleRayCastResult","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"SingleRayCastResult");
    tolua_variable(tolua_S,"hitObject",tolua_get_SF__SingleRayCastResult_hitObject_ptr,tolua_set_SF__SingleRayCastResult_hitObject_ptr);
    tolua_variable(tolua_S,"hitPoint",tolua_get_SF__SingleRayCastResult_hitPoint,tolua_set_SF__SingleRayCastResult_hitPoint);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Logger","SF::Logger","",NULL);
   tolua_beginmodule(tolua_S,"Logger");
    tolua_function(tolua_S,"logMessage",tolua_Stormfighter_SF_Logger_logMessage00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Graphics","SF::Graphics","",NULL);
   tolua_beginmodule(tolua_S,"Graphics");
    tolua_function(tolua_S,"setTerrainLight",tolua_Stormfighter_SF_Graphics_setTerrainLight00);
    tolua_function(tolua_S,"renderGameObjectIntoFile",tolua_Stormfighter_SF_Graphics_renderGameObjectIntoFile00);
    tolua_function(tolua_S,"getLoadedMaterialNames",tolua_Stormfighter_SF_Graphics_getLoadedMaterialNames00);
    tolua_function(tolua_S,"setActiveCamera",tolua_Stormfighter_SF_Graphics_setActiveCamera00);
    tolua_function(tolua_S,"activeCamera",tolua_Stormfighter_SF_Graphics_activeCamera00);
    tolua_function(tolua_S,"getDefaultAspectRatio",tolua_Stormfighter_SF_Graphics_getDefaultAspectRatio00);
    tolua_function(tolua_S,"defaultViewport",tolua_Stormfighter_SF_Graphics_defaultViewport00);
    tolua_function(tolua_S,"defaultRenderWindow",tolua_Stormfighter_SF_Graphics_defaultRenderWindow00);
    tolua_function(tolua_S,"sceneManager",tolua_Stormfighter_SF_Graphics_sceneManager00);
    tolua_function(tolua_S,"activeCameraToViewportRay",tolua_Stormfighter_SF_Graphics_activeCameraToViewportRay00);
    tolua_function(tolua_S,"closestExactRayQuery",tolua_Stormfighter_SF_Graphics_closestExactRayQuery00);
    tolua_function(tolua_S,"debugDrawer",tolua_Stormfighter_SF_Graphics_debugDrawer00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"DebugDrawer","SF::DebugDrawer","",NULL);
   tolua_beginmodule(tolua_S,"DebugDrawer");
    tolua_function(tolua_S,"setIcoSphereRecursionLevel",tolua_Stormfighter_SF_DebugDrawer_setIcoSphereRecursionLevel00);
    tolua_function(tolua_S,"drawLine",tolua_Stormfighter_SF_DebugDrawer_drawLine00);
    tolua_function(tolua_S,"drawCircle",tolua_Stormfighter_SF_DebugDrawer_drawCircle00);
    tolua_function(tolua_S,"drawCylinder",tolua_Stormfighter_SF_DebugDrawer_drawCylinder00);
    tolua_function(tolua_S,"drawQuad",tolua_Stormfighter_SF_DebugDrawer_drawQuad00);
    tolua_function(tolua_S,"drawCuboid",tolua_Stormfighter_SF_DebugDrawer_drawCuboid00);
    tolua_function(tolua_S,"drawSphere",tolua_Stormfighter_SF_DebugDrawer_drawSphere00);
    tolua_function(tolua_S,"drawTetrahedron",tolua_Stormfighter_SF_DebugDrawer_drawTetrahedron00);
    tolua_function(tolua_S,"getEnabled",tolua_Stormfighter_SF_DebugDrawer_getEnabled00);
    tolua_function(tolua_S,"setEnabled",tolua_Stormfighter_SF_DebugDrawer_setEnabled00);
    tolua_function(tolua_S,"switchEnabled",tolua_Stormfighter_SF_DebugDrawer_switchEnabled00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"CollisionData","SF::CollisionData","",NULL);
   tolua_beginmodule(tolua_S,"CollisionData");
    tolua_variable(tolua_S,"pointOnA",tolua_get_SF__CollisionData_pointOnA,tolua_set_SF__CollisionData_pointOnA);
    tolua_variable(tolua_S,"pointOnB",tolua_get_SF__CollisionData_pointOnB,tolua_set_SF__CollisionData_pointOnB);
    tolua_variable(tolua_S,"normalOnB",tolua_get_SF__CollisionData_normalOnB,tolua_set_SF__CollisionData_normalOnB);
    tolua_variable(tolua_S,"stale",tolua_get_SF__CollisionData_stale,tolua_set_SF__CollisionData_stale);
    tolua_variable(tolua_S,"fresh",tolua_get_SF__CollisionData_fresh,tolua_set_SF__CollisionData_fresh);
    tolua_variable(tolua_S,"other",tolua_get_SF__CollisionData_other_ptr,tolua_set_SF__CollisionData_other_ptr);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Physics","SF::Physics","",NULL);
   tolua_beginmodule(tolua_S,"Physics");
    tolua_function(tolua_S,"tick",tolua_Stormfighter_SF_Physics_tick00);
    tolua_function(tolua_S,"addRigidBody",tolua_Stormfighter_SF_Physics_addRigidBody00);
    tolua_function(tolua_S,"addRigidBody",tolua_Stormfighter_SF_Physics_addRigidBody01);
    tolua_function(tolua_S,"removeRigidBody",tolua_Stormfighter_SF_Physics_removeRigidBody00);
    tolua_function(tolua_S,"addCollisionGroup",tolua_Stormfighter_SF_Physics_addCollisionGroup00);
    tolua_function(tolua_S,"closestRayCast",tolua_Stormfighter_SF_Physics_closestRayCast00);
    tolua_function(tolua_S,"setDebugDraw",tolua_Stormfighter_SF_Physics_setDebugDraw00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Input","SF::Input","",NULL);
   tolua_beginmodule(tolua_S,"Input");
    tolua_constant(tolua_S,"X",SF::Input::X);
    tolua_constant(tolua_S,"Y",SF::Input::Y);
    tolua_constant(tolua_S,"Z",SF::Input::Z);
    tolua_function(tolua_S,"capture",tolua_Stormfighter_SF_Input_capture00);
    tolua_function(tolua_S,"isKeyDown",tolua_Stormfighter_SF_Input_isKeyDown00);
    tolua_function(tolua_S,"isModifierDown",tolua_Stormfighter_SF_Input_isModifierDown00);
    tolua_function(tolua_S,"isButtonDown",tolua_Stormfighter_SF_Input_isButtonDown00);
    tolua_function(tolua_S,"axisRelative",tolua_Stormfighter_SF_Input_axisRelative00);
    tolua_function(tolua_S,"axisAbsolute",tolua_Stormfighter_SF_Input_axisAbsolute00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"GUI","SF::GUI","",NULL);
   tolua_beginmodule(tolua_S,"GUI");
    tolua_function(tolua_S,"update",tolua_Stormfighter_SF_GUI_update00);
    tolua_function(tolua_S,"executeJS",tolua_Stormfighter_SF_GUI_executeJS00);
    tolua_function(tolua_S,"reload",tolua_Stormfighter_SF_GUI_reload00);
    tolua_function(tolua_S,"pollCommands",tolua_Stormfighter_SF_GUI_pollCommands00);
    tolua_function(tolua_S,"isInGUI",tolua_Stormfighter_SF_GUI_isInGUI00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"Hierarchy","SF::Hierarchy","",NULL);
   tolua_beginmodule(tolua_S,"Hierarchy");
    tolua_function(tolua_S,"update",tolua_Stormfighter_SF_Hierarchy_update00);
    tolua_function(tolua_S,"find",tolua_Stormfighter_SF_Hierarchy_find00);
    tolua_function(tolua_S,"createGameObject",tolua_Stormfighter_SF_Hierarchy_createGameObject00);
    tolua_function(tolua_S,"createGameObject",tolua_Stormfighter_SF_Hierarchy_createGameObject01);
    tolua_function(tolua_S,"destroyGameObject",tolua_Stormfighter_SF_Hierarchy_destroyGameObject00);
    tolua_function(tolua_S,"destroyGameObject",tolua_Stormfighter_SF_Hierarchy_destroyGameObject01);
    tolua_function(tolua_S,"getRoot",tolua_Stormfighter_SF_Hierarchy_getRoot00);
    tolua_function(tolua_S,"debug",tolua_Stormfighter_SF_Hierarchy_debug00);
   tolua_endmodule(tolua_S);
   tolua_cclass(tolua_S,"StormfighterApp","SF::StormfighterApp","",NULL);
   tolua_beginmodule(tolua_S,"StormfighterApp");
    tolua_function(tolua_S,"log",tolua_Stormfighter_SF_StormfighterApp_log00);
    tolua_function(tolua_S,"graphics",tolua_Stormfighter_SF_StormfighterApp_graphics00);
    tolua_function(tolua_S,"physics",tolua_Stormfighter_SF_StormfighterApp_physics00);
    tolua_function(tolua_S,"input",tolua_Stormfighter_SF_StormfighterApp_input00);
    tolua_function(tolua_S,"hierarchy",tolua_Stormfighter_SF_StormfighterApp_hierarchy00);
    tolua_function(tolua_S,"deltaTime",tolua_Stormfighter_SF_StormfighterApp_deltaTime00);
    tolua_function(tolua_S,"setPhysicsDeltaTime",tolua_Stormfighter_SF_StormfighterApp_setPhysicsDeltaTime00);
    tolua_function(tolua_S,"physicsDeltaTime",tolua_Stormfighter_SF_StormfighterApp_physicsDeltaTime00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Stormfighter (lua_State* tolua_S) {
 return tolua_Stormfighter_open(tolua_S);
};
#endif

