//
// Created by alexpc on 03.12.18.
//

#include <BearLibTerminal.h>
#include <game/Menu.h>
#include "game/Position.h"

int main() {
    auto game = new Menu();
    terminal_open();
    terminal_refresh();
    while (true) {
        if(terminal_has_input()) {
            game->update();
            if (game->isGameClose()) break;
            if(terminal_read() == TK_CLOSE) break;
        }
        terminal_clear();
        game->render();
        terminal_refresh();
    }
    terminal_close();
}