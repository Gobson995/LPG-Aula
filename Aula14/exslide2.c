#include <stdio.h>
#include <string.h>
#include <math.h>


int eh_numero (char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] > '9' || s[i] < '0') return 0;
  }
  return 1;
}

int numero(char s[]) {
  int conta = 0;

  for (int i = 0; i < strlen(s); i++) {
    int digito = s[strlen(s) - 1 - i] - '0';
    conta += digito * pow(10, i);
  }

  return conta;
}

int numero2 (char s[]) {
  int conta = 0;
  int j = 0;

  for (int i = strlen(s) - 1; i >= 0; i--) {
    conta += (s[j] - '0') * pow(10,i);
    j++;
  }
}

int main () {
  char str[20], car;
  
  scanf("%s", str);

  if(eh_numero(str)) {
    printf("Tem apenas digitos\n");
    printf("O numero é %d\n", numero(str));
    printf("O numero é %d\n", numero2(str));
  }
  else {
    printf("Não tem apenas digitos\n");
  }
}