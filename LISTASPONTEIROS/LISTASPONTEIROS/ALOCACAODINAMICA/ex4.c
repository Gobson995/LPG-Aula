#include <stdlib.h>
#include <stdio.h>

int *vetor(int n);
int *define_pos(int n, int *tamPos, int *p);
int *define_neg(int n, int *tamNeg, int *p);

int main(){
    printf("Defina o tamanho do vetor a seguir: \n");
    int n; scanf("%d", &n);
    int *p = vetor(n);
    int tamPos = 0;
    int tamNeg = 0;

    int *pos = define_pos(n, &tamPos, p);
    int *neg = define_neg(n, &tamNeg, p);

    printf("Todo vetor: \n");
    for(int i = 0;i < n;i++) printf("v[%d]: %d, ", i, p[i]);
    printf("\n");
    printf("Só positivos: \n");
    for(int i = 0;i < tamPos;i++) printf("v[%d]: %d, ", i, pos[i]);
    printf("\n");
    printf("Só negativos: \n");
    for(int i = 0;i < tamNeg;i++) printf("v[%d]: %d, ", i, neg[i]);
    printf("\n");

}

int *vetor(int n){
    int *p = NULL;
    p = malloc(sizeof(int) * n);

    for(int i = 0;i < n;i++){
        printf("v[%d]: ", i);
        scanf("%d", &p[i]);
    }

    return p;
}

int *define_pos(int n, int *tamPos, int *p){
    int *pos = NULL;
    pos = malloc(sizeof(int) * 1);
    for(int i = 0;i < n;i++){
        if(p[i] > 0){
            pos[(*tamPos)] = p[i];
            (*tamPos)++;
            pos = realloc(pos, sizeof(int) * (*tamPos));
        }
    }

    return pos;
}

int *define_neg(int n, int *tamNeg, int *p){
    int *neg = NULL;
    neg = malloc(sizeof(int) * 1);
    for(int i = 0;i < n;i++){
        if(p[i] < 0){
            neg[(*tamNeg)] = p[i];
            (*tamNeg)++;
            neg = realloc(neg, sizeof(int) * (*tamNeg));
        }
    }

    return neg;
}
