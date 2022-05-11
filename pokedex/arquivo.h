/*   LISTA POKEMON     */
typedef struct pokedex PK;
typedef struct lista* Lista;
typedef struct lista Elem;

struct pokedex{
    char *nome;
    int score_total;
    int tipo, hp, ataque, defesa, ataque_esp, defesa_esp, valocidade;

};

Lista* cria();

void apagar_lista(Lista*);

int tamanho(Lista*);

int lista_vazia(Lista*);

int inserir_ordenado(Lista*, PK);

int remover_pk(Lista*, PK);

int consulta_pk(Lista*, int pos, PK*);

/*   LISTA TIPO     */
#define TAM 18
typedef struct no NO;

typedef struct tipo{
    char *nome;
    Lista endereco;
}TIPO;


NO* cria_tipo();
int apagar_tipo(NO*);
int tamanho_tipo(NO*);
int inserir_tipo(NO*, TIPO);
int tipo_cheio(NO*);
int tipo_vazio(NO*);
int consultar_tipo(NO*, int pos, TIPO*);

