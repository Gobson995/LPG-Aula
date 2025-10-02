#include <stdio.h>

void fibonacci (int v[], int n) {
  v[0] = 1;
  v[1] = 1;

  for (int i = 2; i < n; i++) {
    v[i] = v[i-1] + v[i-2];
  }

  printf("O %d números da sequência fibonacci são:\n", n);
  
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");


}

int main () {
  int n;
  scanf("%d", &n);

  int v[n];

  fibonacci(v, n);
}