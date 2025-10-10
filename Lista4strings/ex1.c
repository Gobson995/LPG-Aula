#include <stdio.h>
#include <string.h>

int contem (char s[], char c) {
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == c) return 1;
  }
  return 0;
}  

int main() {
  char s[100], c;
  
  scanf("%c %s", &c, s);

  if (contem(s,c)) printf("Contém\n");
  else printf("Não contém\n");
}