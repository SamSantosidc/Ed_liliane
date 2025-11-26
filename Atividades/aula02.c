//Tarefa : Ordenar um vetor de 5 posições em uma função sem alterar o vetor original.
#include <stdio.h>

int main(){
    int v[5] = {7,1,9,6,5};
    int vCopia[5];

    for (int i = 0; i < sizeof(v); i++){
        vCopia[i] = v[i];
    }

    printf("%d", vCopia);
    

    //Aplicar algoritmo de ordenação, quero o InsertSorte
    
}