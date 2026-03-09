/* TAD: Nó(int, prox) */

/* Tipo exportado */
typedef struct no No;

/* Funções exportadas */

/* Função cria no
** Essa funão atribui um inteiro no nó, inicializa seu ponteiro para o próximo nó e retorna o endereço do novo nó.
** Caso não consiga alocar a memmória, um erro é lançado com valor 1
** Parametro: Número a ser armazenado.
** Retorna o endereço de memória do nó criado.
*/
No* criaNo(int valor);

/* Função comprimento da lista
** Essa função recebe o endereço dó primeiro nó e calcula quantos nós estão conectados.
** Parametro: Endereço do primeiro nó
** Retorna o valor do comprimento da lista encadeada
*/
int comprimentoListaE(No *l);

/* Função checar vazia
** Essa função checa se a variável incial que guarda o começoda lista encadeada é vazia. 
** Parametro: Endereço do primeiro nó
** Retorna 1 caso seja, 0 se não for.
*/
int isListaEVazio(No *l);

/* Função inseri nó no começo
** Essa função acrescenta um nó no começo da lista encadeada. 
** Parametros: Endereço do primeiro nó, valor a ser armazenado.
** Retorna: 1 se a operação falhar, 0 se a operação for bem sucedida.
*/ 
int inseriNoInicio(No **l, int valor);

/* Função mostrar no(s)
** Essa função percorre pela lista encadeada e exibe o valor de cada nó.
** Parametro: Endereço do primeiro nó.
*/ 
void mostraListaERecursiva(No *l);

/* Função libera nó
** Essa função libera a memória alocada na criação da lista encadeada.
*/
void liberaListaE(No *l);

/* Função N maiores números
** Essa função mostra quantos números da lista encadeada são maiores que um número N.
** Parametros: Endereço do inicio da lista, valor a ser comparado.
** Retorna: Quantidade  de nós que possuem o numero maior do que o numero a ser comparado.
*/
int numerosMaioresN(No *l, int compara);

/* Fução ultimo nó
** Essa função retorna uum ponteiro para o ultimo nó da lista encadeada
** Parametro: Ponteiro do início da lista
** Retorna: Ponteiro
*/
No* ultimoNo(No* l);

/* Função concatena nós
** Essa função concatena duas listas encadeadas formadas por nós. O último nó da primeira lista passa a apontar para o
primeiro da segunda lista.
** Parametros: Endereço inicial da primeira lista, endereço inicial da segunda lista.
** Retorna: Ponteiro inicial da lista concatenada.
*/
No* concatenaNos(No *l1, No *l2);

/* Função remove nó inicio
** Essa função remove um nó no início da lista 
** Parametro: Endereço incial da lista
*/
void removeNoInicio(No *l);

/* Função remove nó final
** Essa função remove um nó no início da lista 
** Parametro: Endereço incial da lista
*/
void removeNoFinal(No *l);

/* Função divide lista pelo valor
** Essa função recebe um valor armazenado no nó e ao encontrar esse valor, divide a lista em duas.
** Parametros: Endereço incial da lista, valor a ser buscado.
** Retorna: Nova lista formada após a separação 
*/
No* separaLista(No *l, int v);

/* Função intercala nós
** Essa função intercala os nós de duas listas para formar um novo vetor.
** parametros: Endereço incial da primeira lista, endereço incial da segunda lista
** Retorna: Lista com os valores intercalados.
*/
No* intercalaListas(No *l1, No *l2);