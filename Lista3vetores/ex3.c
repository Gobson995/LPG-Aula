#include <stdio.h>
#include <stdbool.h>

bool primo (int a) {
  if (a == 1) return false;
  for (int i = 2; i <a; i++) {
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

int soma_primos(int v[], int n) {
  int soma = 0;
  for (int i = 0; i < n; i++) {
    if (primo(v[i])) soma += v[i];
  }

  return soma;
}

int main () {
  int n;
  scanf("%d", &n);

  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  printf ("A soma dos primos desse vetor é:\n");
  printf("%d\n", soma_primos(v,n));
}