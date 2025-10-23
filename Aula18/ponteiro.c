#include <stdio.h>

int main () {
  int v[3] = {5, 6, 7};

  for (int i = 0; i < 3; i++) {
    printf("%d\n", *(v+i));
  }
}

// funciona