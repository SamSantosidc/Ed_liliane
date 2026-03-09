/* TAD: Ponto (x,y) */

/* Tipo exportado */
typedef struct ponto Ponto;

/* Funções Exportadas */

/* Função atribui
** Atribui novos valores às coordenadas de um ponto
*/
void atribuiPonto(Ponto *p, float x, float y);

/* Função soma e subtrai pontos
** Soma e/ou subtrai dois pontos para obter um novo ponto
*/
Ponto* calculaPonto(Ponto *p1, Ponto *p2);

/* Função cria ponto
** Aloca e retorna um ponto com coordenadas (x,y)
*/
Ponto* criaPonto(float x, float y);

/* Função distância 
** Retorna a distância entre dois pontos
*/
float distanciaPonto(Ponto *p1, Ponto *p2);

/* Função libera
** Libera a memória de um ponto previamente criado
*/
void liberaPonto(Ponto *p);

/* Função mostra 
** Exibe os valóres de um ponto
*/
void mostrarPonto(Ponto *p);