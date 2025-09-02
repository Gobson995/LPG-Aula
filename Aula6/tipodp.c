#include <stdio.h>
#include <stdlib.h>

long long int v[100];

long long int fibo (int n) {
  if (n == 1 || n == 2) {
    return 1;
  }
  
  if (v[n-1] == 0) {
    v[n-1] = fibo(n-1) + fibo(n-2);
  }
  return v[n-1];
}

int main () {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%d : %lld\n", i, fibo(i));
  }
}