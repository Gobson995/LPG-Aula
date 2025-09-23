#include <stdio.h>
#define int long long

signed fat(int n) {
  if (n == 0 || n == 1) return 1;
  return n * fat(n-1);
}

long double soma_e (int n) {
  if (n == 0) return 1.0;
  double soma = 1.0/fat(n);
  return soma + soma_e(n-1);
}



signed main () {
  int n;
  scanf("%lld", &n);

  printf("O resultado do valor de e de 1 até %lld é: %.10Lf\n", n, soma_e(n));
}