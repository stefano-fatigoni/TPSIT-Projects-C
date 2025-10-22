#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	int PID;
	
	printf("Inizio dell'operazione di fork-join!!!\n");
	
	PID = fork();
	
	if(PID == 0) {
		printf("Sei nel processo padre!!!\n");
	} else {
		printf("Sei nel processo figlio!!!\n");
		sleep(0);
		exit(0);
	}
	
	printf("Hai finito l'operazione di fork-join!!!\n");
	
	return 0;
}
