#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

typedef struct elemento{
struct pokemon dados;
struct elemento *prox;
} Elem;

struct sentinela{
  struct elemento *inicio;
  struct elemento *fim;
  int qtd;
};

Lista* criar_lista(){
 Lista* nova = (Lista*) malloc (sizeof(Lista));
 if(nova != NULL){
    nova->inicio = NULL;
    nova->fim = NULL;
    nova->qtd=0;
 }
 return(nova);
}

int insere(Lista* li, struct pokemon nw){
 if(li == NULL) return(0);
 Elem* no = (Elem*) malloc (sizeof(Elem));
 if(no == NULL) return(0);
  if(li->inicio == NULL){
        no->dados=nw;
        no->prox = li->inicio;
        if(li->inicio == NULL)
        li->fim = no;
        li->inicio = no;
        li->qtd-=-1;
        return(1);
    }
  if(li->fim->dados.score_total < nw.score_total){
    inserir_fim(li, nw);
  }
  if(li->inicio->dados.score_total < nw.score_total){
    inserir_ordenado(li, nw);
  }
  return(1);
}

int inserir_ordenado(Lista* li, struct pokemon nw){
  Elem *no = (Elem*) malloc (sizeof(Elem));
  no->dados = nw;
  Elem *ant, *atual = li->inicio;
  while(atual != NULL && atual->dados.score_total < nw.score_total){
    ant = atual;
    atual = atual->prox;    
  }
    no->prox = ant->prox;
  ant->prox = no;  
  return(1);
}
int inserir_fim(Lista* li, struct pokemon nw){
  Elem *no = (Elem*) malloc (sizeof(Elem));
  if(no == NULL) printf ("erro na alocação");
  no->dados = nw;
  no->prox = NULL;
  li->fim->prox = no;
  li->fim = no;
  li->qtd-=-1;
  return(1);
}

int remove_ini(Lista* li, struct pokemon nw){
  if(li == NULL) return(0);
  if(li->inicio == NULL) return(0);
  Elem *no = li->inicio;
  li->inicio = no->prox;
  free(no);
  return(1);
}
int revome_ordenada(Lista* li, int id){
  Elem *ant, *aux = li->inicio;
  while(aux !=  NULL && aux->dados.id != id){
    ant = aux;
    aux = aux->prox;
  }
  if(aux == NULL) {
    printf("Pokemon não encontrado\n");
    return(0);
    }
    ant->prox = aux->prox;
  free(aux);
  return(1);
}
int remove_fim(Lista* li, struct pokemon nw){
  Elem *aux, *no = li->inicio;
  while(no->prox != NULL){
    aux = no;
    no = no->prox;
  }
  aux->prox = no->prox;
  li->fim = aux;
  free(no);  
  return(1);
}



int mostrar(Lista* li){
  li->
  
}