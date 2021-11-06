#include <stdio.h>

int main(int argc, char *argv[]){

	if(argc<2){
		printf("Usage: ./arg <port> <host>");
	} else{

	printf("Scannig port %s on host %s",argv[1],argv[2]);
	return 0;
	}
}
