#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        printf("Sono il figlio. Eseguo un'operazione complessa...\n");
        sleep(2);
        printf("Figlio completato.\n");
    } else {
        printf("Sono il padre. Aspetto il figlio.\n");
        wait(NULL);
        printf("Padre: il figlio è terminato, ora posso proseguire.\n");
    }

    return 0;
}