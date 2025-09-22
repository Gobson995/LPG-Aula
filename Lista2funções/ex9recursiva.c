#include <stdio.h>

double soma_harmonica(int n) {
  if (n == 1) return 1;
  double resp = 1.0/n;

  return resp + soma_harmonica(n-1);
}

int main () {
  int n;
  scanf("%d", &n);

  printf("O resultado da soma harmonica de 1 até %d é: %.10lf\n", n, soma_harmonica(n));
}