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



#include "rules1.h"
#include "menu1.h"
#include "play1.h"
#include "choice_loading_game1.h"
#include "choice_saving_game.h"
#include "initialization_matrices1.h"
#include "decorations1.h"
#include "easy.h"
#include "medium.h"
#include "hard.h"
#include "sudokuascii.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    //DDV
    int k;
    int t = 0;
    int i;
    int z;
    int choix;
    char pseudo[100];
    int a = 0;
    unsigned char ** mat = NULL;
    unsigned char ** mat_ia1 = NULL;
    unsigned char ** mat_bis = NULL;
    unsigned char ** mat_ia1_bis = NULL;
    unsigned char ** mat2 = NULL;
    unsigned char ** mat2_bis = NULL;
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    system("cls");
    gotoligcol(0, 30);
    SetConsoleTextAttribute(hConsole, 12);
    printf("/////////////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("G A M E S - C E N T E R");
    SetConsoleTextAttribute(hConsole, 12);
    printf(" ///////////////////////////////////////\n");
    gotoligcol(3, 30);
    printf("////////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("Please, open the game page wide");
    SetConsoleTextAttribute(hConsole, 12);
    printf(" ////////////////////////////////");

    gotoligcol(44, 70);
    printf("Copyright 2024 Games-Center Alassane Wade");

    // boats_decoration_exit();
    // sudokumain();

    gotoligcol(5, 70);
    SetConsoleTextAttribute(hConsole, 12);
    printf("Enter your nickname: ");
    SetConsoleTextAttribute(hConsole, 15);
    gets(pseudo);
    gotoligcol(6, 70);
    printf("Welcome %s !\n\n", pseudo);

    gotoligcol(9, 70);
    SetConsoleTextAttribute(hConsole, 12);
    printf("Choose the game you want to play:");
    SetConsoleTextAttribute(hConsole, 15);
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
    if (choix == 1){
        system("cls");
        gotoligcol(0, 30);
        SetConsoleTextAttribute(hConsole, 11);
        printf("/////////////////////////////////////// ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("B A T T L E S H I P");
        SetConsoleTextAttribute(hConsole, 11);
        printf(" ///////////////////////////////////////\n");
        gotoligcol(3, 30);
        printf("////////////////////////////////// ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Please, open the game page wide");
        SetConsoleTextAttribute(hConsole, 11);
        printf(" ////////////////////////////////");
        SetConsoleTextAttribute(hConsole, 15);


        //3. Saisie du pseudo de l'utilisateur
        gotoligcol(44, 70);
        printf("Copyright 2023 Battleship Alassane Wade");

        boat_decoration_main();

        gotoligcol(30, 70);
        printf("Loading...");
        sleep(3);
        system("cls");

        //Création de l'échiquier

        //Création de la ligne [1][j]
        mat = (unsigned char **)malloc(16* sizeof(unsigned char*));

        //Création des colonnesala
        for ( k = 0; k < 16; k++) {
            mat[k] = (unsigned char *)malloc(16 * sizeof(unsigned char));
        }
        //Création de la ligne [1][j]
        mat_ia1 = (unsigned char **)malloc(16* sizeof(unsigned char*));

        //Création des colonnes
        for ( k = 0; k < 16; k++) {
            mat_ia1[k] = (unsigned char *)malloc(16 * sizeof(unsigned char));
        }
        //Création de la ligne [1][j]
        mat_bis = (unsigned char **)malloc(16* sizeof(unsigned char*));

        //Création des colonnes
        for ( k = 0; k < 16; k++) {
            mat_bis[k] = (unsigned char *)malloc(16 * sizeof(unsigned char));
        }
        //Création de la ligne [1][j]
        mat_ia1_bis = (unsigned char **)malloc(16* sizeof(unsigned char*));

        //Création des colonnes
        for ( k = 0; k < 16; k++) {
            mat_ia1_bis[k] = (unsigned char *)malloc(16 * sizeof(unsigned char));
        }

        //Appel du Menu Principale
        menu(mat,mat_ia1, &a, pseudo, choix, mat_bis,mat_ia1_bis);
    }
        // Sudoku
    if (choix == 1){
        
    //Sudoku
    system("cls");
    gotoligcol(0, 30);
    SetConsoleTextAttribute(hConsole, 6);
    printf("/////////////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("S U D O K U");
    SetConsoleTextAttribute(hConsole, 6);
    printf(" ///////////////////////////////////////\n");
    gotoligcol(3, 30);
    printf("////////////////////////////// ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("Please, open the game page wide");
    SetConsoleTextAttribute(hConsole, 6);
    printf(" ////////////////////////////");
    SetConsoleTextAttribute(hConsole, 15);
    
    //Copyrights
    SetConsoleTextAttribute(hConsole, 6);
    gotoligcol(34, 70);
    printf("Copyright 2024 Sudoku Alassane Wade");
    SetConsoleTextAttribute(hConsole, 15);

    // Pseudo input 
    gotoligcol(5, 70);
    SetConsoleTextAttribute(hConsole, 6);
    printf("Enter your pseudo: ");
    SetConsoleTextAttribute(hConsole, 15);
    gets(pseudo);
    gotoligcol(6, 70);
    gotoligcol(6, 70);
    printf("Welcome %s !\n\n", pseudo);

    sudokumain();

    gotoligcol(30, 70);
    printf("Loading...");
    sleep(3);
    system("cls");

    //Création de la ligne [1][j]
    mat2 = (unsigned char **)malloc(10 * sizeof(unsigned char*));

    //Création de la ligne [1][j]
    mat2_bis = (unsigned char **)malloc(10 * sizeof(unsigned char*));

    for (i = 0; i < 10; i++) {
        mat2[i] = (unsigned char *)malloc(10 * sizeof(unsigned char));
        mat2_bis[i] = (unsigned char *)malloc(10 * sizeof(unsigned char));
    }

    //Calling menu
    menu1(mat2, mat2_bis, pseudo);s
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////