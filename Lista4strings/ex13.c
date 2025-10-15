#include <stdio.h>

void substring (char str[], int ini, int n, char sub[]) {
  int pos = 0;
  while (str[ini] != '\0' && n > 0) {
    sub[pos] = str[ini];
    n--;
    ini++;
    pos++;
  }

  sub[pos] = '\0';
}

int main () {
  char str[100], sub[100] = " ";
  int ini, n;

  fgets(str, sizeof(str), stdin);

  for (int i = 0; str[i]; i++) {
    if (str[i] == '\n') str[i] = '\0';
  }
    
  scanf("%d %d", &ini, &n);

  substring(str, ini, n, sub);
  
  printf("%s\n", sub);
}