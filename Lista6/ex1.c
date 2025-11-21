#include <stdio.h>
#include <stdlib.h>

float *clone (float *v, int n) {
  float *p;
  p = malloc(sizeof(float) * n);

  for(int i = 0; i < n; i++) {
    p[i] = v[i];
  }

  return p;
}

int main () {
  int n;
  

  scanf("%d", &n);

  float v[n];

  for(int i = 0;i < n;i++){
    scanf("%f", &v[i]);
  } 

  float *p = clone(v, n);

  for (int i = 0; i < n; i++) {
    printf("p[%d]: %f\n", i, p[i]);
  }

  free(p);
  return 0;
}