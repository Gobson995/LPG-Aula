#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, qtdP = 0, qtdN = 0;

    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));

    int *vp = NULL;
    int *vn = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);

        if (v[i] > 0) {
            qtdP++;
            vp = (int *) realloc(vp, qtdP * sizeof(int));
            vp[qtdP - 1] = v[i];
        } 
        else {
            qtdN++;
            vn = (int *) realloc(vn, qtdN * sizeof(int));
            vn[qtdN - 1] = v[i];
        } 
    }

    printf("\nVetor original:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    printf("\n\nVetor de positivos:\n");
    for (int i = 0; i < qtdP; i++)
        printf("%d ", vp[i]);

    printf("\n\nVetor de negativos:\n");
    for (int i = 0; i < qtdN; i++)
        printf("%d ", vn[i]);

    printf("\n");

    free(v);
    free(vp);
    free(vn);

    return 0;
}
