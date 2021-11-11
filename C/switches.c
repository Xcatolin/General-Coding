#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char grade;
	printf("What grade did you got? \n");
	scanf("%s", &grade);
	
	switch(grade){
	case 'A' :
		printf("You did great! \n");
		break;
	case 'B' :
		printf("Almost there! \n");
		break;
	case 'C' :
		printf("Not that close \n");
		break;
	case 'D' :
		printf("Not well \n");
		break;
	case 'F' :
		printf("You suck \n");
		break;
	default :
		printf("[!] Invalid grade. \n");
	}

	return 0;
}
