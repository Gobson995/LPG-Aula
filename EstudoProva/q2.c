#include <stdio.h>

int maximo_produto (int v[], int n) {
  int resp = v[0] * v[1];
  for (int i = 1; i < (n-1); i++) {
    if ((v[i] * v[i+1]) > resp) {
      resp = v[i] * v[i+1];
    }
  }

  return resp;
}

int main () {
  int v[9] = {-23,4,-5,99,-27,329,-2,7,-921};

  int n = 9;

  int resp = maximo_produto(v, n);

  printf("%d\n", resp);
}