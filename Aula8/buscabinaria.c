#include <stdio.h>

int busca_binaria (int v[], int n, int b) {
  int l = 0;
  int r = n-1;
  while (l<=r) {
    int mid = (l+r)/2;
    if (v[mid] == b) {
      return mid;
    }
    else if (v[mid] > b) {
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  return -1;
}

int main () {
  int n;
  scanf("%d", &n);
  int v[n];

  for (int i = 0; i < n; i++) {
    scanf("%d",&v[i]);
  }

  int b;
  scanf("%d", &b);

  int resp;
  resp = busca_binaria (v, n, b);

  if (resp == -1) {
    printf ("Esse número não tem no seu vetor!\n");
  }
  else {
    printf ("O seu número aparece primeiro na posição: %d\n", resp);
  }


}