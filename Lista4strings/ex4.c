#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {
  char s[20], outra[20];

  scanf("%s", s);

  int opa = 0;

  for (int i = strlen(s) - 1; i >= 0; i--) {
    outra[opa] = s[i];
    opa++;
  }

  bool verifica = true;

  for (int i = 0; i < strlen(s); i++) {
    if (outra[i] != s[i]) {
       verifica = false;
       break;
    }
  }

  if (verifica) printf("É um palíndromo\n");
  else printf("Não é um palíndromo\n");
}