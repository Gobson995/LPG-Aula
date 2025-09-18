#include <stdio.h>

int maior (int x, int y, int z) {
  int teste;
  if (x > y) {
    teste = x;
    x = y;
    y = teste;
  }
  if (y > z) {
    teste = y;
    y = z;
    z = teste;
  }
  if (x > y) {
    teste = x;
    x = y;
    y = teste;
  }

  return z;
}

int main () {
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);

  int resp = maior(x,y,z);

  printf("O maior número é: %d\n", resp);
}

// fiz do mesmo jeito no exercicio 1