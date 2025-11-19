#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
    if(a >= b) return a;
    else return b;
}

int min(int a, int b){
    if(a <= b) return a;
    else return b;
}

void max_min(int vec[], int tam, int *pMin, int *pMax){
    for(int i = 0; i < tam; i++){
        (*pMin) = min((*pMin), vec[i]);
        (*pMax) = max((*pMax), vec[i]);
    }
}




int main(){
    int n = 5, v[n];
    int pMin = 1e9+7, pMax = -1e9-7;

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    max_min(v, n, &pMin, &pMax);
    printf("O maior valor é %d e o menor é %d \n", pMax, pMin);
}
