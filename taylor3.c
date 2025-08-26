#include <stdio.h>


double calcula_ex(double x, int n);
double calcula_ex_rec (double x, int n, int i, double termo);

int main () {
  double x;
  int n;
  
  printf("Digite x e a quantidade de termos n: ");
  scanf("%lf%d", &x, &n);

  double ex = calcula_ex_rec(x,n,0,1);
  
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

double calcula_ex_rec (double x, int n, int i, double termo) {
  if (i <= n) {
    return termo + calcula_ex_rec(x, n, i+1, termo*x/(i+1));
  }
  else {
    return 0;
  }
}

