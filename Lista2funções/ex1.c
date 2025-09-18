#include <stdio.h>

int tipo_triangulo(float x, float y, float z) {
  if (x + y <= z) {
    return 0;
  }
  else if (x == y && y == z) {
    return 1;
  }
  else if (x == y || y == z) {
    return 2;
  }
  else {
    return 3;
  }
}

int main () {
  float x, y, z;
  scanf("%f %f %f", &x, &y, &z);

  float teste;

  if (x > y) {
    teste = x;
    x = y;
    y = teste;
  }
  if (y > z) {
    teste = y;
    y = z;
    z = teste;
  }
  if (x > y) {
    teste = x;
    x = y;
    y = teste;
  }

  if (tipo_triangulo(x,y,z) == 0) {
    printf("Os lados não formam um triangulo\n");
  }
  else if (tipo_triangulo(x,y,z) == 1) {
    printf("Triangulo equilatero\n");
  }
  else if (tipo_triangulo(x,y,z) == 2) {
    printf("Triangulo isosceles\n");
  }
  else {
    printf("Triangulo escaleno\n");
  }

}