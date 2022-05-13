/* O conjunto {tipo} está ordenado de acordo com a criação do mesmo no main, ou seja, se vc criar o tipo inseto primeiro
ele está indexado na posição 1 */

/*   LISTA POKEMON     */
typedef struct pokedex PK;
typedef struct lista* Lista;
typedef struct lista Elem;
#define TAM 18
typedef struct no NO;

typedef struct tipo{
    char *nome;
    Lista endereco;
}TIPO;


struct pokedex{
    char *nome;
    int id, score_total;
    int tipo, hp, ataque, defesa, ataque_esp, defesa_esp, valocidade;

};

Lista* cria();

void apagar_lista(Lista*); //Libera pokedex

int tamanho(Lista*); // qtd por tipo

int lista_vazia(Lista*);

int inserir_ordenado(Lista*, PK); //Insere Pokemon

int remover_pk(Lista*, PK); //Remove Pokemon

int consulta_pk(Lista*, int pos, PK*); //Busca O pokemon

void imprime_por_tipo(NO *tp, int tipo); //Imprime por tipo

int insere_pokemon(Lista*, PK);

int tamanho_pokedex(NO*);
void lista_existe(Lista*);

/*   LISTA TIPO     */


NO* cria_tipo();
int apagar_tipo(NO*); //Libera Tipo
int tamanho_tipo(NO*);
int inserir_tipo(NO*, TIPO);
int tipo_cheio(NO*);
int tipo_vazio(NO*);
int consultar_tipo(NO*, int pos, TIPO*);

