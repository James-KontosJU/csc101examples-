#include <stdio.h>

int main () {

int userinput; 
printf("Enter a number between 1 and 10.\n");
scanf("%d",&userinput);
printf("You entered %d\n",userinput);
if(userinput==7){
printf("You guessed my lucky number!\n");

}
if(userinput>7){
	printf("You guessed too high\n");
}
if(userinput<7){
	printf("You guessed too low\n");
}


}