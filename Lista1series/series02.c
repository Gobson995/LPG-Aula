#include <stdio.h>
#include <math.h>

int main () {
  int k;
  scanf("%d", &k);

  double somatorio = 0.0;

  for (int i = 1; i <= k; i++) {
    double termo;
    termo = pow(-1, i + 1) * (1.0 / i);
    somatorio += termo;
    if (i % 2 != 0) {
      printf("+(1/%d)",i);
    }
    else {
      printf("-(1/%d)", i);
    } 
  }

  printf("\nO resultado do somatorio é: %.10lf\n", somatorio);

}