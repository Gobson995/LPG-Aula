#include <stdio.h>



int main () {
  char s[20];

  scanf("%s", s);

  int opa = 1;

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] < '0' || s[i] > '9') {
      opa = 0;
      break;
    }
  }

  if (opa == 1) printf("Contém somente dígitos decimais\n");
  else printf("Não contém somente dígitos decimais\n");
}