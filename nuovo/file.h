//
// Created by dando on 25/05/22.
//

#ifndef NUOVO_FILE_H
#define NUOVO_FILE_H

#endif //NUOVO_FILE_H


#include "main.h"




typedef struct {
    int index;
    char nome[64];
    int spr1d_game_giocati;
    int spr1d_game_vinti;
    int finali_giocate;
    int giochi_giocati;
    int giochi_vinti;
} ProfiloGiocatore;







void list_files() {

    FILE *file = NULL;
    char filename[40];

    file = fopen("../cmake-build-debug/Save_Files/savegame_files.txt", "r");

    if(file == NULL) {
        printf("\nERRORE! Il file non e' stato trovato!\n");
        return;
    }

    while(feof(file) == 0) {
        fgets(filename, 39, file);
        printf("File: %s", filename);
    }

    fclose(file);
}









ProfiloGiocatore leggi_giocatore(FILE *file) {

    ProfiloGiocatore giocatore;

    fread(&giocatore.index, sizeof(int), 1, file);
    fread(&giocatore.nome, sizeof(char), 64, file);
    fread(&giocatore.spr1d_game_vinti, sizeof(int), 1, file);
    fread(&giocatore.spr1d_game_giocati, sizeof(int), 1, file);
    fread(&giocatore.finali_giocate, sizeof(int), 1, file);
    fread(&giocatore.giochi_giocati, sizeof(int), 1, file);
    fread(&giocatore.giochi_vinti, sizeof(int), 1, file);

    return giocatore;
}




ProfiloGiocatore *leggi_giocatori(FILE *file, int num) {

    ProfiloGiocatore *group;

    for(int i = 0; i < num; i++) {
        group[i] = leggi_giocatore(file);
    }

    return group;
}


