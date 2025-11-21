#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2, int *p3) {
  int *v3 = NULL;
  int tam3 = 0; 

  for (int i = 0; i < n1; i++) {
    int repetido = 0;

    for (int j = 0; j < tam3; j++) {
      if (v3[j] == v1[i]) {
        repetido = 1;
        break;
      }
    }

    if (!repetido) {
      tam3++;
      v3 = (int *) realloc(v3, tam3 * sizeof(int));
      v3[tam3 - 1] = v1[i];
    }
}

  for (int i = 0; i < n2; i++) {
    int repetido = 0;

    for (int j = 0; j < tam3; j++) {
      if (v3[j] == v2[i]) {
          repetido = 1;
          break;
      }
    }

    if (!repetido) {
      tam3++;
      v3 = (int *) realloc(v3, tam3 * sizeof(int));
      v3[tam3 - 1] = v2[i];
    }
  }

  *p3 = tam3;
  return v3;
}

int main() {
  int n1, n2;

  printf("Digite o tamanho de v1: ");
  scanf("%d", &n1);

  int *v1 = (int *) malloc(n1 * sizeof(int));

  printf("Digite os valores de v1:\n");
  for (int i = 0; i < n1; i++) scanf("%d", &v1[i]);

  printf("Digite o tamanho de v2: ");
  scanf("%d", &n2);

  int *v2 = (int *) malloc(n2 * sizeof(int));

  printf("Digite os valores de v2:\n");
  for (int i = 0; i < n2; i++) scanf("%d", &v2[i]);

  int n3;
  int *v3 = uniao(v1, n1, v2, n2, &n3);

  printf("\nUniao dos conjuntos:\n");
  for (int i = 0; i < n3; i++) printf("%d ", v3[i]);
  
  printf("\n");

  free(v1);
  free(v2);
  free(v3);

  return 0;
}
