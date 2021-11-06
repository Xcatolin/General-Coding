#include <stdio.h>

int main(void){
	int port = 80;
	char ip[] = "192.168.201.3";
	float version = 1.1;

	printf("Hello, world!\n");
	printf("Script version: %.1f \n", version);
	printf("Scanning port %i on host %s", port,ip);

	return 0;
}
