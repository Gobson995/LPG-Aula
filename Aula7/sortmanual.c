#include <stdio.h>
#include <stdlib.h>

#define N 8

int main () {
  int v[N] = {31, 12, 0, 91, 7, -8, 11, 16};

  for (int i = 0; i < N - 1; i++) {
    int indmenor = i;
    for (int j = i + 1; j < N; j++) {
      if (v[j] < v[indmenor]) {
        indmenor = j;
      }
    }
    int aux = v[i];
    v[i] = v[indmenor];
    v[indmenor] = aux;
  }

  printf("O vetor sortado é:\n");

  for (int k = 0; k < N; k++) {
    printf("%d : %d\n", k, v[k]);
  }
}

// for dentro de for é ruim, mas é só para ver como que é...
// existem varios tipos de sorts