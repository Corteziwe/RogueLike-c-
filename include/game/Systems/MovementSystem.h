//
// Created by alex-linux on 26.03.19.
//

#ifndef GAME_MOVEMENTSYSTEM_H
#define GAME_MOVEMENTSYSTEM_H


#include "game/GameObject.h"
#include "System.h"
#include "game/Level.h"
#include "CollisionSystem.h"


class MovementSystem: public System {
    GameObject *const actor;
    Level* level;
    CollisionSystem* collision_system;
 public:
    MovementSystem(GameObject *const actor, Level* level) : actor(actor), level(level) {
        collision_system = new CollisionSystem(level);
    }
    void update() override;
    ~MovementSystem() override = default;
};


#endif //GAME_MOVEMENTSYSTEM_H
