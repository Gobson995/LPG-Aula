#include <stdio.h>

// vetores e ponteiros são tratados da mesma forma... veremos depois (eu acho)
// ponteiro guarda um endereço de memória
 float calc_media (float vet[], int n) {
  float soma = 0;
  for (int i = 0; i < n; i++) {
    soma += vet[i];
  }
  return soma/n;
}

int main () {
  float v[10] = {1,2,3,4,5,6,7,8,9,10};

  float media = calc_media (v, 10);

  printf("A média do vetor é: %.1f\n", media);
}