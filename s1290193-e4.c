#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define m 3

int main() {
  int i, head = 0, tail = 0;
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

  return 0;
}