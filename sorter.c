#include <stdio.h>
const int MAX = 9;

//Function to print the values of an integer array
void printValues(int* numArr) {
  
  //Prints the opening bracket
  printf("[");
  
  //Iterates through the array and prints each value
  for (int i = 0; i < MAX; i++) {
    printf("%d, ", numArr[i]);
  };

  //Prints the closing bracket
  printf("]\n");
};

//Function to sort the array
void sort(int* numArr) {

  //Loops the sorting process until the array is fully sorted, checks the first and last number in the array to see if they are 1 and 9
  while (numArr[8] != MAX || numArr[0] != 1) {

    //Iterates through the array, comparing each number to the next one
    for (int c1 = 0, c2 = 1; c1 < MAX; c1++, c2++) {

      //If the first number is larger than the second, swap them
      if (numArr[c1] > numArr[c2]) {
        //Testing feature to see what is being  selected
        //printf("%d, %d \n", numArr[c1], numArr [c2]);

        //Calls the swap function to swap the two numbers
        swap(&numArr[c1], &numArr[c2]);

        //Prints the current state of the array after each swap
        printValues(numArr);
  
      };
    };
  };
  printf("Sorting Done \n");
};


//Function to swap two integers
void swap(int* firNum, int* secNum) {

  //Testing feature to see what is being swapped
  //printf("Swapping: %d, %d \n", *firNum, *secNum);
  
  //Swaps the two integers using a temporary variable
  int temp = *firNum;
  *firNum = *secNum;
  *secNum = temp;
};


int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: ");
  printValues(&values);

  //test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n\n", x, y);

  printf("\nNumbers sorting...\n");
  sort(&values);
  printf("\nAfter: ");
  printValues(&values);
  
  return(0);
}

