#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

#define N 10000

int main(int argc, char *argv[]) {
	int vet[N];
	gera_valores_ordem( vet, N, 100 );
	mostra_vetor( vet, N );
	
	int chave;
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &chave);
	
	int id = busca_binaria( vet, N, chave );
	if( id == -1 )
		printf("Valor nao encontrado.\n");
	else
		printf("Valor encontrado no indice %d.\n", id);
	
	return 0;
}

