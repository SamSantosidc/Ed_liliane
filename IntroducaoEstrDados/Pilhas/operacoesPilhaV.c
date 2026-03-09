#include <stdio.h>
#include <stdlib.h>
#include "pilhaVetor.h"

#define TAMANHO 10 // Número máximo de elementos

struct pilha{
    int dados[TAMANHO];
    int ctrl;
};


int main(){

    Pilha *p = criaPilha();
    Pilha *p2 = criaPilha();

    printf("Pilha 1:\n");
    push(p, 4);
    printf("Topo: %d\n", topo(p));
    push(p, 2);
    printf("Topo: %d\n", topo(p));
    push(p, 3);
    printf("Topo: %d\n", topo(p));

    printf("Pilha 2:\n");
    push(p2, 1);
    printf("Topo: %d\n", topo(p2));
    push(p2, 5);
    printf("Topo: %d\n", topo(p2));
    push(p2, -1);
    printf("Topo: %d\n", topo(p2));

    concatena(p, p2);

    printf("%d\n", topo(p));

    printf("%d\n", topo(p2));

    return 0;
}

Pilha* criaPilha(void){
    Pilha* novaPilha; // Nova pilha

    novaPilha = (Pilha*) malloc(sizeof(Pilha)); // Malloc solicitando memoria pra pilha

    if (novaPilha == NULL){ // Checa se o malloc funcionou
        printf("Memória insuficiente!");
        exit(1);
    }

    novaPilha->ctrl = 0; // Variavel de controle indicando que a lista está vazia
    return novaPilha;
}

void push(Pilha *p, int valor){
    if (isCheia(p)){ // Usa a função para checar se a pilha está cheia
        printf("A pilha está cheia");
        exit(1);
    }
    
    p->dados[p->ctrl] = valor; // O vetor de dados na posição do controle recebe o valor.
    p->ctrl++; // Incrementa o controle
}

int pop(Pilha *p){
    if (isVazia(p)){
        printf("A pilha está vazia");
        exit(1);
    }
    int v;

    p->ctrl --;
    v = p->dados[p->ctrl];
    

    return v;
}

int isVazia(Pilha *p){
    if(p->ctrl == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int isCheia(Pilha *p){
    if (p->ctrl == TAMANHO){
        return 1;
    }
    else{
        return 0;
    }

}

void liberaPilha(Pilha *p){
    free(p);
}

int topo(Pilha* p){
    if (isVazia(p)){
        printf("Está vazia!");
        return 1;
    }
    else{
        return p->dados[p->ctrl-1];
    }
}

void concatena(Pilha *p1, Pilha *p2){
    
    Pilha *auxPilha = criaPilha(); // Pilha auxiliar que recebera os dados de p2 e passará eles na ordme correta para p1

    while (p2->ctrl != 0){ // Lopping que roda até o ctrl de p2 indicar que ela está vazia
        push(auxPilha, pop(p2)); // Faz a pilha auxiliar receber os dados da p2
    }

    while (auxPilha->ctrl != 0){ // Lopping que roda até o ctrl de auxPilha indicar que ela está vazia
        push(p1, pop(auxPilha)); // Faz a primeira pilha receber os dados da pilha auxiliar
    }
    
}

Pilha* copiaPilha(Pilha *p){

    Pilha *auxPilha = criaPilha();
    Pilha *copPilha = criaPilha();

    
}