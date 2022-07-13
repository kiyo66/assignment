#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3

int main() {
  int i, head = 0, tail = 0;
  char name[10];

  srand((unsigned int)time(NULL));

  printf("Tossing a coin...\n");
  
  for(i = 0; i < m; i++) {
    printf("Round %d: ", i+1);

    if((rand() % 2) == 1) {
      head++;
      printf("Heads\n");
    } else {
      tail++;
      printf("Teils\n");
    }
  }

  printf("Heads: %d, Tails: %d\n", head, tail);

  if(head == 2) {
    printf("%s won!\n", name);
  } else {
    printf("%s lost!\n", name);
  }

  return 0;
}