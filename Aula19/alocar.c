#include <stdio.h>
#include <stdlib.h>

int main () {
  float *p, x;
  p = malloc(sizeof(float));
  scanf("%f", p); // 7.5
  printf("%f\n", *p);
  x = *p;
  printf("end. de x:%p\n",(void*) &x); // 1008
  printf("end. alocado:%p\n",(void*) p); // 5000
  free(p);
}