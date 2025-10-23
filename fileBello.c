#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    pid_t pid1 = fork();
    if (pid1 < 0) {
        perror("fork1 failed");
        return 1;
    } else if (pid1 == 0) {
        // Figlio 1: calcola la somma
        int somma = num1 + num2;
        printf("Figlio 1: somma = %d\n", somma);
        exit(0);
    }

    pid_t pid2 = fork();
    if (pid2 < 0) {
        perror("fork2 failed");
        return 1;
    } else if (pid2 == 0) {
        // Figlio 2: calcola la differenza
        int differenza = num1 - num2;
        printf("Figlio 2: differenza = %d\n", differenza);
        exit(0);
    }

    // Padre aspetta entrambi i figli
    wait(NULL);
    wait(NULL);

    // Il padre ricalcola i valori per fare la media
    int somma = num1 + num2;
    int differenza = num1 - num2;
    double media = (somma + differenza) / 2.0;

    printf("Padre: media dei due valori = %.2f\n", media);

    return 0;
}
