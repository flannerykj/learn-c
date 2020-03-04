#include <stdio.h>

int main() {
  int index = 0;
  int index2 = -2;
  int * index_pointer = &index;

  printf("Value of index: %d\n", index);
  printf("Value of index pointer: %d\n", *index_pointer);

  printf("Changing value of index directly...\n");

  index = 3;

  printf("Value of index: %d\n", index);
  printf("Value of index pointer: %d\n", *index_pointer);

  printf("Changing value of index via pointer...\n");

  index_pointer = &index2;

  printf("Value of index: %d\n", index);
  printf("Value of index pointer: %d\n", *index_pointer);
  return 0;
}

void check_values() {
}
