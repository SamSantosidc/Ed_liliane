#include <stdio.h>
#include <math.h>

#define TAMANHO 10

int pares (int n, float* vet);

int main(){

    float vetor[TAMANHO] = {1 , 3, -2, 6, -4, 8, -9, 10, -1, 0};
   
    printf("%d", pares(TAMANHO, vetor));

    return 0;
}


/*
Essa fução conta quantos números pares tem em um vetor. Ao checar se o resto da divisão pro 2 é igual a 0,
se for o contador soma mais um. Ao fim, temos a quantidade de pares.
*/
int pares(int n, float* vet){
    int sumPares = 0;

    if(vet == NULL){
        return sumPares;
    }

    for (int i = 0; i < n; i++){
        if (fmod(vet[i], 2.0) == 0){
            sumPares += 1;
        }
    }

    return sumPares;
}