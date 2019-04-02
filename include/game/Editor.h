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

 private:
    MovementSystem* editor_movement_system;
    Level* level;
    int map_height;
    int map_width;
};


#endif //GAME_EDITOR_H
