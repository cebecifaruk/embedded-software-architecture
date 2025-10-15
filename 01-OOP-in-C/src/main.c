#include "person.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

Person john; // Global Variable

void scope() {
  john.name = "John";
  john.surname = "Doe";

  Person alice = person_create("John", "Doe", 30); // A = Stack

  (void)alice;

  Person *bob = (Person *)malloc(sizeof(Person));

  bob->name = "Bob";
  bob->surname = "Smith";

  person_print(&john);
  person_print(&alice);
  person_print(bob);

  free(bob);
}

int main() {
  char buffer[5];
  scanf("%s", buffer);
  scope();
}