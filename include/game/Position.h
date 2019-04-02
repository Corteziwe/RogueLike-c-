//
// Created by alexpc on 03.12.18.
//

#ifndef GAME_POSITION_H
#define GAME_POSITION_H



enum movement { UP, DOWN, LEFT, RIGHT, L_UP, L_DOWN};

class Position {
 public:
    Position(int valueX, int valueY, int valueLayer): x(valueX), y(valueY), layer(valueLayer) {}
    int getX() { return x; }
    int getY() { return y; }
    int getLayer() { return  layer; }
    void set_pos(int x, int y, int layer);
    friend bool operator !=(Position const &a, Position const &b);
    friend bool operator ==(Position const &a, Position const &b);
    void move (movement step);
    bool compare(Position* pos);

 private:
    int x;
    int y;
    int layer;
};

#endif //GAME_POSITION_H