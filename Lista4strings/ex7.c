#include <stdio.h>
#include <string.h>
#include <math.h>


int eh_numero (char s[]) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] > '9' || s[i] < '0') return 0;
  }
  return 1;
}

int numero (char s[]) {
  int conta = 0;
  int j = 0;

  for (int i = strlen(s) - 1; i >= 0; i--) {
    conta += (s[j] - '0') * pow(10,i);
    j++;
  }

  return conta;
}

int main () {
  char str[20];
  
  scanf("%s", str);

  if(eh_numero(str)) {
    printf("Tem apenas digitos\n");
    printf("O numero é %d\n", numero(str));
  }
  else {
    printf("Não tem apenas digitos\n");
  }
}

// na hora de compilar, precisa usar -lm, por causa do pow (mas da de fazer sem)