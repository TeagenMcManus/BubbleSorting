#include <stdio.h>
const int MAX = 9;

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: ");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);
  
  return(0);
}

void printValues(int* numArr[]) {
  
  printf("[");
  
  for (int i = 0; i < 9; i++) {
    printf("%d, ", numArr[i]);
      
  };
  printf("]\n");
};

void sort(int*) {
  printf("FOund it 2");
};
void swap(int*, int*) {
  printf("FOund it 3");
};

