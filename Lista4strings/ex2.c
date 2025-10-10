#include <stdio.h>
#include <string.h>

int contem (char s[], char c) {
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == c) return 1;
  }
  return 0;
}  

int conta (char s[], char c) {
  int resp = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == c) resp++;
  }

  return resp;
}

int main() {
  char s[100], c;
  
  scanf("%c %s", &c, s);

  if (contem(s,c)) {
    int resp = conta(s,c);
    printf("Contém %d caracteres\n", resp);
  }  
  else printf("Não contém nenhum\n");
}