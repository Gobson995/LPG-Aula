#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

void gera_valores( int v[], int n, int limite ){
	int i;
	srand( time ( 0 ) ); // Define a "semente" do gerador de números.
	for( i = 0 ; i < n ; i++ )
		v[i] = rand() % limite + 1;
}

void gera_valores_ordem( int v[], int n, int limite ){
	int i;
	srand( time ( 0 ) ); // Define a "semente" do gerador de números.
	
	v[0] = rand() % limite + 1;
	
	for( i = 1 ; i < n ; i++ )
		v[i] = v[i-1] + rand() % 5 + 1;
}

void mostra_vetor( int v[], int n ){
	int i;
	printf("Dados do vetor:\n");
	for( i = 0 ; i < n ; i++ )
		printf("[%d] : %d\n", i, v[i]);
	printf("\n\n");
}

int busca_binaria (int v[], int n, int chave){
	int ini = 0, fim = n-1, meio;
	int cont = 0;
	do{
		cont++;
		meio = ( ini + fim ) / 2;
		if(v[meio] == chave){
			printf("[busca executada em %d iteracoes]\n", cont);
			return meio; // Encontrado em meio!
		}
		if(v[meio] < chave)
			ini = meio + 1;
		else
			fim = meio - 1;
	}while(ini <= fim);
	printf("[busca executada em %d iteracoes]\n", cont);
	return -1; // Não encontrado!
}

