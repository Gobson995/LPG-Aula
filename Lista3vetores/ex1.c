#include <stdio.h>
#include <stdbool.h>

int compara (float a[], float b[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) return 0;
  }
  return 1;
}

int main () {
  int n;
  scanf("%d", &n);

  float a[n], b[n];

  for (int i = 0; i < n; i++) {
    scanf("%f", &a[i]);
  }

  for (int i = 0; i < n; i++) {
    scanf("%f", &b[i]);
  }

  bool resp = compara(a,b,n);

  if (resp) printf("Os vetores são iguais\n");
  else printf("Os vetores não são iguais\n");
}