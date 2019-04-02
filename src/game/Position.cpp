//
// Created by alexpc on 04.12.18.
//

#include "game/Position.h"



void Position::move(movement step) {
    switch (step) {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case L_UP:
            layer++;
            break;
        case L_DOWN:
            layer--;
            break;
        default: break;
    }
}

void Position::set_pos(int _x, int _y, int _layer) {
    x = _x;
    y = _y;
    layer = _layer;
}

bool Position::compare(Position* pos) {
    return (x == pos->getX()) && (y == pos->getY()) && (layer == pos->getLayer());
}

bool operator ==(Position const &a, Position const &b) {
    return (a.x == b.x) && (a.y == b.y) && (a.layer == b.layer);
}

bool operator !=(Position const &a, Position const &b) {
    return !(a == b);
}