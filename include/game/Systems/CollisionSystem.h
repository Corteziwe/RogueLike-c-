//
// Created by alex-linux on 26.03.19.
//

#ifndef GAME_COLLISIONSYSTEM_H
#define GAME_COLLISIONSYSTEM_H

#include "System.h"
#include "game/Position.h"
#include "game/Level.h"

class CollisionSystem: public System {
 public:
    explicit CollisionSystem(Level* level);
    ~CollisionSystem() override = default;

    bool canWalk(int x, int y, int layer);
    void getCoin(Position pos);
    void update() override;
 private:
    Level* cur_level;
};


#endif //GAME_COLLISIONSYSTEM_H
