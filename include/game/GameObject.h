//
// Created by alex-linux on 20.03.19.
//

#ifndef GAME_GAMEOBJECT_H
#define GAME_GAMEOBJECT_H


#include "game/Position.h"
#include "game/Tile.h"
#include <string>

using namespace std;

class GameObject {
 public:
    GameObject(int x, int y, int layer, string type_val);
    ~GameObject();

    void set_pos(int x, int y, int layer);
    Position* get_pos();
    string get_type();
    void change_type(string type_val);
    void change_object(const char* text, const char* color, int symbol, string type_val);
    void render();

 private:
    Position* pos;
    Tile* tile;
    string type;
};


#endif //GAME_GAMEOBJECT_H
