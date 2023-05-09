

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "src\model\Scenes\MainMenuScene.h"
#include "src\systems\Scenes\MainMenuScene.h"



int main()
{

    currentScene oCurrentScene;
    constructMainMenuScene(&oCurrentScene);//should be located in the "Systems" which are the Presenters for each Scenes.
    char* inputs = "";
    while (oCurrentScene.isAppRunning) {
        //EVENTS
        inputs = getPlayerInputs(&inputs)
            oCurrentScene.update(oCurrentScene, inputs)
            //DISPLAY
            oCurrentScene.display(oCurrentScene)
    }

    free(oMainScreen.activeScreen);

    return 0;
}


void getPlayerInputs(char** inputs) {
    char cKeyPress = 'a';
    char cKeyPressed = _getch();
    *inputs = realloc(sizeof(char) * inputsSize + 1);
    PlayerInputsSize++;
    }