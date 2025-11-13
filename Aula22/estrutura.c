#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {    // identificador
  int codigo;
  char descricao[20];
  float preco;
}; // ponto e virgula

// deixa solto em cima, para ser global

// acesso os campos da estrutura é feito pelo operador (.)

void inicializa_produto (struct Produto *p, int c, char *d, float pr) {
  p->codigo = c;
  strcpy(p->descricao, d);
  p->preco = pr;
}

void mostra_produto (struct Produto x) {
  printf("%d, %s, R$%.2f\n", x.codigo, x.descricao, x.preco);
}

int main () {
struct Produto x, y;

/*
x.codigo = 123;
strcpy(x.descricao, "Caderno");
x.preco = 10.0;
*/

inicializa_produto (&x, 123, "Caderno", 10.0);

mostra_produto (x);
}

// sempre esconder a interface com funções (lado pragmático)

// quando ta usando ponteiro, não usa o ".", usa o "->"
