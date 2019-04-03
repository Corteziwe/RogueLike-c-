//
// Created by alex-linux on 26.03.19.
//

#include <BearLibTerminal.h>
#include "game/Systems/MovementSystem.h"

void MovementSystem::update() {
    if (!editor) {
        int key = terminal_peek();

        switch (key) {
            case TK_UP:
                if (collision_system->canWalk(actor->get_pos()->getX(), actor->get_pos()->getY() - 1,
                                              actor->get_pos()->getLayer()))
                    if (level->getSteps() != 0) {
                        actor->get_pos()->move(UP);
                        level->changeSteps(1);
                    }
                break;
            case TK_DOWN:
                if (collision_system->canWalk(actor->get_pos()->getX(), actor->get_pos()->getY() + 1,
                                              actor->get_pos()->getLayer()))
                    if (level->getSteps() != 0) {
                        actor->get_pos()->move(DOWN);
                        level->changeSteps(1);
                    }
                break;
            case TK_LEFT:
                if (collision_system->canWalk(actor->get_pos()->getX() - 1, actor->get_pos()->getY(),
                                              actor->get_pos()->getLayer()))
                    if (level->getSteps() != 0) {
                        actor->get_pos()->move(LEFT);
                        level->changeSteps(1);
                    }
                break;
            case TK_RIGHT:
                if (collision_system->canWalk(actor->get_pos()->getX() + 1, actor->get_pos()->getY(),
                                              actor->get_pos()->getLayer()))
                    if (level->getSteps() != 0) {
                        actor->get_pos()->move(RIGHT);
                        level->changeSteps(1);
                    }
                break;
            default:
                break;
        }
    } else {
        int key = terminal_peek();

        switch (key) {
            case TK_UP:
                if (actor->get_pos()->getY() > 1)
                    actor->get_pos()->move(UP);
                break;
            case TK_DOWN:
                if (actor->get_pos()->getY() < level->getMapHeight()-1)
                    actor->get_pos()->move(DOWN);
                break;
            case TK_RIGHT:
                if (actor->get_pos()->getX() < level->getMapWidth()-1)
                    actor->get_pos()->move(RIGHT);
                break;
            case TK_LEFT:
                if (actor->get_pos()->getX() > 1)
                    actor->get_pos()->move(LEFT);
                break;
            case TK_W:
                level->createMapObject(new GameObject(actor->get_pos()->getX(), actor->get_pos()->getY(), 2, "wall"));
                break;
            case TK_C:
                level->createMapObject(new GameObject(actor->get_pos()->getX(), actor->get_pos()->getY(), 2, "coin"));
                break;
            case TK_R:
                level->removeMapObject(actor->get_pos());
                break;
            default: break;
        }
    }
}


