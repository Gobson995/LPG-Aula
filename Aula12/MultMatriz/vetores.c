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

void mostra_matriz( int l, int c, int x[l][c] ){
	printf("Dados da matriz %dx%d:\n", l, c);
	int i, j;
	for( i = 0; i < l ; i++ ){
		for( j = 0 ; j < c ; j++ )
			printf("%d\t", x[i][j]);
		printf("\n");
	}	
}

float media_pares( int l, int c, int x[l][c] ){
	int i, j, soma = 0, cont = 0;
	for( i = 0; i < l ; i++ )
		for( j = 0 ; j < c ; j++ )
			if( x[i][j] % 2 == 0 ){
				soma += x[i][j];
				cont++;
			}
			
	return (float)soma/cont;
}

void gera_transposta(int l, int c, int x[l][c] , int t[c][l] ){
	int i, j;
	for( i = 0; i < l ; i++ )
		for( j = 0 ; j < c ; j++ )
			t[j][i] = x[i][j];
}


void soma_matrizes(int l, int c, int a[l][c] , int b[l][c], int result[l][c] ){
	int i, j;
	for( i = 0; i < l ; i++ )
		for( j = 0 ; j < c ; j++ )
			result[i][j] = a[i][j] + b[i][j];
}

void multiplica_matrizes( int la, int ca, int a[la][ca],
						  int lb, int cb, int b[lb][cb],
						  				  int c[la][cb] ){
	int i, j, k;
	for( i = 0 ; i < la ; i++ )
		for( j = 0 ; j < cb ; j++ ){
			int soma = 0;
			for( k = 0 ; k < ca ; k++ )
				soma += a[i][k]*b[k][j];
			
			c[i][j] = soma;
		}
}

void gera_valores_matriz( int l, int c, int x[l][c], int limite ){
	gera_valores( (int*)x, l*c, limite );
}

