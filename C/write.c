#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fpointer = fopen("wordlist.txt", "w"); //a for append

	fprintf(fpointer, "admin\ntomcat\nadministrator\n"); // just replace the contents you intend to append

	fclose(fpointer);
	return 0;
}
