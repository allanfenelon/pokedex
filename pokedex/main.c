#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"
#include "funcoes.h"

int main(){
    int gameON = 1;
    int selecao, opcao;
    /* LISTA */
    Lista *normal, *fogo, *agua, *grama, *voador, *lutador, *veneno, *eletrico,
    *terra, *pedra, *psiquico, *gelo, *inseto, *fantasma, *ferro, *dragao, *sombrio, *fada;
    normal =cria(); fogo=cria(); agua=cria(); grama=cria(); voador=cria(); lutador=cria(); veneno=cria(); eletrico=cria();
    terra=cria(); pedra=cria(); psiquico=cria(); gelo=cria(); inseto=cria(); fantasma=cria(); ferro=cria(); dragao=cria(); sombrio=cria(); fada=cria();
    /* TIPOS */
    NO *tipos;
    tipos = cria_tipo();

    /* estrutura tipo */
    TIPO tpaux;
    /* estrutura do pokemon */
    PK pkaux;

    /* *************  */
    tpaux.nome = "normal"; tpaux.endereco = normal; inserir_tipo(tipos, tpaux);
    tpaux.nome = "fogo"; tpaux.endereco = fogo; inserir_tipo(tipos, tpaux);
    tpaux.nome = "agua"; tpaux.endereco = agua; inserir_tipo(tipos, tpaux);
    tpaux.nome = "grama"; tpaux.endereco = grama; inserir_tipo(tipos, tpaux);
    tpaux.nome = "voador"; tpaux.endereco = voador; inserir_tipo(tipos, tpaux);
    tpaux.nome = "lutador"; tpaux.endereco = lutador; inserir_tipo(tipos, tpaux);
    tpaux.nome = "veneno"; tpaux.endereco = veneno; inserir_tipo(tipos, tpaux);
    tpaux.nome = "eletrico"; tpaux.endereco = eletrico; inserir_tipo(tipos, tpaux);
    tpaux.nome = "terra"; tpaux.endereco = terra; inserir_tipo(tipos, tpaux);
    tpaux.nome = "pedra"; tpaux.endereco = pedra; inserir_tipo(tipos, tpaux);
    tpaux.nome = "psiquico"; tpaux.endereco = psiquico; inserir_tipo(tipos, tpaux);
    tpaux.nome = "gelo"; tpaux.endereco = gelo; inserir_tipo(tipos, tpaux);
    tpaux.nome = "inseto"; tpaux.endereco = inseto; inserir_tipo(tipos, tpaux);
    tpaux.nome = "fantasma"; tpaux.endereco = fantasma; inserir_tipo(tipos, tpaux);
    tpaux.nome = "ferro"; tpaux.endereco = ferro; inserir_tipo(tipos, tpaux);
    tpaux.nome = "dragao"; tpaux.endereco = dragao; inserir_tipo(tipos, tpaux);
    tpaux.nome = "sombrio"; tpaux.endereco = normal; inserir_tipo(tipos, tpaux);
    tpaux.nome = "fada"; tpaux.endereco = fada; inserir_tipo(tipos, tpaux);
    printf("%d",tamanho_tipo(tipos));



    while(gameON!=0){
        imprime();
        pergunta();
        scanf("%d", &selecao);
        switch(selecao){
            case 1: //consultar
                system("cls||clear");
                imprime_tipos(3);
                opcao = selecao;
                scanf("%d", &selecao);
                selecaoop(selecao, opcao, tpaux, pkaux);
                break;
            case 2: //Inserir
                system("cls||clear");
                imprime_tipos(1);
                opcao = selecao;
                scanf("%d", &selecao);

                break;
            case 3: // Remover
                system("cls||clear");
                imprime_tipos(2);
                opcao = selecao;
                scanf("%d", &selecao);

                break;
            case 4:
                break;
            default:
                break;


        }
    }
    return 0;
}
