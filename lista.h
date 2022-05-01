#include <stdio.h>
#include <stdlib.h>

struct pokemon{
  char *nome;
  int id , score_total, tipo , hp , ataque , defesa , ataque_esp , defesa_esp , velocidade ;
};
typedef struct sentinela Lista;

Lista *criar_lista();
int insere(Lista*, struct pokemon);
int inserir_ordenado(Lista*, struct pokemon);
int inserir_fim(Lista*, struct pokemon);

int remove_ini(Lista*, struct pokemon);
int revome_ordenada(Lista*, int);
int remove_fim(Lista*, struct pokemon);

int mostrar(Lista*);