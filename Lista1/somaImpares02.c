#include <stdio.h>

int somaI (int x, int y) {
  int soma = 0;

    if (x > y) {
        int outro = x;
        x = y;
        y = outro;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}



int main () {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", somaI(x,y));
  }
  
}