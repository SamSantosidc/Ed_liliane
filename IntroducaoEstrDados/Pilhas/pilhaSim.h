/* TAD: Pilha que armazena caracteres */

/* Tipo exportado */

typedef struct no No;

typedef struct pilha Pilha;

/* Funções exportadas */

/* Função cria pilha
** Essa função cria a estrutura de uma pilha vazia.
** Retorno: Ponteiro para o struct Pilha.
*/
Pilha* criaPilha(void);

/* Função push
** Essa função inseri um elemento no topo da pilha. Nesta implementação, um char.
** Parametro: Carácter à ser inserido.
*/
void push(Pilha *p, char c);

/* Função pop
** Essa função retira e retorna o elemento no topo da pilha.
** Parametro: Endereço da pilha.
** Retorno: Carácter do topo da pilha.
*/
char pop(Pilha *p);

/* Função é vazia
** Essa função checa se a pilha está vazia.
** Parametro: Endereço da pilha.
** Retorno: 1 se a pilha estiver vazia e 0 se não estiver.
*/
int isVazia(Pilha *p);

/* Função é cheia
** Essa função checa se a pilha está cheia.
** Parametro: Endereço da pilha.
** Retorno: 1 se a pilha estiver cheia e 0 se não estiver.
*/
int isCheia(Pilha *p);

/* Função libera pilha
** Essa função libera a memória reservada e utiilizada pela pilha.
** Parametro: Endereço da pilha.
*/
void liberaPilha(Pilha *p);

/* Função topo
**
*/
char topo(Pilha *p);

/* Função balanceamento de símbolos
** Essa função checa o balanceamento de símbolos: "()" , "{}" , "[]" , " "" " , "<>".
** Parametros: Endereço da pilha.
** Retorno: 1 se os símbolos estiverem balanceados, 0 se não estiverem.
*/
int simbBalanceado(char *exp);