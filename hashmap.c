#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <strdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
  char  name [MAX_NAME];
  int   age;
  //...add orther stuff later, maybe
} person;

unsigned int hash(char *name){
  return 5;
}

int main() {
  printf("Jacob => %u\n",hash("Jacob"));
  printf("Nathan => %u\n",hash("Nathan"));
  printf("Claire => %u\n",hash("Claire"));
  return 0;
}