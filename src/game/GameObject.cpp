//
// Created by alex-linux on 20.03.19.
//

#include <BearLibTerminal.h>
#include "game/GameObject.h"

const char* menu_color = "green";

GameObject::GameObject(int x, int y, int layer, string type_val) {
    pos = new Position(x, y, layer);
    if (type_val == "cursor") {
        tile = new Tile("green", '*', " ");
        type = type_val;
    } else if (type_val == "m_start") {
        tile = new Tile(menu_color, ' ', "Start");
        type = type_val;
    } else if (type_val == "m_exit") {
        tile = new Tile(menu_color, ' ', "Exit");
        type = type_val;
    } else if (type_val == "m_name") {
        tile = new Tile(menu_color, ' ', "Enter Name:");
        type = type_val;
    } else if (type_val == "grass") {
        tile = new Tile("green", '.', " ");
        type = type_val;
    } else if (type_val == "wall") {
        tile = new Tile("orange", '#', " ");
        type = type_val;
    } else if (type_val == "coin") {
        tile = new Tile("yellow", '$', " ");
        type = type_val;
    } else if (type_val == "actor") {
        tile = new Tile("white", '@', " ");
        type = type_val;
    } else if (type_val == "m_editor") {
        tile = new Tile(menu_color, ' ', "Create new level");
        type = type_val;
    } else {
        tile = new Tile(menu_color, ' ', " ");
        type = "default";
    }
}

GameObject::~GameObject() {
    delete tile;
    delete pos;
}

void GameObject::change_object(const char *text, const char *color, int symbol, string type_val) {
    tile->text = text;
    tile->color = color;
    tile->symbol = symbol;
    type = type_val;
}

void GameObject::change_type(string type_v) {
    type = type_v;
}

Position* GameObject::get_pos() {
    return pos;
}

void GameObject::set_pos(int x, int y, int layer) {
    pos->set_pos(x, y, layer);
}

string GameObject::get_type() {
    return type;
}

void GameObject::render() {
    if (tile->symbol != ' ') {
        terminal_layer(pos->getLayer());
        terminal_color(tile->color);
        terminal_put(pos->getX(), pos->getY(), tile->symbol);
    } else {
        terminal_layer(pos->getLayer());
        terminal_color(tile->color);
        terminal_print(pos->getX(), pos->getY(), tile->text);
    }
}