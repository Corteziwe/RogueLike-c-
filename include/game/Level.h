//
// Created by alex-linux on 22.03.19.
//

#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H
#include <vector>
#include "GameObject.h"

using namespace std;

class Level {
public:
    Level(int height, int width, int x, int y, int num);
    ~Level();

    void createMapObject(GameObject* obj);
    void removeMapObject(Position* pos);
    GameObject* getMapObject(int x, int y, int layer);

    // Game Functions
    void restore_level();
    vector <GameObject*> getWalls();
    vector <GameObject*> getCoins();
    void addMoney();
    int getMoney();
    int getSteps();
    void changeSteps(int h);
    int getMapHeight();
    int getMapWidth();
    GameObject* getPlayer();
    int getCoinsNumber();
    int getLevelNumber() { return level_number; }


    void update();
    void render();
private:
    int steps;
    int mapHeight;
    int mapWidth;
    int level_number;
    int money_count;
    GameObject* player;
    Position* player_pos;
    vector <GameObject*> map_objects;
    vector <GameObject*> coins;
};


#endif //GAME_LEVEL_H
