#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void handle_sigint(int sig){
	printf("Caught signal %d (Ctrl+C). Exciting safely.\n", sig);
	exit(0);
}

int main(){
	
	signal(SIGINT, handle_sigint);
	
	while(1){
		printf("Running...\n");
		sleep(1);
	}
	
	return 0;
}
