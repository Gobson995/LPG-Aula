#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

#define LIN 5
#define COL 6

int main(int argc, char *argv[]) {
	int m[LIN][COL];
	int t[COL][LIN];
	gera_valores( m , LIN*COL, 100 );
	mostra_matriz( LIN, COL, m );
	
	gera_transposta( LIN, COL, m, t );
	
	mostra_matriz( COL, LIN, t );
	
	return 0;
}
