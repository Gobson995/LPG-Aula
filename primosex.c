#include <stdio.h>
#include <stdbool.h>

bool primos (int k) {
  bool ver = 0;
  int contador = 0;

  for (int i = 1; i <= k; i++){
    if (k % i == 0) {
      contador++;
    }
  }
  
  if (contador == 2) ver = 1;

  return ver;
}

int main () {
  int n, k;

  scanf("%d %d", &n, &k);

  int cont = 0;
  while (cont < n) {
    if (primos(k)) {
      printf ("%d ", k);
      cont++;
    }
   k++;
  }
}