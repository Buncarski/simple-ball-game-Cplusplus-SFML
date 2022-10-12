#include "Game.h"

int main()
{
    //Game loop, srand init
    srand(static_cast<unsigned>(time(0)));

    //Init game object
    Game game;
    //Game loop
    while (game.running() /*&& !game.getEndGame()*/) {

        game.update();


        game.render();

    }


    //End of application
    return 0;
}