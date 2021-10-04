#include <stdio.h>

int main(void){
	int num, guess, tries = 0;
	printf("Enter number to be guessed:");
	scanf("%d", &num);
	do{
		printf("Enter your guess: ");
			scanf("%d", &guess);
		if(guess>num){
			printf("it is less.\n");
		tries++;
		}
		else if(guess<num){				// works without else-if too
			printf("it is more.\n");
			tries++;
		}
	}while(guess != num);
	printf("number of tries needed\n%d", tries+1);
}
