#include <stdio.h>
#include <stdlib.h>

int main(){
	int luckyNumbers[] = {10, 20, 25, 47};
	luckyNumbers[1] = 200;
	printf("%.2d \n", luckyNumbers[1]);
	return 0;
}
