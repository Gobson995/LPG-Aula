#include <stdio.h>

int main () {
  double x;
  int n;
  
  printf("Digite x e a quantidade de termos n: ");
  scanf("%lf%d", &x, &n);

  double ex = 0;
  
  for (int i = 0; i <= n; i++) {
    double pot = 1;
    int fat = 1;
    for (int j = 1; j <= i; j++) {
      pot *= x;
      fat *= j;
    }
    ex = ex + pot / fat;
  }
  
  printf("e elevado a %.0lf = %.15lf\n", x, ex);

  return 0;
}