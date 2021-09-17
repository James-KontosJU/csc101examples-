#include <stdio.h> 

int main ()  {
	
int age = 20;

float cost = 99.25;

printf(" my age is %d\n", age);
printf(" my age is %5d\n", age);
printf(" my age is %05d\n", age);
printf(" my age is %-5dyears\n", age);
printf(" your change is %5.2f\n", cost);
printf("your change is %04.3f\n", cost);
printf(" your change is %04.2f\n", cost);
printf("your change is %07.2f\n", cost);
printf("your change is %5.4f\n", cost);

}