//
// Created by alex-linux on 26.03.19.
//

#include "game/Systems/CollisionSystem.h"

CollisionSystem::CollisionSystem(Level *level) {
    cur_level = level;
}

void CollisionSystem::update() {
}

bool CollisionSystem::canWalk(int x, int y, int layer) {
    auto pos = new Position(x, y, layer);
    for (auto wall : cur_level->getWalls()) {
        if(pos->compare(wall->get_pos())) {
            return false;
        }
    }
    for (auto coin : cur_level->getCoins()) {
        if (pos->compare(coin->get_pos())) {
            coin->change_type("coin_g");
            coin->set_pos(coin->get_pos()->getX(), coin->get_pos()->getY(), 0);
            cur_level->changeSteps(-10);
            cur_level->addMoney();
        }
    }
    return true;
}