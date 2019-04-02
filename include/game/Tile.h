//
// Created by alexpc on 03.12.18.
//

#ifndef GAME_TILE_H
#define GAME_TILE_H


class Tile {
 public:
    const char* color;
    int symbol;
    const char* text;

    Tile(const char *color, int symbol, const char *text) : color(color), symbol(symbol), text(text) {}
};

#endif //GAME_TILE_H