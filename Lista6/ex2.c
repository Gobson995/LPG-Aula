#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor (char *s, int n) {
  char *p;
  int b = 0;
  p = malloc((strlen(s)* n) + 1);

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < strlen(s); j++) {
      p[b] = s[j];
      b++;
    }
  }

  p[n*strlen(s)+1] = 0;

  return p;
}

int main () {
  int n; 
  scanf("%d", &n);

  char s[n];
  scanf("%s", s);

  int k; 
  scanf("%d", &k);

  char *p = repetidor(s, k);
  printf("%s\n", p);

  free(p);
}