#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

int main () {
  int mat[LIN][COL];

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      mat[i][j] = rand() % 10;
    }
  }

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%1d ", mat[i][j]);
    }
    printf("\n");
  }

}