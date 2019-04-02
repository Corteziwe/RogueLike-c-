//
// Created by alex-linux on 22.03.19.
//

#ifndef GAME_LEVELSYSTEM_H
#define GAME_LEVELSYSTEM_H

#include <vector>
#include "game/Level.h"
#include "System.h"

class LevelSystem: public System {
public:
    LevelSystem();
    ~LevelSystem() override;

    bool levels_is_over();
    Level* getCurrentLevel();

    void update() override;
    void render();
private:
    int cur_level;
    GameObject* player;
    vector <Level*> levels;
    Level* current_lvl;
    int level_count;
};


#endif //GAME_LEVELSYSTEM_H
