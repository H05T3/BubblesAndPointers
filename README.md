# BubblesAndPointers

* Overview of the program: This program is supposed to take a number array that is in a mixed order, and then uses a bubble sort to sort the array.
	* How does a bubble sort work?
		A bubble sort works by taking the size of the array, finding the number the size of the ray, and move that from it's position to the very last position. Then after the number the size of the array is moved to the end, it finds the next biggest number and moves it to it's position, which is one less than the last number. It does this until it reaches 0.
* List of functions:
	* **main()**
		* This Function is supposed to run the entire program, it creates the array that the program is meant to sort, then it calls the printValues method that takes the pointer to the array, and outputs the array out of order. It then calls the sort method which takes the pointer to the array and sorts the array. After that we call for the printValues function again which intakes the pointer to the array and outputs the sorted array.
	* **printValues(int\*)**
		* This function takes a pointer to an integer array and prints the array as it is in that moment
	* **swap(int\* , int\*)**
		* This function takes the pointer values of two integers, it then creates a temporary variable called *tempVar* which gets the value of the first integer, then we take the first integer and it gets the value second integer, then the second integer gets the value of *tempVar*
	* **sort(int\*)**
		* This function takes the pointer value of an integer array, then creates a temporary variable called *arrLen* that gets the length of the array then creates an integer variable called i and j which gets a value of 0, then it does a for loop for i which goes from 0 to *arrLen* - 1, then does another for loop inside the i for loop, but for j, from 0 to *arrLen* -1. Inside for j to *arrLen* - 1, there is an if statement that checks if the variable in the array = to j is greater than the variable in front of it, if true then it runs the swap function, inputting the array of j and j+1, then prints the array using printValues function. This should just change the value of the pointer array to be sorted from least to greatest.
