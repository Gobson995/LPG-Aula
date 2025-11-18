#include <stdio.h>
#include <stdlib.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main(){
    float mat[3][4];
    float pMin;
    int pI;
    int pJ;
    printf("A seguir digite os valores da matriz\n");

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 4;j++){
        printf("mat[%d][%d]: ", i, j);
        scanf("%f", &mat[i][j]);
        }
    }
    pMin = mat[0][0];
    pI = 0;
    pJ = 0;


    min_matriz(mat, &pMin, &pI, &pJ);   
    printf("O menor valor é %f e o índice é I: %d e J: %d \n", pMin, pI, pJ);
}

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 4;j++){
            if((*pMin) > mat[i][j]){
                (*pMin) = mat[i][j];
                (*pI) = i;
                (*pJ) = j;
            }
        }
    }
}