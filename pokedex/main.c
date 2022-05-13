#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"


int main(){

    /*DEMONSTRA��O DO USO DAS FUN��ES */
    /*
    EQUIPE:
    Allan Pereira Fenelon
    FRANCISCO JUNIOR PEIXOTO DANTAS
    */

    /* Estrutura do tipo tipo */
    NO *tipos;
    tipos = cria_tipo();
    /* estrutura tipo */
    TIPO tpaux; //est� no .h
    /* estrutura do pokemon */
    PK auxiliar; //est� no .h
    /* Estrutura da Lista */
    Lista *normal, *fogo, *agua, *grama, *voador, *lutador, *veneno, *eletrico,
    *terra, *pedra, *psiquico, *gelo, *inseto, *fantasma, *ferro, *dragao, *sombrio, *fada;
    normal =cria(); fogo=cria(); agua=cria(); grama=cria(); voador=cria(); lutador=cria(); veneno=cria(); eletrico=cria();
    terra=cria(); pedra=cria(); psiquico=cria(); gelo=cria(); inseto=cria(); fantasma=cria(); ferro=cria(); dragao=cria(); sombrio=cria(); fada=cria();


    /* Inserir pokemon */
    printf("\n---- Inserir ----\n");

    auxiliar.nome = "Bulbasaur";
    auxiliar.ataque = 45;
    auxiliar.ataque_esp = 65;
    auxiliar.defesa = 49;
    auxiliar.defesa_esp =65;
    auxiliar.hp = 45;
    auxiliar.tipo = 2;
    auxiliar.valocidade = 45;
    auxiliar.score_total = auxiliar.ataque + auxiliar.ataque_esp +auxiliar.defesa + auxiliar.defesa_esp + auxiliar.hp + auxiliar.valocidade;

    tpaux.nome = "inseto"; tpaux.endereco = inseto; inserir_tipo(tipos, tpaux); //add tipo normal
    inserir_ordenado(inseto, auxiliar); //insere informa��es do tipo normal
    printf("\n quantidade de tipos: %d", tamanho_tipo(tipos)); //qtd de tipos

    auxiliar.nome = "Ivysaur";
    auxiliar.ataque = 62;
    auxiliar.ataque_esp = 65;
    auxiliar.defesa = 49;
    auxiliar.defesa_esp =65;
    auxiliar.hp = 60;
    auxiliar.tipo = 1;
    auxiliar.valocidade = 45;
    auxiliar.score_total = auxiliar.ataque + auxiliar.ataque_esp +auxiliar.defesa + auxiliar.defesa_esp + auxiliar.hp + auxiliar.valocidade;
    inserir_ordenado(inseto, auxiliar); //insere informa��es do tipo normal

     /* imprime pokemons por tipo */
     printf("\n---- imprime por tipo ----\n");
    imprime_por_tipo(tipos, 1);
    /* qtd de pokemons por tipo */
    printf("\n---- qtd por tipo ----\n");
    printf("\nTamanho tipo inseto: %d", tamanho(inseto));

    /* busca pokemon */
    printf("\n---- busca pokedex ----\n");
    consulta_pk(inseto, 1, &auxiliar);
    printf("\nO pokemon na posica o 1 eh: %s\n", auxiliar.nome);

    /* tamanho da pokedex */
    printf("\n---- tam pokedex ----\n");
    printf("\ntamanho da pokedex:%d", tamanho_pokedex(tipos));


    /* remover pokemon */
    printf("\n---- Remocao ----\n");
    auxiliar.nome = "Ivysaur";
    if(remover_pk(inseto, auxiliar)){
        printf("\n\nDepois da remocaoo do Ivysaur o tipo inseto tem os pokemons: \n");
        imprime_por_tipo(tipos, 1);
    }

    /* LIBERA POKEDEX*/
   apagar_lista(normal); apagar_lista(fogo); apagar_lista(agua); apagar_lista(grama);
   apagar_lista(voador); apagar_lista(lutador); apagar_lista(veneno); apagar_lista(eletrico);
    apagar_lista(terra); apagar_lista(pedra); apagar_lista(psiquico);
    apagar_lista(gelo); apagar_lista(inseto); apagar_lista(fantasma);
     apagar_lista(ferro); apagar_lista(dragao); apagar_lista(sombrio); apagar_lista(fada);
    apagar_tipo(tipos);

    return 0;
}
