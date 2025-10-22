#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    printf("Sono il processo originale con PID %d\n", getpid());

    pid = fork();

    if(pid < 0) {
        perror("fork fallita");
        return 1;
    } else if(pid == 0) {
        printf("Sono il processo figlio con PID %d, il mio padre ha PID %d\n", getpid(), getppid());
    } else {
        printf("Sono il processo padre con PID %d, ho creato il figlio con PID %d\n", getpid(), pid);
    }

    printf("Termine dell'esecuzione (PID %d)\n", getpid());

    return 0;
}