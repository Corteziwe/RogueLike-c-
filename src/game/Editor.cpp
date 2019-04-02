//
// Created by alex-linux on 02.04.19.
//

#include "game/Editor.h"

Editor::Editor(int height, int width) : map_height(height), map_width(width) {
    level = new Level(map_height, map_width, 1, 1, 1);
    editor_movement_system = new MovementSystem(level->getPlayer(), level, true);
}

Editor::~Editor() {
    delete level;
    delete editor_movement_system;
}

void Editor::update() {
    editor_movement_system->update();
}

void Editor::render() {
    level->render();
}