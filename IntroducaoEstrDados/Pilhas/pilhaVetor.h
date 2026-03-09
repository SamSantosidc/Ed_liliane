/* TAD: Pilha de int(utilizando vetor estático)*/

/* Tipo exportado*/
typedef struct pilha Pilha;

/* Funções auxiliares*/

/* Função cria pilha vazia
** Essa função cria uma pilha vazia, alocando dinânmicamente na memória. E retorna um ponteiro para a nova estrutura.
** Retorno: Ponteiro do tipo struct pilha.
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

/* Função é cheia
** Essa função indica se a pilha está cheia ou não.
** Parametro: Ponteiro da pilha.
** Retorno: 1 caso seja vazia, 0 se não for.
*/
int isCheia(Pilha *p);

/* Função liberar
** Essa função libera a memória alocada pela pilha.
** Parametro: Ponteiro da pilha
*/
void liberaPilha(Pilha *p);

/* Função exibe topo
** Essa função exibe o topo da pilha.
** Parametro: Endereço da pilha.
** Retorno: valor int.
*/
int topo(Pilha* p);

/* Função concatena pilhas
** Essa função concatena duas pilhas atravez de um pilha auxiliar criada na função. Os elementos da segunda pilha
vão para a primeira. A segunda pilha sai vazia.
** Parametros: Endereço da primeira pilha, endereço da segunda pilha.
*/
void concatena(Pilha *p1, Pilha *p2);

/* Função copia pilha
** Essa função utilizá de uma variável auxiliar para receber os dados de uma pilha e outra auxiliar que recebe os dados
da primeira auxiliar na ordem correta.
** Parametro: Endereço da pilha original.
** Return: Endereço da nova cópia da pilha. 
*/
Pilha* copiaPilha(Pilha *p);