#include <stdio.h>

int main(void){
	int port;
	char ip[16];
	
	printf("Hello, world!\n");
	
	printf("Insert the IP address:\n");
	fgets(ip,16,stdin);
	
	printf("Insert the port:\n");
	scanf("%i",&port);

	printf("Scanning port %i on host %s", port,ip);

	return 0;
}
