#include <stdio.h>

double soma_harmonica (int n) {
  double soma = 0;
  for (int i = 1; i <= n; i++) {
    soma += 1.0/i;
  }
  return soma;
}

int main () {
  int n;
  scanf("%d", &n);

  printf("O resultado da soma harmonica de 1 até %d é: %.10lf\n", n, soma_harmonica(n));
}