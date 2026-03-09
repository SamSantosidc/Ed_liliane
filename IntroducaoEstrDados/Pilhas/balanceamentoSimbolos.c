#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhaSim.h"

struct no{
    char simb;
    No *prox;
};

struct pilha{
    No *prim;
};

int main(){

    char *expressao = "({[]})";

    printf("%d\n", simbBalanceado(expressao));


    return 0;
}

Pilha* criaPilha(void){
    Pilha *novaPilha = (Pilha*) malloc(sizeof(Pilha)); // Malloc para o tamanho de um struct do tipo Pilha

    if (novaPilha == NULL){ // Checa se a alocação de memória funcionou 
        printf("Memória indisponível\n");
        exit(1);
    }

    novaPilha->prim = NULL; // O ponteiro que aponta para o primeiro elemento(vulgo topo da pilha). Como podemos usar
    // a cabeça para pensar vemos que a pilha está sendo criada vazia, então não há primeiro elemento
    
    return novaPilha;
}

void push(Pilha *p, char c){
    No *novoNo; // Variavel do novo nó a ser inserido

    novoNo = (No*) malloc(sizeof(No)); // Solicita memória para um tipo No

    if (novoNo == NULL){ // Checa se a alocação foi bem sucedida
        printf("Memória indisponível\n");
        exit(1);
    }

    novoNo->simb = c; // Armazena o símbolo
    novoNo->prox = p->prim; // Simulando um "shift", novoNo passa a apontar para onde o primeiro aponta(topo da pilha)
    p->prim = novoNo; // A marcação do primeiro elemento passa a apontar para o novo elemento
    
}

char pop(Pilha *p){
    char carac;
    No *aux;

    if (isVazia(p)){
        exit(1);
    }

    aux = p->prim;
    carac = aux->simb;
    p->prim = aux->prox;

    free(aux);

    return carac;
    
}

int isVazia(Pilha *p){
    if(p->prim == NULL){
        return 1;
    }
    else{
        return 0;
    }

}

void liberaPilha(Pilha *p){



}

char topo(Pilha *p){
    if (isVazia(p)){ // Checa se está vazio
        exit(1);
    }
    
    char caractere; // Variável que armazena o valor do topo da pilha
    caractere = pop(p); // Recebe o valor vindo do pop
    push(p, caractere); // Reconstroi o topoda pilha com o valor armazenado

    return caractere;
}

int simbBalanceado(char *exp){
    Pilha * pilha = criaPilha(); // Pilha criada para checar a expressão

    for(int i = 0; exp[i] != '\0'; i++){ // Looping que itera por toda a string até encontrar o final \0

        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '['){ // Checa se o símbolo lido é um símbolo de abertura
            push(pilha, exp[i]); // Armazena no topo da pilha
        }

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){ // Checa se o símbolo é um símbolo de fechamento
            
            // Caso ela esteja vazia aqui, significa que há um simbolo de fechamento sem um de abertura antes
            // Captura expressões como ")..." inciam com elemntos de fechamento
            if (isVazia(pilha)){ 
                return 0;
            }
            
            if (exp[i] == ')' && (topo(pilha)) == '('){ // Se o topo da pilha for a abertura do simbolo analisado, retira da pilha 
                pop(pilha);
            }
            else if (exp[i] == '}' && (topo(pilha)) == '{'){ // Se o topo da pilha for a abertura do simbolo analisado, retira da pilha
                pop(pilha);
            }
            else if (exp[i] == ']' && (topo(pilha)) == '['){ // Se o topo da pilha for a abertura do simbolo analisado, retira da pilha
                pop(pilha);
            }
            else{ // Se existe algo aberto na pilha, mas não é o par correto do fechamento atual.
                return 0;
            }        
            
        }
    
    }

    //Falta implementar a função libera para esse tipo de nó e liberar antes do return

    // Ao chegar no fim, se ela estiver vazia é pq as comparações anteriores filtraram da forma correta, ou seja: É uma
    // expressão válida. Caso contrário é inválida
    if (isVazia(pilha)){
        printf("Expressão é válida\n");
        return 1;
    }
    else{ // Esse else captura expressões do tipo "(((". Só conteve elementos de abertura
        printf("Expressão é inválida\n");
        return 0;
    }
    
}