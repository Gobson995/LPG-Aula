#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    double somatorio = 0.0;

    for (int i = 1; i <= k; i++) {
        printf("+(1/%d)", i);
        somatorio += 1.0 / i;
    }

    printf("\nO somatório da série harmônica é igual a: %.10f\n", somatorio);
}
