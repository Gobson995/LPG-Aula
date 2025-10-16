#include <stdio.h>

int hiper (int n) {
  int resp = 1;
  while (n > 0) {
    int aux = 1;
    for (int i = 0; i < n; i++) {
      aux *= n;
    }
    resp *= aux;
    n--;
  }

  return resp;
}

int main () {
  int n;
  scanf("%d", &n);

  int resp = hiper(n);

  printf("%d\n", resp);
}