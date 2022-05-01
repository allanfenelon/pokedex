#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main(){
  Lista *li;
  li = criar_lista();
  struct pokemon novo;
  novo.nome = "bubalu";
 novo.id = 1; novo.score_total = 10; novo.tipo=5; novo.hp = 3; novo.ataque=8; novo.defesa=9; novo.ataque_esp = 2; novo.defesa_esp = 3; novo.velocidade =4;
  insere(li, novo);
  return(0);
}
