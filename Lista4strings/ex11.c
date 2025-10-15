#include <stdio.h>

void exclui (char s[], char c) {
  char resp[100] = "";

  int j = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != c) {
      resp[j] = s[i];
      j++;
    }
  }

  printf("%s\n", resp);

}

int main () {
  char s[100], c;

  scanf("%s %c", s, &c);

  exclui(s,c);
}