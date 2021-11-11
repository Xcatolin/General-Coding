#include <stdio.h>

int main(){
	int number = 5;			// %i
	double version = 3.7;		// %f
	float price = 2.35;		// %f
	char grade = "A";		// %s
	//char name = "Matheus";		// %s

	printf("%i \n", number);
	printf("%.1f \n", version);
	printf("%.2f \n", price);
	printf("%c", grade);
	//printf("%s", name);
	
	return 0;
}
