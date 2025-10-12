#include <stdio.h>


void concatena (char str1[], char str2[]) {
  int tamanho1 = 0, tamanho2 = 0;
  while(str1[tamanho1] != '\0') {
    tamanho1++;
  }
  while(str2[tamanho2] != '\0') {
    tamanho2++;
  }

  int opa = 0;

  for (int i = tamanho1; i < (tamanho1 + tamanho2); i++) {
    str1[i] = str2[opa];
    opa++;
  }

  printf("%s\n", str1);

}

int main () {
  char p1[100], p2[50];

  scanf("%s %s", p1, p2);

  concatena(p1,p2);
}