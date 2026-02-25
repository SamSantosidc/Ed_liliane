#include <stdio.h>

#define TAMANHO 10

int negativos (int n, float* vet);

int main(){

    float vetor[TAMANHO] = {1 , 3, -2, 6, -4, 8, -9, 10, -1, 0};
   
    printf("%d", negativos(TAMANHO, vetor));

    return 0;
}

/*
Essa função retorna quantos números negativos estão armazenados no vetor de tamanho n.
Tem uma variável local, sumNegativos.
Recebe um vetor:
- Checa se ele é nulo, se for semnegativos = 0.
- Percorre o vetor procurando números menores que 0, quando acha soma no contador.
*/
int negativos (int n, float* vet){
    int sumNegativos = 0;

    if (vet == NULL){
        return sumNegativos;
    }

    for (int i = 0; i < n; i++){
        if (vet[i] < 0){
            sumNegativos += 1;
        }
    }

    return sumNegativos;
}
