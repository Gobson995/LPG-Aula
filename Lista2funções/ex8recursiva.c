#include <stdio.h>

int soma(int n) {
  if (n == 1) return 1;
  return n + soma(n-1);
}

int main () {
  int n;
  scanf("%d", &n);

  printf("A soma de 1 até %d é: %d\n", n, soma(n));
}