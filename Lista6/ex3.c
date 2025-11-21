#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cont = 0;
    float media = 0.0;

    scanf("%d", &n);

    float *v = (float *) malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        media += v[i];
    }

    media /= n;

    for (int i = 0; i < n; i++) {
        if (v[i] >= media) cont++;
    }

    float *maiores = (float *) malloc(cont * sizeof(float));
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= media) {
            maiores[j] = v[i];
            j++;
        }
    }

    printf("\nMedia = %.2f\n", media);
    printf("Valores >= media:\n");
    for (int i = 0; i < cont; i++) {
        printf("%.2f ", maiores[i]);
    }
    printf("\n");

    free(v);
    free(maiores);

    return 0;
}
