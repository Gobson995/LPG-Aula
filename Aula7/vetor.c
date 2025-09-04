#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main () {
  int v[MAX];

  for (int i = 0; i < MAX; i++) {
    scanf("%d", &v[i]);
  }

  for (int i = 0; i < MAX; i++) {
    printf("%d : %d\n", i, v[i]);
  }

  return 0;
}