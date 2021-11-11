#include <stdio.h>
#include <stdlib.h>

int main(){
	int age = 30;
	int * pAge = &age;
	
	printf("Age's memory address: %p \n", &pAge);
	
	return 0;
}
