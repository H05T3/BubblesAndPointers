#include <stdio.h>

#define MAX 9
void printValues(int*);
void sort(int*);
void swap(int*,int*);

int main(){
	int values[] = {7,3,9,4,6,1,2,8,5};
	printf("Before: \n");
	printValues(values);

	//Test Swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x,y);
	swap(&x,&y);
	printf("x: %d, y: %d \n", x,y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);}
	//End Main

void printValues(int* array){
	int i = 0;
	printf("[");
	for (i = 0; i < MAX; i++){
		printf("%d, ",array[i]);
	}
	printf("]\n");
}

void swap(int* x,int* y){
	int tempVar = *x;
	(*x) = *y;
	(*y) = tempVar;
}

void sort(int* array){
	int i = 0;
	int j = 0;
	for (i = 0; i <= MAX - 1; i++){
		for(j = 0; j <= MAX - 1; j++){
			if (array[j] > array[j+1]){
				swap(&array[j],&array[j+1]);
				printValues(array);
			}
		}
	}
}


