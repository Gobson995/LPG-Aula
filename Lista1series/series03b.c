#include <stdio.h>

int main () {
  int k; 
  scanf("%d", &k);

  double somatoriopi = 3;

  for (int i = 1; i <= k; i++) {
    double denominador;
    double pi;
    denominador = (2.0 * i) * ((2.0 * i) + 1) * ((2.0 * i) + 2);
    pi = (4.0/denominador);

    if (i % 2 != 0) {
      somatoriopi += pi;
    }
    else {
      somatoriopi -= pi;
    }
  }
  
  printf("O valor de pi é: %.10lf\n", somatoriopi);
}