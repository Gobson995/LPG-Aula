#include <stdio.h>

int soma_especial(int n, int k, int x) {
  if (x % k == 0) {
    return 1;
  }
  else return 0;
}

int main () {
  int n, k, x;
  scanf("%d %d %d", &n, &k, &x);

  int parada = 0;
  int soma = 0;

  printf("A resposta é:\n");


  while (parada < n) {
    if (soma_especial(n, k, x) == 1) {
      printf("%d ", x);
      parada++;
      soma += x;
    }
    x++;
  }
  printf("= %d\n", soma);
}