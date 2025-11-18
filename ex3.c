#include <stdio.h>
#include <stdlib.h>

void calcula_circulo(float raio, float *pPerimetro, float *pArea) {
  (*pPerimetro) = 2*3.14*raio;
  (*pArea) = 3.14*raio*raio;
}

int main () {
  float raio = 5, p, a;

  calcula_circulo(raio, &p, &a);
 
  printf("Perimetro: %f\nArea: %f\n", p, a);
}
