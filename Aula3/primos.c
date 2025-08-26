#include <stdio.h>

int main () {
 int x;

 printf("Digite um número: ");
 scanf("%i", &x);

 int cont = 0;

 for (int i = 1; i <= x; i++) {  // esse codigo não é eficiente pois tem O muito alto...
  if (x % i == 0) {
    cont++;
  }
 }

 if (cont == 2) {
   printf("Esse número é primo\n");
 }
 else {
  printf("Esse número não é primo\n");
 }
}