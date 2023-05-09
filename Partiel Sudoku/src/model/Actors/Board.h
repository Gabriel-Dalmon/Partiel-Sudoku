
#ifndef BOARD_ACTOR_H_INCLUDED
#define BOARD_ACTOR_H_INCLUDED


typedef struct Case {
    int iContent; /**@var int iContent - 9 = mines, 0-8 = amount of adjacent mines */
    int isVisible; // 1 = visible, 0 = hidden;
    int isFlag; //1 = drapeau, 0 = pas de drapeau
} Case;

typedef struct Board {
    Case* grid;
    int iGridLength;
    int remaining;
    int iMinesAmount;
    int iCursorPosition[2];
} Board;

#endif