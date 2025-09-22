#include <stdio.h>

int soma(int n) {
  int soma = 0;
  for(int i = 1; i <= n; i++) {
    soma += i;
  }
  return soma;
}

int main () {
  int n;
  scanf("%d", &n);

  printf("A soma de 1 até %d é: %d\n", n, soma(n));
}