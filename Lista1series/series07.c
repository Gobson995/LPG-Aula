#include <stdio.h>

int numerador (int base, int exp) {
  int resp = 1;
  for (int i = 1; i <= exp; i++) {
     resp *= base;
  }
  return resp;
}

int denominador (int base) {
  int fat = 1;
  for (int i = 1; i <= base; i++) {
    fat *= i;
  }
  return fat;
}

int main () {
  int n,x;
  printf("Qual o valor de n?\n");
  scanf("%d", &n);
  printf("Qual o valor de x?\n");
  scanf("%d", &x);

  double cosseno = 0.0;

  for (int i = 0; i < n; i++) {
    int m = (2*i);
    
    if (i % 2 == 0) {
      cosseno += (1.0*numerador(x,m)/denominador(m));
    }
    else {
      cosseno -= (1.0*numerador(x,m)/denominador(m));
    }
  }

  printf("O cosseno de %d é: %.10lf\n", x, cosseno);
}