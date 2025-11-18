#include <stdio.h>
#include <stdlib.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(){
    int tam = 5;
    float vec[tam];
    float pMax;
    int pIndice;
    printf("A seguir digite os valores do vetor\n");

    for(int i = 0;i < tam;i++){
        printf("vec[%d]: ", i);
        scanf("%f", &vec[i]);
    }
    pMax = vec[0];
    pIndice = 0;


    max_vetor(vec, tam, &pMax, &pIndice);
    printf("O maior valor é %f e o índice é %d \n", pMax, pIndice);
}

void max_vetor(float vec[], int tam, float *pMax, int *pIndice){
    for(int i = 0;i < tam;i++){
        if(vec[i] >= (*pMax)){
            (*pMax) = vec[i];
            (*pIndice) = i;
        }
    }
}