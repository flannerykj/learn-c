#include <stdio.h>


typedef struct {
  char * name;
  int birthyear;
  char * address;
} person;

void move_in(person * p) {
  p->address = "109 howland ave";
  printf("%s moved in to %s", p->name, p->address);
}

int main() {
  person me; // init a person
  person * doppleganger = (person *) malloc(sizeof(person)); // init a pointer to a person
  doppleganger = &me;
  me.name = "Flannery";
  printf("%s", me.name);
  move_in(&me);
  return 0;
}


