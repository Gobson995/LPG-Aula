#include <stdio.h>
#include <stdbool.h>

bool ver_primo (int k) {
  int cont = 0;
  for (int i = 1; i <= k; i++) {
    if (k % i == 0) {
      cont++;
    }
  }

  if (cont == 2) return true;
  else return false;
}

int main () {
  int k, n;
  scanf("%d %d", &k, &n);

  int comeco = k;
  int parada = 0;
  int v[n];
  k++;

  while (parada < n) {
    if (ver_primo(k)) {
      v[parada] = k;
      parada++;
    }
    k++;
  }

  printf("Os %d valores acima de %d que são primos são:\n", n, comeco);

  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}