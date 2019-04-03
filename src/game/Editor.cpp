//
// Created by alex-linux on 02.04.19.
//

#include "game/Editor.h"
#include <fstream>
#include <iostream>
#include <BearLibTerminal.h>

using namespace std;

Editor::Editor(int height, int width) : map_height(height), map_width(width) {
    level = new Level(map_height, map_width, 1, 1, 1);
    editor_movement_system = new MovementSystem(level->getPlayer(), level, true);
    last_level_num = 1;
    save_level = false;
    level_saved = false;
    while (true) {
        string level_name = "res/levels/level_" + to_string(last_level_num) + ".lvl";
        ifstream file(level_name);
        if (!file.is_open()) {
            break;
        } else {
            last_level_num++;
        }
        file.close();
    }
}

Editor::~Editor() {
    delete level;
    delete editor_movement_system;
}

void Editor::update() {
    int key = terminal_peek();
    if (!save_level) {
        editor_movement_system->update();
        if (key == TK_S) {
            save_level = true;
        }
    } else if (!level_saved) {
        string level_name = "res/levels/level_" + to_string(last_level_num) + ".lvl";
        ofstream level_file(level_name);
        level_file << level->getMapWidth() << " " << level->getMapHeight() << " " << level->getPlayer()->get_pos()->getX() << " " << level->getPlayer()->get_pos()->getY() << endl;
        vector <GameObject*> walls = level->getWalls();
        for (auto wall : walls) {
            if(wall->get_pos()->getX() != 0 && wall->get_pos()->getX() != level->getMapWidth()) {
                if(wall->get_pos()->getY() != 0 && wall->get_pos()->getY() != level->getMapHeight()) {
                    level_file << "Wall " << wall->get_pos()->getX() << " " << wall->get_pos()->getY() << endl;
                }
            }
        }
        vector <GameObject*> coins = level->getCoins();
        for (auto coin : coins) {
            level_file << "Coin " << coin->get_pos()->getX() << " " << coin->get_pos()->getY() << endl;
        }
        level_file.close();
        level_saved = true;
    }
}

void Editor::render() {
    if (!save_level) {
        level->render();
        terminal_color("green");
        terminal_print(0, level->getMapHeight() + 1, "Tutorial:");
        terminal_print(0, level->getMapHeight() + 2, "Press W to create a wall");
        terminal_print(0, level->getMapHeight() + 3, "Press C to create a coin");
        terminal_print(0, level->getMapHeight() + 4, "Press S to save your level");
        terminal_print(0, level->getMapHeight() + 5, "Press R to remove created object");
        terminal_print(0, level->getMapHeight() + 6, "Player will be stand at last position:)");
    } else  {
        terminal_color("green");
        terminal_print(5, 5, "Level is saved and will be in game after restart!");
        terminal_print(5, 6, "Press Esc to go to the main menu...");
    }
}

int Editor::getLevelHeight() {
    return level->getMapHeight();
}

int Editor::getLevelWidth() {
    return level->getMapWidth();
}