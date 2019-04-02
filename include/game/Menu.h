//
// Created by alex-linux on 20.03.19.
//

#ifndef GAME_MENU_H
#define GAME_MENU_H

#include <string>
#include <vector>
#include "game/GameObject.h"
#include "game/Engine.h"

#endif //GAME_MENU_H

using namespace std;

class Menu {
public:
    Menu();
    ~Menu();

    void update();
    void render();

    bool isGameClose();
private:
    bool close_the_game;
    bool gameIsRun;
    Engine engine;
    GameObject* cursor;
    vector <GameObject*> menu_objects;
    wchar_t player_name[32] = L"Autostagaut";
};