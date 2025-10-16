#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

void menores_precos (int m, int n, float mat[m][n], float vet[n]) {
  int indx = -1;
  float conta = 0;
  for (int i = 0; i < m; i++) {
    float aux = 0;
    for (int j = 0; j < n; j++) {
      aux += mat[i][j];
    }
    if (aux > conta) {
      conta = aux;
      indx = i;
    }
  }

  for (int i = 0; i < n; i++) {
    vet[i] = mat[indx][i];
  }
}

int main () {
  float mat[LIN][COL];
  float vet[COL];

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      scanf("%f", &mat[i][j]);
    }
  }

  menores_precos(LIN, COL, mat, vet);


  for (int i = 0; i < COL; i++) {
      printf("%.1f ", vet[i]);
  }
  printf("\n");

}