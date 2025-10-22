#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int PID1, PID2, PID3, PID4;

    int numeri[2];

    PID1 = fork();
    PID2 = fork();
    PID3 = fork();
    PID4 = fork();

    for(int i=0; i<2; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", nuemri[i]);
    }

    if (PID1 == 0) {
        int somma = numeri[0] + numeri[1];
        printf("La somma è: " + somma);
    }
    if(PID2 == 0) {
        int differenza = numeri[0] - numeri[1];
        printf("La differenzza è: " + differenza);
    }
    if(PID3 == 0) {
        int moltiplicazione = numeri[0] + numeri[1];
        printf("La moltiplicazione è: " + moltiplicazione);
    }
    if(PID4 == 0)
} 

