#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5

int main () {
  int mat[LIN][COL];

  int v[5];

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      mat[i][j] = rand() % 10;
    }
  }
  
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      if (j == i) {
        v[i] = mat[i][j];
      }
    }
  }

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%d ", mat[i][j]);
      }
      printf("\n");
    }
  

  for (int i = 0; i < 5; i++) {
    printf("MAT[%d][%d] = %d\n", i, i, v[i]);
  }

}