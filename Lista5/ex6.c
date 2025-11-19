#include <stdio.h>
#include <stdlib.h>

void max_vetor(float vec[], int tam, float *pMax, int *pIndice){
    for(int i = 0; i < tam; i++){
        if(vec[i] >= (*pMax)){
            (*pMax) = vec[i];
            (*pIndice) = i;
        }
    }
}

int main () {
  int n = 5;
  float v[n], pMax, pIndice;

  for(int i = 0; i < n; i++){
    scanf("%f", &v[i]);
  }
  pMax = v[0];
  pIndice = 0;

  max_vetor(v, n, &pMax, &pIndice);
  printf("O maior valor é %f e o índice é %d \n", pMax, pIndice);


}