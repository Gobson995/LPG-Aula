#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int soma = 0;

    if (x > y) {
        int outro = x;
        x = y;
        y = outro;
    }

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);
}