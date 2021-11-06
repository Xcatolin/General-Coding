#include <stdio.h>

int main(int argc, char *argv[]){

	int i;
	char *ip;
	ip = argv[1];

	if(argc<2){
		printf("Usage: ./loop <host>");
	} else {
	for(i=0;i<=10;i++){
		printf("Scanning host %s.%i \n",ip,i);
	}
	}
}
