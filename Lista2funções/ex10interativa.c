#include <stdio.h>
#define int long long

double soma_e (int n) {
  double soma = 0.0;

  int fatorial = 1;
  for (int i = 0; i <= n; i++) {
    if (i>0) fatorial *= i;
    soma += 1.0/fatorial;
  }
  return soma;
}

int main () {
  int n;
  scanf("%lld", &n);

  printf("O resultado do valor de e de 1 até %lld é: %.10lf\n", n, soma_e(n));
}