/* TAD: Pilha (utilizando nós)*/

/* Tipos exportado */
typedef struct no No;

typedef struct pilha Pilha;

/* Funções auxiliares */

/* Função cria lista vazia
** Essa função cria a lista vazia, rezervando memória para o tipo Pilha. Inicialmente seu ponteiro aponta para NULL.
*/
Pilha* criaPilha(void);

/* Função push
** Essa função inseri um elemento no topo da pilha.
** Parametro: int a ser inserido.
*/
void push(Pilha *p, int valor);

/* Função pop
** Essa função retira um valor do topo da pilha e retorna ele pro usuário.
** Retorno: valor int.
*/
int pop(Pilha *p);

/* Função é vazia
** Essa função indica se a pilha está vazia ou não.
** Parametro: Ponteiro da pilha.
** Retorno: 1 caso seja vazia, 0 se não for.
*/
int isVazia(Pilha *p);


/* Função liberar
** Essa função libera a memória alocada pela pilha.
** Parametro: Ponteiro da pilha
*/
void liberaPilha(Pilha *p);

/* Função topo da pilha
** Essa função exibe o valor armazenado no topo da pilha sem destruir sua integridade. Ela armazena o valor solto pelo
*  pop e dá push novamente, mantendo a estrutura e as informações da pilha.
** Parametros: ponteiro para o struct Pilha
** Retorno: Valor armazenado no topo da pilha
*/
int topo(Pilha *p);
