//Tarefa : Ordenar um vetor de 5 posições em uma função sem alterar o vetor original.
#include <stdio.h>

int main(){
    
    int v[5] = {7,1,9,6,5};
    int vTamanho = sizeof(v) / sizeof(v[0]); // Calcula o tamanho do vetor;
    int vCopia[5];                           // sizeOf(v) (5 ints → 5 × 4 bytes = 20 bytes)
                                             // divide (/) por sizeOf(v[0]) 4 bytes: 20 / 4 = 5
    // Faz uma cópia do vetor original
    for (int a = 0; a < vTamanho; a++){
        vCopia[a] = v[a];
    }

    // Print de teste para ver se o vetor foi copiado corretamente
    for (int b = 0; b < vTamanho; b++){
        printf("%d - ", vCopia[b]);
    }

    // Bubble sort
    int temp;
    for (int i = 0; i < vTamanho - 1; i++){
        for (int j = 0; j < vTamanho -1 -i; j++){
            if (vCopia[j] > vCopia[j+1]){
                temp = vCopia[j];
                vCopia[j] = vCopia[j+1];
                vCopia[j+1] = temp;
            } 
        }
    }

    // Print para ver se o vetor foi organizado corretamente 
    for (int c = 0; c < vTamanho; c++){
        printf("%d - ", vCopia[c]);
    }    
}