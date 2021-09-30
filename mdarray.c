#include <stdio.h> 
#include <string.h>

#define NUM_STUDENTS 3
#define CLASS_NAME_SIZE 10 

int main () 
{
	char class_list [NUM_STUDENTS][CLASS_NAME_SIZE] = {"Jimmy","Patrick","Ian"};
	strcpy(class_list [0], "Kontos");
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		printf("The First character of %s is %c\n", class_list[i], class_list[i][]);
	}

} 