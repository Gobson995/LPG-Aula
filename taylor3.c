#include <stdio.h>


double calcula_ex(double x, int n);

int main () {
  double x;
  int n;
  
  printf("Digite x e a quantidade de termos n: ");
  scanf("%lf%d", &x, &n);

  double ex = calcula_ex(x,n);
  
  printf("e elevado a %.0lf = %.15lf\n", x, ex);

  return 0;
}

double calcula_ex(double x, int n) {
  double resultado = 0;
  double termo = 1;

  for (int i = 0; i <= n; i++) {
    resultado += termo;
    termo *= x/(i+1);
  }
  return resultado;
}
