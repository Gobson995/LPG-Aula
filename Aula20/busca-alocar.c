#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void gera_valores( int v[], int n, int limite ){
	int i;
	srand( time ( 0 ) ); // Define a "semente" do gerador de n�meros.
	for( i = 0 ; i < n ; i++ )
		v[i] = rand() % limite + 1;
}

void mostra_vetor( int v[], int n ){
	int i;
	printf("Dados do vetor:\n");
	for( i = 0 ; i < n ; i++ )
		printf("[%d] : %d\n", i, v[i]);
	printf("\n\n");
}

int *busca(int *v, int n, int chave) {
  int cont = 0, i;
  for (i = 0; i < n; i++) {
    if (v[i] == chave) cont++;
  }
  
  int *p = malloc(sizeof(int)*(cont+1));
  int j = 0;
  for (i = 0; i < n; i++) {
    if (v[i] == chave) {
      p[j] = i;
      j++;
    }
  }

  p[j] = -1;
  return p;
}

int main () {
  int vet[20];

  gera_valores(vet, 20, 100);
  mostra_vetor(vet, 20);
  
  int chave;
  scanf("%d", &chave);

  int *indices = busca(vet, 20, chave);

  if (indices[0] == -1) printf("Não encontrado\n");
  else {
    printf("Valor encontado no indice: \n");
    for (int i = 0; indices[i] != -1; i++) {
      printf("%d ", indices[i]);
      printf("\n");
    }
  }

  free(indices);
  return 0;
}