#include "file.h"



int main() {


    int *giocatori;
    bool *alive;
    ProfiloGiocatore *giocatori_veri;

    bool nuovo;
    int scelta;
    char opzioni[2][10] = {"carica", "inserisci"};
    char scelte[4][10] = {"continua", "salva", "inizia", "esci"};


    // SCELTA DELL'OPERAZIONE DA SVOLGERE: INSERIRE UN PROFILO O CARICARE UNA PARTITA


    //inserire o caricare
    scelta = choice_string("\nInserire un orofilo giocatore o caricare una partita? (inserisci / carica)\n[Tu]: ", 2, opzioni);

    if(scelta == 0) {

        giocatori_veri = (ProfiloGiocatore *) calloc(sizeof(ProfiloGiocatore), 1);
        printf("\nNome: ");
        scanf ("%[^\n]%*c", giocatori_veri->nome);

        do {
            scelta = choice_string("\nQuale operazione vuoi effettuare? (continua / salva / inizia / esci)\n[Tu]: ", 4, scelte);

        } while(scelta == 0);

    }














    /* Very well then
    FILE *file = NULL;
    int numero_giocatori, i, game;
    ProfiloGiocatore *giocatori;
    int tot_giocatori, pla_giocatori;








    file = fopen("../cmake-build-debug/Save_Files/savegame_twoPlayers_game.bin", "rb");

    if(file == NULL) {
        printf("\nERRORE! File non trovato!");
        return -1;
    }

    fread(&numero_giocatori, sizeof(int), 1, file);

    giocatori = (ProfiloGiocatore *)calloc(sizeof(ProfiloGiocatore), numero_giocatori);

    giocatori = leggi_giocatori(file, numero_giocatori);


    fclose(file);








    printf("\n\nCi sono %d giocatori:\n", numero_giocatori);
    for(i = 0; i < numero_giocatori; i++) {
        printf("Nome: %s\n", giocatori[i].nome);
    }
    printf("\n%d", game);

    if(game == 1) {
        printf("\nGiocatori rimanenti: %d", tot_giocatori);
        printf("\nGiocatori umani: %d", pla_giocatori);
    }*/






    return 0;
}




