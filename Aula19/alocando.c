#include <stdio.h>
#include <stdlib.h>

int main () {
  int *p, n;

  printf("Quantos valores? ");
  scanf("%d", &n);
  
  p = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    printf("P[%d] = ", i);
    scanf("%d", p + i);
  }

  for (int i = 0; i < n; i++) {
    printf("P[%d] : %d\n", i, p[i]);
  }

  free(p);
}