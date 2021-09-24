#include <stdio.h>

int main ()  {
int a;

	printf("Enter a mumber 1-4: ");
	scanf("%d", &a);
// Pretty much asking the program if its negative or positive or odd or even
if(a%2 == 0 && a >= 0 ) {
	printf("Even/Positive\n");

} else if(a%2 == 0 && a < 0) {
	printf("Even/Negative\n");

} else if(a%2 != 0 && a >= 0 ) {
	printf("Odd/Positive\n");

} else {
	printf("Odd/Negative\n");
}
	

}