#include <stdio.h>

int main () {
   long long int n;
  printf("Digite a quantidade de termos: ");
  scanf("%lli", &n);

   long long int a = 1, b = 1, atual;

  printf("1 : 1\n2 : 1\n");

  for(long long int i = 3; i <=n; i++) {
    atual = a + b;
    printf("%lld : %lld\n", i, atual);
    a = b;
    b = atual;
  }
}