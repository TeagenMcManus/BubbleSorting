#include <stdio.h>
const int MAX = 9;
//Function to print the values of an integer array
void printValues(int* numArr) {
  
  //Prints the opening bracket
  printf("[");
  
  //Iterates through the array and prints each value
  for (int i = 0; i < 9; i++) {
    printf("%d, ", numArr[i]);
  };

  //Prints the closing bracket
  printf("]\n");
};

//Function to sort the array
void sort(int* values) {

  //checks each value against the next value
  for (int c1 = 0, c2 = 1; c1 < 9; c1++, c2++) {
    if (values[c1] > values[c2]) {
      printf("%d, %d \n", values[c1], values[c2]);
    //  swap(&values[c1], &values[c2]);
    else {
      printf("No swap needed: %d, %d \n", values[c1], values[c2]);
    }
    };
  };
};

void swap(int*, int*) {
  printf("\n");
};

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: ");
  printValues(&values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(&values);
  printf("After: \n");
  printValues(&values);
  
  return(0);
}

