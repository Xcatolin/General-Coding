#include <stdio.h>
#include <stdlib.h>

int main(){
	double num1;
	double num2;
	char op;

	printf("Enter the first number: \n");
	scanf("%lf", &num1);
	printf("Enter the operation: \n");
	scanf(" %c", &op);
	printf("Enter the second number: \n");
	scanf("%lf", &num2);

	if(op == '+'){
		printf("%.2f \n", num1 + num2);
	}else if(op == '0'){
		printf("%.2f \n", num1 - num2);
	}else if(op == '*'){
		printf("%.2f \n", num1 * num2);
	}else if(op == '/'){
		printf("%.2f \n", num1 / num2);
	}else{
		printf("[!] Unknown operation. \n");
	}

	return 0;
}
