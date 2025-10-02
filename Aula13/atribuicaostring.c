#include <stdio.h>
#include <string.h>

int main () {
  char str[10];
  
  scanf("%s", str);

  strcpy(str,"123");

  printf("%s\n", str);
}