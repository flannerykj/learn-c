#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 3;
  int array[] = {4, 5, 6};
  int *array_pointer = (int *) malloc(n * sizeof(int));
  array_pointer = &(array[0]);
  for (int i = 0; i < n; i++) {
    printf("element at %d: %d\n", i, array[i]);
    printf("element at pointer %d: %d\n", i, *(array_pointer + i));
  }
  return 0;
}
