#include <stdio.h>
#include <string.h>

void trim(char str[]) {
    int comeco = -1, final = -1;
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            comeco = i;
            break;
        }
    }

    if (comeco == -1) {
        str[0] = '\0';
        return;
    }

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] != ' ') {
            final = i;
            break;
        }
    }

    int pos = 0;
    for (int i = comeco; i <= final; i++) {
        str[pos] = str[i];
        pos++;
    }

    str[pos] = '\0';

    printf("%s\n", str);
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    trim(str);

}
