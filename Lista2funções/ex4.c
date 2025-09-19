#include <stdio.h>

int soma_impares (int x, int y) {
  int soma = 0;
  if (y < x) {
    int teste = x;
    x = y;
    y = teste;
  }

  for (int i = x + 1; i < y; i++){
    if (i % 2 != 0) {
      soma += i;
    }
  }

  return soma;
}

int main () {
  int x, y;
  scanf ("%d %d", &x, &y);

  int soma = soma_impares(x, y);

  printf("A soma dos impares entre %d e %d é: %d\n", x, y, soma);
}