// Funções de vetores
void gera_valores( int v[], int n, int limite );
void gera_valores_ordem( int v[], int n, int limite );
void mostra_vetor( int v[], int n );
int busca_binaria (int v[], int n, int chave);

// Funções de matrizes
void gera_valores_matriz( int l, int c, int x[l][c], int limite );
void mostra_matriz( int l, int c, int x[l][c] ); // genérico, usa VLA.
float media_pares( int l, int c, int x[l][c] );
void gera_transposta(int l, int c, int x[l][c] , int t[c][l] );
void soma_matrizes(int l, int c, int a[l][c] , int b[l][c], int result[l][c] );

void multiplica_matrizes( int la, int ca, int a[la][ca],
						  int lb, int cb, int b[lb][cb],
										  int c[la][cb] );


