#include <stdio.h>

void inverte(char s[]) {
  int tamanho = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    tamanho = i;
    tamanho++;
  }

  char invertido[tamanho+1];

  int j = 0;
  for (int i = (tamanho - 1); i >= 0; i--) {
    invertido[j] = s[i];
    j++;
  }

  printf("%s\n", invertido);
}

int main () {
  char s[100];

  scanf("%s", s);

  inverte(s);
}