#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int numeri[16];
    int PID1;

    for(int i=0; i<4; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", numeri[i]);
    }

    for(int a=0; a<4; a++) {
        PID1 = fork();

        if(PID1 < 0) {
            printf("Fork fallita");
            return 1;
        }
        if(PID1 == 0) {
            printf("Figlio: Il numero che hai scirtto è: " + numeri[a]);
            printf("Figio: Inserisci un numero: ");
            scanf("%d", numeri[a]);
            return 0;
        }
        else {
            printf("Padre: Il numero che hai scritto è: " + numeri[a+1]);
            printf("Padre: Inserisci un altro numero: ");
            scanf("%d", numeri[a+1]);
            return 0;
        }
    }
}