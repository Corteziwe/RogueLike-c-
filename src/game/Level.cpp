//
// Created by alex-linux on 22.03.19.
//

#include "game/Level.h"

Level::Level(int height, int width, int x, int y, int num) {
    mapHeight = height;
    mapWidth = width;
    level_number = num;
    money_count = 0;
    steps = 10;
    player = new GameObject(x, y, 2, "actor");
    player_pos = new Position(x, y, 2);
    for(int j = 0; j <= mapHeight; j++) {
        for (int i = 0; i <= mapWidth; i++) {
            auto *obj = new GameObject(i, j, 1, "grass");
            createMapObject(obj);
        }
    }
    for (int _x = 0; _x <= mapWidth; _x++) {
        auto *wall_1 = new GameObject(_x, 0, 2, "wall");
        auto *wall_2 = new GameObject(_x, mapHeight, 2, "wall");
        createMapObject(wall_1);
        createMapObject(wall_2);
    }
    for (int _y = 1; _y <= mapHeight - 1; _y++) {
        auto *wall_1 = new GameObject(0, _y, 2, "wall");
        auto *wall_2 = new GameObject(mapWidth, _y, 2, "wall");
        createMapObject(wall_1);
        createMapObject(wall_2);
    }
}

Level::~Level() {
    for (auto obj : coins) {
        delete obj;
    }
    for (auto obj : map_objects) {
        delete obj;
    }
    delete player;
}

int Level::getSteps() {
    return steps;
}

void Level::changeSteps(int h) {
    steps -= h;
}

GameObject* Level::getPlayer() {
    return player;
}

int Level::getMapHeight() {
    return mapHeight;
}

int Level::getMapWidth() {
    return mapWidth;
}

vector <GameObject*> Level::getWalls() {
    vector <GameObject*> walls;
    for (auto obj : map_objects) {
        if (obj->get_type() == "wall") {
            walls.push_back(obj);
        }
    }
    return walls;
}

void Level::restore_level() {
    for (auto coin : coins) {
        if (coin->get_type() != "coin") {
            coin->change_type("coin");
            coin->set_pos(coin->get_pos()->getX(), coin->get_pos()->getY(), 2);
        }
    }
    steps = 10;
    money_count = 0;
    player->set_pos(player_pos->getX(), player_pos->getY(), player_pos->getLayer());
}

void Level::addMoney() {
    money_count += 100;
}

int Level::getMoney() {
    return money_count;
}

int Level::getCoinsNumber() {
    int i = 0;
    for (auto coin : coins) {
        if(coin->get_type() == "coin") {
            i++;
        }
    }
    return i;
}

vector <GameObject*> Level::getCoins() {
    return coins;
}

void Level::render() {
    for (auto obj : map_objects) {
        obj->render();
    }
    player->render();
    for (auto coin : coins) {
        if (coin->get_type() != "coin_g") {
            coin->render();
        }
    }
}


void Level::createMapObject(GameObject *obj) {
    if (obj->get_type() == "coin") {
        coins.push_back(obj);
    } else {
        map_objects.push_back(obj);
    }
}

void Level::removeMapObject(Position* pos) {
    int i = 0;
    for (auto object : coins) {
        if (pos->compare(object->get_pos())) {
            coins.erase(coins.begin() + i);
            delete object;
        }
        i++;
    }
    i = 0;
    for (auto object : map_objects) {
        if (pos->compare(object->get_pos())) {
            map_objects.erase(map_objects.begin() + i);
            delete object;
        }
        i++;
    }
}

