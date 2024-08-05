#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "prototypes.h"
#include "menu.h"
#include "gotoligcol.h"
#include "file_matrices.h"
#include "load_matrices.h"
#include "load.h"
#include "choice_loading_game.h"
#include "decorations.h"
#include "smoke.h"
#include "initialization_matrices.h"
#include "play.h"
#include "visible_mode.h"
#include "manual_placement.h"
#include "random_placements.h"
#include "save_matrices.h"
#include "save.h"
#include "strike.h"
#include "shot.h"
#include "winner.h"
#include "game_over.h"
#include "boatsascii.h"
#include "rules.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "prototypes.h"
#include "gotoligcol.h"
#include "menu.h"
#include "decorations.h"
#include "initialization_matrices.h"
#include "choice_loading_game.h"
#include "choice_saving_game.h"
#include "rules.h"
#include "play.h"
#include "exitgame.h"
#include "sudokuascii.h"
#include "easy.h"
#include "medium.h"
#include "hard.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){


    int choix;
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    system("cls");
    gotoligcol(0, 30);
    SetConsoleTextAttribute(hConsole, 11);
    printf("/////////////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("G A M E S - C E N T E R");
    SetConsoleTextAttribute(hConsole, 11);
    printf(" ///////////////////////////////////////\n");
    gotoligcol(3, 30);
    printf("////////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("Please, open the game page wide");
    SetConsoleTextAttribute(hConsole, 11);
    printf(" ////////////////////////////////");
    SetConsoleTextAttribute(hConsole, 15);

    gotoligcol(44, 70);
    printf("Copyright 2023 Battleship Alassane Wade");

    boat_decoration_menu();

    gotoligcol(10, 70);
    printf("1. Battleship");
    gotoligcol(11, 70);
    printf("2. Sudoku");
    gotoligcol(12, 70);
    fflush(stdin);
    scanf("%d", &choix);

    // Inputs mistakes
    while (choix != 1 && choix != 2)
    {
        gotoligcol(25, 120);
        SetConsoleTextAttribute(hConsole, 12);
        printf("Error.");
        SetConsoleTextAttribute(hConsole, 15);
        gotoligcol(14, 70);
        printf("  ");
        gotoligcol(14, 70);
        fflush(stdin);
        scanf("%d", &choix);
    }

    // Battleship 
    if (choix == 1)
    {
}