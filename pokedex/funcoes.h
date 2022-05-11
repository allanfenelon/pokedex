/*
auxiliar.nome = "Charmander";
    auxiliar.ataque = 500;
    auxiliar.ataque_esp = 600;
    auxiliar.defesa = 700;
    auxiliar.defesa_esp =50;
    auxiliar.hp = 1000;
    auxiliar.tipo = 2;
    auxiliar.valocidade = 500;
    auxiliar.score_total = auxiliar.ataque + auxiliar.ataque_esp +auxiliar.defesa + auxiliar.defesa_esp + auxiliar.hp + auxiliar.valocidade;

    */
 /*
 tipo.nome = "fire";
tipo.endereco = tipo1_li;
inserir_tipo(tipo1, tipo);

*/
/*
switch(selecao){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            case 16:
                break;
            case 17:
                break;
            case 18:
                break;
            default:
                break;

        }
*/

/*
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

*/

void imprime(){
    printf("\t +----------------------+\n");
    printf("\t\t POKEDEX \t\t\n");
    printf("\t +----------------------+\n");
}

void imprime_tipos(int t){
    if(t == 1){
        printf("\t qual tipo de pokemon deseja inserir?\n");
    }else if(t == 2){
        printf("\t qual tipo de pokemon deseja remover?\n");
    }else{
        printf("\t qual tipo de pokemon deseja consultar?\n");
    }

    printf(" \t[1] normal [2] fogo [3] agua [4] grama [5] voador [6] lutador [7] veneno [8] eletrico\n");
    printf("\t[9] terra [10] pedra [11] psiquico [12] gelo [13] inseto [14] fantasma [15] ferro\n");
    printf("\t[16] dragao [17] sombrio [18]fada\n");
}

void pergunta(){
    printf("\t[1] - Consultar todos os pokemons de um tipo.\n");
    printf("\t[2] - Inserir pokemon\n");
    printf("\t[3] - Remover pokemon\n");
    printf("\t[4] - SAIR\n");
}

void selecaoop(int leitura, int opcao, TIPO tipo, PK pk){
    switch(leitura){
            case 1:
                if(opcao == 1){
                    tamanho_tipo(tipo);
                    for(i=0; i<=tamanho_tipo; i++){

                    }
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            case 14:
                break;
            case 15:
                break;
            case 16:
                break;
            case 17:
                break;
            case 18:
                break;
            default:
                break;

        }

}


