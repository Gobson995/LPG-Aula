#include <stdio.h>

int main () {
  int k;
  scanf("%d", &k);

  double somatoriopi = 0.0;
  int j = 1;

  for (int i = 1; i <= k; i++) {
    double pi;
    pi = 4.0/i;

    if (j % 2 != 0) {
      somatoriopi += pi;
    }
    else {
      somatoriopi -= pi;
    }
    i++;
    j++;
}

  printf("O valor de pi é: %.10lf\n", somatoriopi);
}