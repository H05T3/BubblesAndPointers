void printValues(int*);
void sort(int*);
void swap(int*,int*);

int Main(){
	int values[] = {7,3,9,4,6,1,2,8,5};
	printf("Before: \n");
	printValues(values(values));
	
	//Test Swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x,y);
	swap(&x,&y);
	printf("x: %d, y: %d \n", x,y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
	//End Main

