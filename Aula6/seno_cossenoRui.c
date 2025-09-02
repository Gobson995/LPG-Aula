#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI_2
#define M_PI_2 1.57079632679489661923
#endif

double seno( double x, int n );
double cosseno( double x, int n );

double sen_cos( double x, int n, double termo, int k );

int main(int argc, char *argv[]) {
	
	double x = M_PI_2;
	
	printf("%.15lf\n", seno( x, 10 )); // Seno de 90 graus...
	printf("%.15lf\n", cosseno( x, 11 )); // Cosseno de 90 graus...
	return 0;
}

/*
double seno( double x, int n ){
	double s = 0, termo = x;
	int i, k = 1;
	for( i = 0 ; i < n ; i++ ){
		s += termo;
		termo *= x/(k+1)*x/(k+2)*(-1);
		k += 2;
	}
	return s;
}
*/

/*
// Função desnecessária!

double cosseno( double x, int n ){
	double s = 0, termo = 1;
	int i, k = 0;
	for( i = 0 ; i < n ; i++ ){
		s += termo;
		termo *= x/(k+1)*x/(k+2)*(-1);
		k += 2;
	}
	return s;
}
*/

/*
Função genérica
Para seno    : termo = x e k = 1;
Para cosseno : termo = 1 e k = 0;
*/
double sen_cos( double x, int n, double termo, int k ){
	double s = 0;
	int i;
	for( i = 0 ; i < n ; i++ ){
		s += termo;
		termo *= x/(k+1)*x/(k+2)*(-1);
		k += 2;
	}
	return s;
}

// Funções "wrapper"

double seno( double x, int n ){
	return sen_cos( x, n, x, 1 );
}

double cosseno( double x, int n ){
	return sen_cos( x, n, 1, 0 );
}

// OBS: não funciona no meu notebook

