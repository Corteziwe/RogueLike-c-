//
// Created by alex-linux on 22.03.19.
//

#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H
#include <string>
#include <vector>
#include "game/GameObject.h"
#include "game/Systems/LevelSystem.h"
#include "game/Systems/MovementSystem.h"

using namespace std;

enum info {SCORE, STEPS, MAP_H, GAME};

class Engine {
public:
    Engine();
    ~Engine();

    void restore();
    int get_info(info get);
    void update();
    void render();
private:
    LevelSystem* level_system;
    MovementSystem* player_movement_system;
    vector <System*> systems;
    int money_count;
    int cur_level;
};


#endif //GAME_ENGINE_H
