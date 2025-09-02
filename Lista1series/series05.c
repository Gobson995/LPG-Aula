#include <stdio.h>
#include <math.h>

int main () {
  int n,x;
  printf("Qual o valor de n?\n");
  scanf("%d", &n);
  printf("Qual o valor de x?\n");
  scanf("%d", &x);


  double denominador;
  double e = 0;
  
  for (int i = 0; i <= n; i++) {
    if (i == 0) {
      denominador = 1.0;
    }
    else {
      denominador *= i;
    }

    e += (1.0 * pow(x,i)/denominador);
  }

  printf("O valor da constante e é: %.10lf\n", e);
}