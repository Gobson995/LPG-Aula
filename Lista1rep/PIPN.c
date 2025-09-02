#include <stdio.h>
#include <stdlib.h>

int main () {
int n;
scanf("%d", &n);

int valores[n];

int par = 0, impar = 0, posit = 0, negat = 0;

for (int i = 0; i < n; i++) {
  scanf("%d", &valores[i]);

  if (valores[i] % 2 == 0) {
    par++;
  }
  else {
    impar++;
  }
  if (valores[i] > 0) {
    posit++;
  }
  else if (valores[i] < 0) {
    negat++;
  }
}

printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, posit, negat);
}