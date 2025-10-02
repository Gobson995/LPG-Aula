#include <stdio.h>

void busca_todos(int v[], int n, int chave, int indices[]) {
  for (int i = 0; i < n; i++) {
    indices[i] = -1;
  }
  int lugar = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == chave) {
      indices[lugar] = i;
      lugar++;
    }
  }

  printf("Indices = ");
  for (int i = 0; i < n; i++) {
    printf("%d ", indices[i]);
  }
  printf("\n");
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

  busca_todos(v, n, chave, indices);
}