/*
Conteudo da aula/atividade proposta:

Manipulação(Operações) de listas.

Ordem de organização a se seguir:
- Cabeçalho
- Tipos
- Funções
- Criar Menu/Hub
- Main

###
Criar uma lista utilizando:
- Struct, Vetor, Índice
*/

#include <stdio.h>
#include <stdlib.h>

//
typedef enum{
    LISTA_OK,               // Sucesso
    LISTA_ERRO_TAMANHO,     // Tamanho inválido
    LISTA_ERRO_MEMORIA,     // Malloc falhou
}lista_status;

// Tipo para armazenar dados numéricos. Uma lista de dados. Utilizando um Vetor dinamico, uma variável auxiliar e uma variável de atamanho
struct lista{
    int *v;       // Vetor dinamico para armazenar a lista
    int i;        // variável de controle da lista
    int tam;      // Variável que diz o tamanho da lista a ser criada
};

// Essa função cria uma lista de tamanho X, informado pelo usuário.
// Ela utiliza variáveis temporárias para checagem dos processos, pois isso evita "meia-alteraçõo" nos estados do struct(lista)
// Sinaliza com o enum o tipo de erro que ocorreu, caso tenha ocorrido algum erro
lista_status criar_lista(struct lista *plista, int tamanho){



}

lista_status destroir_lista(struct lista *plista){

}

lista_status esvaziar_lista(struct lista *plista){
    
}

lista_status remover_ultimo_elemento(struct lista *plista){
    
}

lista_status acrescentar_elemento(struct lista *plista){
    
}

int main(){
    
    struct lista dados;
    

    criar_lista(&dados, 10);

    printf("%d",dados.i);
    return 0;
}


