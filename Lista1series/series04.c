#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);

  double denominador;
  double e = 0;
  

  for (int i = 0; i <= n; i++) {
    if (i == 0) {
      denominador = 1;
    }
    else {
      denominador *= i;
    }

    e += (1.0/denominador);
  }

  printf("O valor da constante e é: %.10lf\n", e);
}