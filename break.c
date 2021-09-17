#include <stdio.h>

int main () {
	
int num;

	printf("enter a number 1 through 4\n");
	scanf("%d",&num);

switch(num) {

case 1:
	printf("Withdrawl\n");
	break;

case 2:
	printf("deposit\n");
	break;

case 3:
	printf("Balance\n");
	break;

case 4:
	printf("Exit\n");
	break;

default:
	printf("out of range\n");
	break;
	}


}