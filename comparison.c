#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

int main () 
{
	
	char name1[MAX_SIZE] = "Jimmy";
	char name2[MAX_SIZE] = "Jacob";

	int comparison_value = strcmp(name1, name2);

	if(comparison_value == 0) 
	{
		printf("The strings are equal\n");

	}else(comparison_value != 0);
		{
			printf("The strings are not equal\n");
		}

}