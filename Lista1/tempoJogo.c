#include <stdio.h>

int main () {
  int i, f;
  scanf("%d %d", &i, &f);

  int tempo;

  if (i >= f) {
    tempo = (24 - i) + f;
  }
  else {
    tempo = f - i;
  }
  
  printf("O JOGO DUROU %d HORA(S)\n", tempo );
}