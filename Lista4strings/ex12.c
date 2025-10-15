#include <stdio.h>

int compara (char str1[], char str2[]) {
  int pos = 0;
  while (str1[pos] != '\0' && str2[pos] != '\0') {
    if (str1[pos] != str2[pos]) return str1[pos] - str2[pos];
    pos++;
  }

  return 0;
}

int main () {
  char str1[100], str2[100];

  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);

  int resp = compara(str1, str2);

  if (resp == 0) printf("As strings são iguais\n");
  else if (resp < 0) printf("A primeira string vem antes da segunda\n");
  else printf("A segunda string vem antes da primeira\n");
}