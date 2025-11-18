#include <stdio.h>
#include <stdlib.h>

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 );
int *define(int n);

int main(){
    printf("Digite o tamanho do primeiro vetor: \n");
    int n1; scanf("%d", &n1);
    int *v1 = define(n1);

    printf("Digite o tamanho do segundo vetor: \n");
    int n2; scanf("%d", &n2);
    int *v2 = define(n2);

    int p3 = 0;
    int *v3 = uniao(v1, n1, v2, n2, &p3);

    printf("Esse é o vetor união: \n");

    for(int i = 0;i < p3;i++){
        printf("uniao[%d]: %d\n", i, v3[i]);
    }

    free(v1);
    free(v2);
    free(v3);

}

int *uniao( int *v1, int n1, int *v2, int n2, int *p3 ){
    int *p = malloc(sizeof(int) * 1);

    for(int i = 0;i < n1;i++){
        for(int j = 0;j < n2;j++){
            if(v1[i] == v2[j]){
                p[(*p3)] = v1[i];
                (*p3)++;
                p = realloc(p, sizeof(int) * (*p3));
            }
        }
    }

    return p;
}

int *define(int n){
    int *p = malloc(sizeof(int) * n);
    printf("Digite os valores de V \n");

    for(int i = 0;i < n;i++){
        printf("v[%d]: ", i);
        scanf("%d", &p[i]);
    }

    return p;

}
