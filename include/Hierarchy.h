#ifndef STORMFIGHTER_HIERARCHY_H_
#define STORMFIGHTER_HIERARCHY_H_

#include "common.h"
#include "GameObject.h"

namespace SF {

/**
* @brief Class responsible for maintaining GameObject hierarchy(including root GO)[has exclusive ownership of GO objects], handing out central events (init, update)
*
*/

class Hierarchy {
 public:
  Hierarchy(StormfighterApp* app);
  ~Hierarchy();

  /// Searches for GO with given name in hierarchy (BFS)
  GameObject* find(SString name);

  GameObject* createGameObject();
  GameObject* createGameObject(SString name);
  /// internal for cloning
  GameObject* _cloneGameObject(SString name);

  /// Returns the root GO
  GameObject* getRoot();

  /// adds a child to the root GO
  void addChildToRoot(GameObject* go);

  void destroyGameObject(SString name);
  void destroyGameObject(GameObject* gameObject);

  GameObject* loadGameObjectFromFile(SString filename);

  void initialise();
  void update();
  void physicsUpdate();

  /// Returns the whole hierarchy (DFS)
  SString debug();

  /// Returns a JSON representation of the structure
  SString serialise();

 private:
  enum ModuleState { DOWN, UP};
  GameObject* root_;

  GameObjectList fresh_;
  ModuleState state_;

  StormfighterApp* application_;
};

}; // namespace SF

#endif // STORMFIGHTER_HIERARCHY_H_
