//
// Created by alex-linux on 22.03.19.
//

#include "game/Systems/LevelSystem.h"
#include <iostream>
#include <fstream>
#include <string>
#include "game/Level.h"

using namespace std;

LevelSystem::LevelSystem() {
    cur_level = 1;
    level_count = 0;
    while (true) {
        string level_name = "res/levels/level_" + to_string(cur_level) + ".lvl";
        ifstream file(level_name);
        if (file.is_open()) {
            string tmp;
            int x, y, mapHeight, mapWidth;
            file >> tmp;
            mapWidth = stoi(tmp);
            file >> tmp;
            mapHeight = stoi(tmp);
            file >> tmp;
            x = stoi(tmp);
            file >> tmp;
            y = stoi(tmp);
            auto *level = new Level(mapHeight, mapWidth, x, y, cur_level);

            while (!file.eof()) {
                file >> tmp;
                if (tmp == "Wall") {
                    file >> tmp;
                    x = stoi(tmp);
                    file >> tmp;
                    y = stoi(tmp);
                    auto *obj = new GameObject(x, y, 2, "wall");
                    level->createMapObject(obj);
                }
                if (tmp == "Coin") {
                    file >> tmp;
                    x = stoi(tmp);
                    file >> tmp;
                    y = stoi(tmp);
                    auto *obj = new GameObject(x, y, 2, "coin");
                    level->createMapObject(obj);
                }
            }
            levels.push_back(level);
            player = level->getPlayer();
            cur_level++;
        } else {
            break;
        }
    }
    for (auto level : levels) {
        if(cur_level == level->getLevelNumber()) {
            current_lvl = level;
        }
        level_count++;
    }
    cur_level = 1;
}


Level* LevelSystem::getCurrentLevel() {
    for (auto level : levels) {
        if (cur_level == level->getLevelNumber()) {
            current_lvl = level;
        }
    }
    return current_lvl;
}

LevelSystem::~LevelSystem() {
    for (auto level : levels) {
        delete level;
    }
}

bool LevelSystem::levels_is_over() {
    return cur_level != current_lvl->getLevelNumber();
}

void LevelSystem::update() {
    if (current_lvl->getCoinsNumber() == 0) {
        cur_level++;
        for(auto level : levels) {
            if (level->getLevelNumber() == cur_level) {
                current_lvl = level;
            }
        }
    }
}

void LevelSystem::render() {
    current_lvl->render();
}