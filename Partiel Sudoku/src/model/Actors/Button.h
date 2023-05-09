#ifndef BUTTON_ACTOR_H_INCLUDED
#define BUTTON_ACTOR_H_INCLUDED

typedef struct Button {
    int positionX;
    int positionY;
    int type;//type = 1 -> switch screen Button
    const char* label;
    void(*action)(currentScene* oCurrentScene);
}Button;

#endif