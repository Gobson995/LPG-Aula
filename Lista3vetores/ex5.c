#include <stdio.h>

int busca_seq_rec(int v[],int n, int chave) {
  if (n == 0) return -1;
  else if (v[n-1] == chave) return n-1;
  return busca_seq_rec (v,n-1,chave);
}

int main () {
  int n;
  scanf("%d", &n);

  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  int chave;
  scanf("%d", &chave);

  int indices[n];

  for (int i = 0; i < n; i++) {
    indices[i] = -1;
  }

  for (int i = 0; i < n; i++) {
    int ind = busca_seq_rec(v, n, chave);
    if (ind == -1) break;
    else {
      indices[i] = ind;
      v[ind] = -1;
    }
  }

  printf("Indices = ");
  for (int i = 0; i < n; i++) {
    printf("%d ", indices[i]);
  }
  printf("\n");
  
}