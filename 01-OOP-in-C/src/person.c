#include "person.h"
#include <stdio.h>

void person_print(Person *this) {
  printf("Person\n\tname: %s\n\tsurname:%s\n\tage: %d\n\n", this->name,
         this->surname, this->age);
}

Person person_create(char *name, char *surname, int age) {
  Person person;

  person.name = name;
  person.surname = surname;
  person.age = age;

  return person;
}