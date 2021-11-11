#include <stdio.h>
#include <stdlib.h>

int main(){
	int secret = 5;
	int guess;
	int try = 1;
	printf("Insert your guess number: \n");
	scanf("%i", &guess);

	while(guess != secret && try < 3){
		try++;
		printf("[!] Wrong number, try again: \n");
		scanf("%i", &guess);
	}

	if(guess != secret){
		printf("[!] You can only guess 3 numbers at a time. \n");
	}else{
	printf("[+] Congratulations! The secret number is %i!\n", secret);
	}
	return 0;
}
