#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);

  float a,b,c;
  

  for (int i = 0; i < n; i++) {
    scanf("%f %f %f", &a, &b, &c);

    float mp;

    a *= 2;
    b *= 3;
    c *= 5;

    mp = (a + b + c) / 10;

    printf("%.1f\n", mp);
  }
}