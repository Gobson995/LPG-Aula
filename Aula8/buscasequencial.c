#include <stdio.h>

int busca_seq (int v[], int n, int b) {
  for (int i = 0; i < n; i++) {
    if (v[i] == b) {
      return i;
    }
  }
  return -1;
}

// vetor desordenado
int main () {
  int n;
  scanf("%d", &n);
  int v[n];

  for (int i = 0; i < n; i++) {
    scanf("%d",&v[i]);
  }

  int b;
  scanf("%d", &b);

  int resp = busca_seq(v,n,b);

  if (resp == -1) {
    printf ("Esse número não tem no seu vetor!\n");
  }
  else {
    printf ("O seu número aparece primeiro na posição: %d\n", resp);
  }


}