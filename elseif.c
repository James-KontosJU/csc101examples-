#include <stdio.h>

int main () {
	int userinput;
	printf("Guess a number between 1 and 10.\n");
	scanf("%d",&userinput);
	if(userinput==7) {
		printf("You guessed my lucky number!\n");
	} else if(userinput<7) {
		printf("you are too low\n");
	} else {
		printf("You are too high\n");
	}


}