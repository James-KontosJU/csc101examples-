#include <stdio.h>



int main () {



int num = 6;

	printf("Enter a number:");
	scanf("%d", &num);

if(num >=0 && num <=10) {

	printf(" num is in range\n");

}
if(num <0 || num >10) {

	printf("num is out of Range\n");
}
if(!(num >=0 && num <=10)){

	printf("num is out of Range\n");
}
}