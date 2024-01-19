#include "affichageSDL2.h"
#include "Menu.h"

int main(int argc, char** argv) {
    const std::string options[] = {"ENDLESS", "MULTIPLAYER"};
	bool quit = false;
    while (true) {
        Menu m(options, 2);
        quit = m.menuBoucle();
        if (quit){
            break;
        }
        if (!m.multijoueur) {
            SDLSimple sj;
            sj.sdlBoucle();
        } else {
            SDLMulti sj;
            sj.sdlBoucleMulti();
        }
    }

    return 0;
}
