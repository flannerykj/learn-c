#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int id;
  struct node * next;
} node;

int main() {
  node * head = (node *) malloc(sizeof(node));
  head->id = 0;

  node * second = (node *) malloc(sizeof(node));
  second->id = 1;

  head->next = second;

  node * nextNode = head;
  while (nextNode != NULL) {
    printf("At node: %d\n", nextNode->id);
    nextNode = nextNode->next;
  }
  return 0;
}
