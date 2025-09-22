#include <stdio.h>
#define int long long

int fat(int n) {
  if (n == 0 || n == 1) return 1;
  return n * fat(n-1);
}

double soma_e (int n) {
  if (n == 0) return 1.0;
  double soma = 1.0/fat(n);
  return soma + soma_e(n-1);
}



int main () {
  int n;
  scanf("%lld", &n);

  printf("O resultado do valor de e de 1 até %lld é: %.10lf\n", n, soma_e(n));
}