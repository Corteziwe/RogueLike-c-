//
// Created by alex-linux on 02.04.19.
//

#ifndef GAME_EDITOR_H
#define GAME_EDITOR_H

#include <vector>
#include <game/Systems/MovementSystem.h>
#include "game/Systems/System.h"

using namespace std;

class Editor {
 public:
    Editor(int height, int width);
    ~Editor();

    void update();
    void render();
    int getLevelHeight();
    int getLevelWidth();

 private:
    MovementSystem* editor_movement_system;
    Level* level;
    int last_level_num;
    bool save_level;
    bool level_saved;
    int map_height;
    int map_width;
};


#endif //GAME_EDITOR_H
