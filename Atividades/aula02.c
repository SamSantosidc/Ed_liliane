//Tarefa : Ordenar um vetor de 5 posições em uma função sem alterar o vetor original.
#include <stdio.h>

#define TAMANHDO_DO_VETOR 10

void bubbleSort(int v[], int arrayLenght);
void selectionSort(int v[], int arrayLenght);
void insertionSort(int v[], int arrayLenght);

int main(){
    
    int v[TAMANHDO_DO_VETOR] = {13,7,1,9,6,3,5,11,2,6};
    int vCopia[TAMANHDO_DO_VETOR];
    // int vTamanho = sizeof(v) / sizeof(v[0]);Calcula o tamanho do vetor; EX:
                                            // sizeOf(v) (5 ints → 5 × 4 bytes = 20 bytes)
                                            // divide (/) por sizeOf(v[0]) 4 bytes: 20 / 4 = 5
    
    for (int i = 0; i < TAMANHDO_DO_VETOR; i++){
        vCopia[i] = v[i];
    }
    
    selectionSort(vCopia, TAMANHDO_DO_VETOR);

    for (int i = 0; i < TAMANHDO_DO_VETOR; i++){
        printf("%d - ", vCopia[i]);
    }
}

void bubbleSort(int v[], int arrayLenght){
    int temp;

    if (arrayLenght == 0){
        printf("%s", "Vetor vazio");
    }

    // Aqui tinha um print de teste para ver se o vetor foi copiado corretamente

    // Bubble sort
    for (int i = 0; i < arrayLenght - 1; i++){
        for (int j = 0; j < arrayLenght -1 -i; j++){
            if (v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            } 
        }
    }

    // Aqui tinha um print de teste para ver se o vetor foi ordenado corretamente

}

void selectionSort(int v[], int arrayLenght){
    int temp;
    int menor;

    if (arrayLenght == 0){
        printf("%s", "Vetor vazio");
    }

    for (int i = 0; i < arrayLenght; i++){
        menor = i;
        for (int j = i + 1; j < arrayLenght; j++){
            if (v[j] < v[menor]){
                menor = j;
            }
        }
        temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }

    // Aqui tinha um print de teste para ver se o vetor foi ordenado corretamente

}

void insertionSort(int v[], int arrayLenght){

}