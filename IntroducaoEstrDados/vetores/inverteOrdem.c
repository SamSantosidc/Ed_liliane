#include <stdio.h>

#define TAMANHO 10

void inverte (int n, int* vet); 

int main(){
    int vetor[TAMANHO] = {1 , 3, -2, 6, -4, 8, -9, 10, -1, 0};

    inverte(TAMANHO, vetor);

    for (int i = 0; i < TAMANHO; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

/*
Nessa função invertemos os valores NUMERICOS de um vetor.
Separamos o vetor em duas partes e trocamos o primeiro da primeira parte com o ultimo da segunda.
Depois o segunbdo com o penultimo.
...
...
Invertido!!!
Para isso usamos uma variável temporária.
int temp = vet[i]; recebe o primeiro elemento da lista
vet[i] = vet[TAMANHO - 1- i]; vet[i](Primeiro elemento) recebe o ultimo elemento da lista
ve[TAMANHO -1 -i] = temp;  vet[TAMANHO -1 -i](Ultimo elemento) recebe o primeiro elemento
*/
void inverte(int n, int* vet){
    for (int i = 0; i < TAMANHO/2; i++){
        int temp = vet[i];
        vet[i] = vet[TAMANHO - 1 - i];
        vet[TAMANHO - 1 - i] = temp;      
    }
}