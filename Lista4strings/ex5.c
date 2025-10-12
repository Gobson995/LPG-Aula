#include <stdio.h>
#include <string.h>

int main () {
  char s[20];

  scanf("%s", s);

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      int ver = s[i] - 'a';
      char opa =  'A' + ver;
      s[i] = opa;
    }
  }

  printf("%s\n", s);
}