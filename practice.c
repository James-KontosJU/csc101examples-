#include <stdio.h>

int main () {

int counter;
	printf("Enter a number 1 through 10: ");
	scanf("%d", &counter);

	if( counter >= 1 && counter <= 10) 
{
		printf("%-15s", "Count up: " );
		// count up loop here
		for(int t = 1; t <= counter; t ++)
		{
			printf(" %04d", t);
		}
		printf("%-17s", "\nCount down: " );

		// count down loop here
		for(int j = counter; j >= 1; j--)
		{
			printf("%4d ", j);
		}
		printf("%-17s", "\nOdd Values: " );

		// Odd values loop here
		for( int h = 1; h <= counter; h++) 
		{
			if(h%2 != 0)
			{
				printf("%4d ", h);
		}

			}
		printf("%-17s", "\nSquares: " );

		// Sqaures values loop here
		int g = 1;
		for(int c = 1; c <= counter; c++)
		{

				
				int c = g * g;
				printf("%4d ", c);
				g++;

			
		}
		printf("%-17s", "\nGeo Sequence: ");

		// Geometric values loop here
		int m = 1;
		for(int v = 1 ; v <= counter;v++)
			{
				
				printf("%4d\n ", m);
				m = m * 2;
	

			}

		
	}
	else
	{
		printf("There is a error\n");
		return 1;
	}

}