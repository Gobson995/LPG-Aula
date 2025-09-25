#include <stdio.h>

int main () {
  char s[] = "Hello world!!";

  printf("s = %s\n\n", s);

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i+1] == '\0') {
       printf("%c.\n", s[i]);
    }
    else {
      printf("%c, ", s[i]);
    }
  }
  
}