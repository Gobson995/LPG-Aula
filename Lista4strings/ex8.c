#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool verifica(char data[]) {
    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5) {
            if (data[i] != '/') return false;
        } else {
            if (data[i] < '0' || data[i] > '9') return false;
        }
    }
    return true;
}

int transforma(char s[]) {
    int valor = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        valor = valor * 10 + (s[i] - '0');
    }
    return valor;
}

int main() {
    char data[11];

    scanf("%s", data);

    if (!verifica(data)) {
        printf("O formato de data não está correto\n");
    } else {
        char dd[3] = "", mm[3] = "", aaaa[5] = "";

        strncpy(dd, data, 2);
        strncpy(mm, data + 3, 2);
        strncpy(aaaa, data + 6, 4);

        int d = transforma(dd);
        int m = transforma(mm);
        int a = transforma(aaaa);

        printf("Dia: %d\nMês: %d\nAno: %d\n", d, m, a);
    }
}
