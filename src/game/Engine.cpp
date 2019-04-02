//
// Created by alex-linux on 22.03.19.
//

#include <game/Systems/MovementSystem.h>
#include <BearLibTerminal.h>
#include "game/Engine.h"

Engine::Engine() {
    level_system = new LevelSystem();
    cur_level = level_system->getCurrentLevel()->getLevelNumber();
    player_movement_system = new MovementSystem(level_system->getCurrentLevel()->getPlayer(), level_system->getCurrentLevel(), false);
    systems.push_back(level_system);
    systems.push_back(player_movement_system);
}

Engine::~Engine() {
    for (auto system : systems) {
        delete system;
    }
}

void Engine::restore() {
    level_system->getCurrentLevel()->restore_level();
}

void Engine::update() {
    for (auto system : systems) {
        system->update();
    }
    if (cur_level != level_system->getCurrentLevel()->getLevelNumber()) {
        delete player_movement_system;
        player_movement_system = new MovementSystem(level_system->getCurrentLevel()->getPlayer(), level_system->getCurrentLevel(), false);
        cur_level++;
    }
}


int Engine::get_info(info get) {
    switch(get) {
        case SCORE:
            return level_system->getCurrentLevel()->getMoney();
        case STEPS:
            return level_system->getCurrentLevel()->getSteps();
        case MAP_H:
            return level_system->getCurrentLevel()->getMapHeight();
        case GAME:
            return level_system->levels_is_over();
        default: break;
    }
    return 0;
}

void Engine::render() {
    level_system->getCurrentLevel()->render();
}