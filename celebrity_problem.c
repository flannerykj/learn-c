#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool doesAKnowB(int a, int b) {
  // mock for testing where 3 is celeb:
  if (b == 3) return true;
  if (a == 3) return false;

  return false;
}

int find_celebrity(int guests[], int n) {

  int a = 0;
  int b = n - 1;

  while (a < b) {
    bool aKnowsB = doesAKnowB(a, b);

    if (aKnowsB) {
      // a cannot be celeb
      a++;
    } else {
      // a does not know b - b cannot be celeb
      b--;
    }
  }

  // check if b is celeb (a will have same value)

  for (int i = 0; i < n; i++) {
    if (i != b && (!doesAKnowB(i, b) || doesAKnowB(b, i))) {
      return -1;
    }
  }

  return b;
}



int main() {
  int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int celeb = find_celebrity(array, 10);
  printf("celeb is: %d", celeb);
  return 0;
}
