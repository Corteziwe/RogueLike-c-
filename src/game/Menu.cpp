//
// Created by alex-linux on 20.03.19.
//
#include <string>
#include <BearLibTerminal.h>
#include "game/Menu.h"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

Menu::Menu() {
    cursor = new GameObject(4, 5, 0, "cursor");
    engine = new Engine();
    editor = new Editor(0, 0);
    close_the_game = false;
    gameIsRun = false;
    editorIsRun = false;
    auto start = new GameObject(5, 5, 0, "m_start");
    auto editor = new GameObject(5, 6, 0, "m_editor");
    auto exit = new GameObject(5, 7, 0, "m_exit");
    auto name = new GameObject(5, 5, 1, "m_name");
    menu_objects.push_back(editor);
    menu_objects.push_back(start);
    menu_objects.push_back(exit);
    menu_objects.push_back(name);
}

Menu::~Menu() {
    delete cursor;
}

void Menu::update() {
    if (gameIsRun) {
        engine->update();
        int key = terminal_peek();
        if (key == TK_ESCAPE) {
            delete engine;
            engine = new Engine();
            gameIsRun = false;
            cursor->set_pos(4, 5, 0);
        }
    } else if (editorIsRun) {
        editor->update();
        int key = terminal_peek();
        if (key == TK_ESCAPE) {
            delete editor;
            editor = new Editor(0, 0);
            editorIsRun = false;
            cursor->set_pos(4, 5, 0);
        }
    } else {
        int key = terminal_peek();

        switch (key) {
            case TK_UP:
                for (auto obj : menu_objects) {
                    if (cursor->get_pos()->getLayer() == obj->get_pos()->getLayer()) {
                        if (cursor->get_pos()->getY() - 1 == obj->get_pos()->getY()) {
                            cursor->get_pos()->move(UP);
                            break;
                        }
                    }
                }
                break;
            case TK_DOWN:
                for (auto obj : menu_objects) {
                    if (cursor->get_pos()->getLayer() == obj->get_pos()->getLayer()) {
                        if (cursor->get_pos()->getY() + 1 == obj->get_pos()->getY()) {
                            cursor->get_pos()->move(DOWN);
                            break;
                        }
                    }
                }
                break;
            case TK_ENTER:
                for (auto obj : menu_objects) {
                    if ((cursor->get_pos()->getY() == obj->get_pos()->getY()) &&
                        (cursor->get_pos()->getLayer() == obj->get_pos()->getLayer())) {
                        if (obj->get_type() == "m_exit") {
                            close_the_game = true;
                        }
                        if (obj->get_type() == "m_start") {
                            cursor->get_pos()->move(L_UP);
                        }
                        if (obj->get_type() == "m_editor") {
                            editorIsRun = true;
                        }
                    }
                }
                break;
            case TK_ESCAPE:
                if (cursor->get_pos()->getLayer() > 0) {
                    cursor->set_pos(4, 5, 0);
                }
                break;
            default:
                break;
        }
    }
}

bool Menu::isGameClose() {
    return close_the_game;
}

void Menu::render() {
    if (gameIsRun) {
        if (!engine->get_info(GAME)) {
            engine->render();
            terminal_color("green");
            terminal_print(5, engine->get_info(MAP_H) + 1, player_name);
            string tmp = "SCORE:" + to_string(engine->get_info(SCORE));
            terminal_print(5, engine->get_info(MAP_H) + 2, tmp.c_str());
            tmp = "STEPS:" + to_string(engine->get_info(STEPS));
            terminal_print(5, engine->get_info(MAP_H) + 3, tmp.c_str());
        } else {
            terminal_print(5, 5, "Game is over! Press Esc...");
            //cursor->set_pos(4, 5, 0);
            //gameIsRun = false;
        }
    } else if (editorIsRun) {
        if (editor->getLevelWidth() == 0 && editor->getLevelHeight() == 0) {
            wchar_t mapHeight[2] = L"";
            wchar_t mapWidth[2] = L"";
            terminal_print(5, 5, "Enter level height:");
            terminal_read_str(5, 6, mapHeight, sizeof(mapHeight) -1);
            terminal_print(5, 6, mapHeight);
            terminal_print(5, 7, "Enter level width:");
            terminal_read_str(5, 8, mapWidth, sizeof(mapHeight) -1);
            delete editor;
            editor = new Editor(stoi(mapHeight), stoi(mapWidth));
        }
        editor->render();
    } else {
        cursor->render();
        for (auto obj : menu_objects) {
            if (cursor->get_pos()->getLayer() == obj->get_pos()->getLayer()) {
                obj->render();
                if (obj->get_type() == "m_name") {
                    terminal_read_str(5, 6, player_name, sizeof(player_name) - 1);
                    gameIsRun = true;
                }
            }
        }
    }
}