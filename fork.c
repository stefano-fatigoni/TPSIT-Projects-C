#include <stdio.h>
#include <unistd.h>

int main() {
    printf("1) Processo figlio non ancora nato. PID = %d\n", getpid());

    int pid = fork();

    if(pid == 0) {
        printf("3) Processo figlio, PID = %d\n", getpid());
    }
    else {
        printf("2) Processo padre figlio nato, PID = %d\n", getpid());
    }
}