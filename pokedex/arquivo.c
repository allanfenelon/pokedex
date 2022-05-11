#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

struct lista{
    PK pokemons;
    Lista *prox;
};

struct no{
    TIPO dados[TAM];
    int tam;
};

Lista* cria(){
    Lista *li = (Lista*) malloc(sizeof(Lista));
    if(li!=NULL)
        *li=NULL;
    return li;
}

NO* cria_tipo(){
    NO* tp = (NO*) malloc(sizeof(NO));
    if(tp == NULL)
        return -1;
    tp->tam = 0;
    return tp;

}

int apagar_tipo(NO* tp){
    if(tp==NULL)
        return -1;
    free(tp);
}

int tamanho_tipo(NO* tp){
    if(tp==NULL)
        return -1;
    return tp->tam;
}



void apagar_lista(Lista* li){
    if(li!=NULL){
        Elem* no;
        while((*li)!=NULL){
            no = *li;
            (*li) = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho(Lista* li){
   if(li==NULL) return 0;
   Elem* no = *li;
   int tam = 0;
   while(no !=NULL){
    tam++;
    no = no->prox;
   }
   return tam;
}

int lista_vazia(Lista* li){
    if(li==NULL)
        return 1;
    if(*li==NULL)
        return 1;
    return 0;

}

int inserir_ordenado(Lista* li, PK pokemon){
    if(li==NULL) return 0;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no==NULL) return 0;
    no->pokemons = pokemon;
   if(lista_vazia(li)){
        no->prox = (*li);
        *li = no;
   }else{
        Elem* ant;
        Elem* atual = (*li);
        while(atual !=NULL && atual->pokemons.score_total<pokemon.score_total){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == (*li)){
            no->prox = (*li);
            (*li) = no;
        }else{
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
   }


}

int remover_pk(Lista *li, PK nomePK){
    if(li==NULL) return 0;
    Elem *ant, *noaux = *li;

    while(noaux != NULL && (noaux->pokemons.nome)!= nomePK.nome){
        ant = noaux;
        noaux = noaux->prox;

    }
    if(noaux==NULL) return 0;
    if(noaux == *li){
        *li = noaux->prox;
    }else{
        ant->prox = noaux->prox;
    }
    free(noaux);
    return 1;
}

int consulta_pk(Lista *li, int pos, PK *pk){
    if(li == NULL || pos<0){
        return 0;
    }
    Elem *noaux = *li;
    int i=1;
    while(noaux != NULL && i<pos){
        noaux = noaux->prox;
        i++;
    }
    if(noaux==NULL){ return 0;}else{
        *pk = noaux->pokemons;
        return 1;
    }

}
int tipo_cheio(NO *tp){
    if(tp == NULL){return -1;}else{
        return (tp->tam == TAM);
    }
}
int tipo_vazio(NO *tp){
    if(tp == NULL){return -1;}else{
        return (tp->tam == 0);
    }
}

int inserir_tipo(NO *tp, TIPO dados){
    if(tp == NULL) return -1;
    if(tipo_cheio(tp)) return 0;
    tp->dados[tp->tam] = dados;
    tp->tam++;
    return 1;
}

int consultar_tipo(NO *pk, int pos, TIPO *dados){
    if(pk==NULL || pos<=0 || pos > pk->tam) return 0;
    *dados = pk->dados[pos-1];
    return 1;

}
