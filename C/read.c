#include <stdio.h>
#include <stdlib.h>

int main(){
	char line[255];
	FILE * fpointer = fopen("wordlist.txt", "r");

	fgets(line, 255, fpointer);
	printf("%s", line);

	fclose(fpointer);
	return 0;
}