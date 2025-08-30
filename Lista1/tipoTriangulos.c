#include <stdio.h>
#include <stdlib.h>


float max(float x,float y) {
  if (x >= y) return x;
  else return y;
}

float min(float x, float y) {
  if (x <= y) return x;
  else return y;
}


int main () {
  float lado[3];

  for (int i = 0; i < 3; i++) {
    scanf("%f", &lado[i]);
  }

  float soma = lado[0] + lado[1] + lado [2];
  float a,b,c;

  a = max(lado[0], lado[1]);
  a = max(a, lado[2]);

  c = min (lado[0], lado[1]);
  c = min (c, lado[2]);

  b = soma - a - c;

  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  }
  else {
    if ((a*a) == ((b*b)+ (c*c))) {
      printf("TRIANGULO RETANGULO\n");
    }
    else if ((a*a) > ((b*b) + (c*c))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    else {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (a == b || b == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
}