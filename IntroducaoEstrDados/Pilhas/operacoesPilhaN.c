#include <stdio.h>
#include <stdlib.h>
#include "pilhaNo.h"

struct no{
    int valor;
    No *prox;
};

struct pilha{
    No *prim;
};

int main(){

    Pilha *p = criaPilha();

    push(p, 3);
    push(p, 2);
    push(p, 1);
    
    printf("Elemento no topo: %d\n", topo(p));
    
    
    liberaPilha(p);

    return 0;
}

Pilha* criaPilha(){
    Pilha *novaPilha = (Pilha*) malloc(sizeof(Pilha)); // Solicitação de memória para o tipo pilha

    if (novaPilha == NULL){ // Checagem se o malloc funcionou ou não
        printf("Memória indisponíve!");
        exit(1);
    }

    novaPilha->prim = NULL; // Setando o primeiro nó/elemento como NULL, pois ainda não existe elemento

    return novaPilha;
}

void push(Pilha *p, int valor){
    No *novoNo = (No *) malloc(sizeof(No)); // Solicitação de memória para o novo nó 

    if (!novoNo){ // Checa se a memória foi reservada ou não
        printf("Memória indisponivel!");
        exit(1);
    }
    
    novoNo->valor = valor; // Valor é armazenado no nó
    novoNo->prox = p->prim; // O ponteiro prox aponta para o NULL
    p->prim = novoNo;  // O ponteiro da pilha p aponta para o novo vó
    
}

int pop(Pilha *p){ 
    if (isVazia(p)){ // Checagem se a pilha está vazia
        exit(1);
    }
    
    No *aux; // Nó auxiliar
    int valor; // Valor armazenado no nó

    aux = p->prim; // Nó aux passa a apontar para o primeiro elemento da pilha, vulgo o topo
    valor = aux->valor; // Coleta o valor armazenado no topo da pilha
    p->prim = aux->prox; // O ponteiro que aponta para o primerio elemento passa a apontar para segundo (Novo primeiro elemento após o pop.)

    free(aux); // Libera a memória usada pelo nó

    return valor;
}

int isVazia(Pilha *p){
    if (p->prim == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void liberaPilha(Pilha *p){
    No *aux; // Nó auxiliar
    No *temp; // Nó temporário que armazena o nó após o nó auxiliar
    aux = p->prim; // Auxiliar aponta para o o topo da pilha (primeiro nó da sequência)

    while (aux != NULL){ // Enquanto o o auxiliar(marca o inicio/topo da pilha) não apontar para NULL, significa que a lista não está vazia
        temp = aux->prox; // temp passa a apontar para o próximo elemento da pilha
        free(aux); // Libera o elemento do topo
        aux = temp; // Auxiliar passa a apontar para o temporário
        //Após isso, o loop repete e temp volta a apontar para o próximo elemento em relação a aux
    }

    free(p); // Após limpar os elementos da pilha, limpa a pilha
    
}

int topo(Pilha *p){
    if (isVazia(p)){ // Checa se está vazio
        exit(1);
    }
    
    int valor; // Variável que armazena o valor do topo da pilha
    valor = pop(p); // Recebe o valor vindo do pop
    push(p, valor); // Reconstroi o topoda pilha com o valor armazenado

    return valor;
}
