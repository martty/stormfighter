#ifndef STORMFIGHTER_HIERARCHY_H_
#define STORMFIGHTER_HIERARCHY_H_

#include "common.h"
#include "GameObject.h"

/**
* @brief Class responsible for maintaining GameObject hierarchy(including root GO)[has exclusive ownership of GO objects], handing out central events (init, update)
*
*/

class Hierarchy {
 public:
  Hierarchy();
  ~Hierarchy();

  /// Searches for GO with given name in hierarchy (BFS)
  GameObject* find(SString name);

  GameObject* createGameObject();
  GameObject* createGameObject(SString name);

  void destroyGameObject(SString name);
  void destroyGameObject(GameObject* gameObject);

  void initialize(StormfighterApp* app);
  void update();

  /// Returns the whole hierarchy (DFS)
  SString debug();

 private:
  GameObject* root_;
};

#endif // STORMFIGHTER_HIERARCHY_H_
