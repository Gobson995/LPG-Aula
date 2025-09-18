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
  
  int c = COL - 1;
  for (int i = 0; i < LIN; i++) {
    v[i] = mat[i][c];
    c--;
  }


  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%d ", mat[i][j]);
      }
      printf("\n");
    }
  
    int col = COL - 1;
  for (int i = 0; i < LIN; i++) {
    printf("MAT[%d][%d] = %d\n", i, c, v[i]);
    c--;
  }

}