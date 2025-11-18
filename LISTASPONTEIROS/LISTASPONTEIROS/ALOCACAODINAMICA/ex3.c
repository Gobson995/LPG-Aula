#include <stdio.h>
#include <stdlib.h>

float *adiciona_valores(int *tam);
float *media(float *p, int *tam, int *newTam);

int main(){
    int tam;
    float *p = adiciona_valores(&tam);

    int newTam;
    float *new = media(p, &tam, &newTam);

    for(int i = 0;i < (newTam-1);i++){
        printf("v[%d]: %f \n", i, new[i]);
    }

    free(p);
    free(new);

    return 0;

}

float *adiciona_valores(int *tam){
    printf("Digite valores para adicionar no vetor (digite -1 caso queria sair)");
    *tam = 1;
    float *p = NULL;
    p = malloc(sizeof(float) * (*tam));
    while(1){
        printf("v[%d]: ", (*tam)-1);
        float k; scanf("%f", &k);

        if(k == -1) break;

        p[(*tam)-1] = k;
        (*tam)++;

        p = realloc(p, sizeof(float) * (*tam));
    }

    return p;
}

float *media(float *p, int *tam, int *newTam){

    float *new = NULL;
    (*newTam) = 1;
    new = malloc(sizeof(float) * (*newTam));


    float soma = 0;
    for(int i = 0;i < (*tam);i++){
        soma += p[i];
    }   

    float media = (soma)/((*tam) - 1);
    
    for(int i = 0;i < (*tam);i++){
        if(p[i] >= media){
            new[(*newTam) - 1] = p[i];
            (*newTam)++;
            new = realloc(new, sizeof(float) * (*newTam));
        }
    }
    
    return new;
}