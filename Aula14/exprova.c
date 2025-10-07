#include <stdio.h>

int contem (char s[], char c) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) return 1;
  }
  return 0;
}

int main () {
  char str[20], car;
  
  scanf("%s", str);

  scanf(" %c", &car);

  if(contem(str,car)) {
    printf("Contem\n");
  }
  else {
    printf("Não contem\n");
  }
}