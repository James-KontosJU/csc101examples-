# include <stdio.h>

#define O_ARR_SIZE 2
#define I_ARR_SIZE 3

int main () {
	int arr[O_ARR_SIZE][I_ARR_SIZE] = {{1,2,3},{4,5,6}};
	for(int i = 0; i < O_ARR_SIZE; i++) {
		for(int j = 0; j < I_ARR_SIZE; j++){
			printf("Value is %d\n", arr[i][j]);
		}
	}

}