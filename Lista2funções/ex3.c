#include <stdio.h>
#include <stdbool.h>

bool verifica (char carac) {
  if (carac >= '0' && carac <= '9') return true;
  
  return false;
}

int main () {
  char carac;
  scanf ("%c", &carac);

  if (verifica(carac)) {
    int valor = carac - '0';
    printf("O caracter é um dígito e representa o: %d\n", valor);
  }
  else {
    printf("O caracter não é um dígito\n");
  }
}