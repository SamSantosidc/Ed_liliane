// Tirar essa dúvida com liliane, não visualizei bem o **.

#include <stdio.h>
#include <stdlib.h>
#include "no.h"

struct no{
    int valor;
    No* prox;
};

int main(){

    No *l1 = criaNo(5);

    inseriNoInicio(&l1, 4);
    inseriNoInicio(&l1, 3);
    inseriNoInicio(&l1, 2);
    inseriNoInicio(&l1, 1);

    No *l2 = criaNo(10);

    inseriNoInicio(&l2, 9);
    inseriNoInicio(&l2, 8);
    inseriNoInicio(&l2, 7);
    inseriNoInicio(&l2, 6);

    
    liberaListaE(l1);
    liberaListaE(l2);

    return 0;
}

int isListaEVazio(No *l){
    if(l == NULL){
        return 1;
    }
    else{
        return 0;
    } 

}

No* criaNo(int valor){
    No *l = (No*) malloc(sizeof(No));

    if(l == NULL){
        printf("Memória insdisponível!\n");
        exit(1);
    }

    l->valor = valor;
    l->prox = NULL;

    return l;
}

int inseriNoInicio(No **l, int valor){

    No *novoNo = criaNo(valor);

    novoNo->valor = valor;
    novoNo->prox = *l;
    *l = novoNo;

    return 0;
}

void mostraListaERecursiva(No *l){
    if (isListaEVazio(l)){
        return;
    }
    else{
        printf("Valor: %d\n", l->valor);
        mostraListaERecursiva(l->prox);
    }
    
}

void liberaListaE(No *l){
    No *aux = l;
    No *proxElem;
    while(aux != NULL){
        proxElem = aux->prox;
        free(aux);
        aux = proxElem;
    }
}

int numerosMaioresN(No *l, int compara){
    int quant = 0;

    for(No * aux = l; aux; aux = aux->prox){
        if (aux->valor > compara){
            quant += 1;
        }
    }

    return quant;
}

No* ultimoNo(No* l){
    if (isListaEVazio(l)){
        return NULL;
    }
    
    No *aux; // Instancia um ponteiro auxiliar

    for(aux = l; aux->prox; aux = aux->prox); // Looping para aux apontar para o ultimo nó

    return aux;
}

No* concatenaNos(No *l1, No *l2){
    No *listaConcatenada = l1; // Nova lista concatenada que aponta para o inicio do l1
    No *ultimoLC = ultimoNo(listaConcatenada); // Ponteiro que aponta para o ultimo elemento de l1

    ultimoLC->prox = l2; // O ponteiro 'prox' do ultimo nó de l1, aponta para nó inicial de l2

    return listaConcatenada;
}

void removeNoInicio(No *l){
    if (isListaEVazio(l)){
        printf("Lista vazia, não há oque retirar\n");
    }
    
    No *aux = l;
    l = aux->prox;
    free(aux);
}

void removeNoFinal(No *l){
    No *ultimo = ultimoNo(l);
    No *aux;

    for(aux = l; aux->prox->prox; aux = aux->prox);

    aux->prox = NULL;
    free(ultimo);
}

No* separaLista(No *l, int v){
    No *novaLista;
    No *aux;

    for(aux = l; aux; aux = aux->prox){
        if (aux->valor == v){
            novaLista = aux->prox;
            aux->prox = NULL;

            return novaLista;
        }
    }

}

No* intercalaListas(No *l1, No *l2){
    No *aux1 = l1;
    No *aux2 = l2;
    
    No *prox1;
    No *prox2;

    No *novaLista;
    while(aux1 && aux2){
        prox1 = aux1->prox;
        prox2 = aux2->prox;
        
        novaLista;
    }
}
// Não consegui implementar essa função. Fazer com os meninos depois.