#ifndef _PERSON_H_
#define _PERSON_H_

struct Person {
  char *name;    // 8 byte
  char *surname; // 8 byte
  int age;       // 4 byte
};

typedef struct Person Person;

Person person_create(char *name, char *surname, int age);
void person_print(Person *this);

#endif