//
// Created by alex-linux on 26.03.19.
//

#include <BearLibTerminal.h>
#include "game/Systems/MovementSystem.h"

void MovementSystem::update() {
    int key = terminal_peek();

    switch(key) {
        case TK_UP:
            if (collision_system->canWalk(actor->get_pos()->getX(), actor->get_pos()->getY()-1, actor->get_pos()->getLayer()))
                if (level->getSteps() != 0) {
                    actor->get_pos()->move(UP);
                    level->changeSteps(1);
                }
            break;
        case TK_DOWN:
            if (collision_system->canWalk(actor->get_pos()->getX(), actor->get_pos()->getY()+1, actor->get_pos()->getLayer()))
                if (level->getSteps() != 0) {
                    actor->get_pos()->move(DOWN);
                    level->changeSteps(1);
                }
            break;
        case TK_LEFT:
            if (collision_system->canWalk(actor->get_pos()->getX()-1, actor->get_pos()->getY(), actor->get_pos()->getLayer()))
                if (level->getSteps() != 0) {
                    actor->get_pos()->move(LEFT);
                    level->changeSteps(1);
                }
            break;
        case TK_RIGHT:
            if (collision_system->canWalk(actor->get_pos()->getX()+1, actor->get_pos()->getY(), actor->get_pos()->getLayer()))
                if (level->getSteps() != 0) {
                    actor->get_pos()->move(RIGHT);
                    level->changeSteps(1);
                }
            break;
        default: break;
    }
}


