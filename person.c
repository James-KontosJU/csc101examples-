#include <stdio.h>
#include <string.h>

#define MAX_NAME 10

struct person {
	float height;
	float weight;
	char name[MAX_NAME];
	int age;
};

int main () {
	int count;

	struct person Jimmy = {
	.height = 5.9,
	.weight = 240,
	.name = "Jimmy",
	.age = 18
	};

	printf("This persons height is: %f\n", Jimmy.height);
	printf("This persons weight is: %f\n", Jimmy.weight);
	printf("This persons name is: %s\n", Jimmy.name);
	printf("This persons age is: %d\n",Jimmy.age);


struct person people[2] = {
{10.0,20.0,"Patrick", 20},
{20.0, 30.0, "Sam",30} 

};
for (int j = 0; j < 2; j++)
	{
		printf("Name is %s\n", people[j].name);
	}
}