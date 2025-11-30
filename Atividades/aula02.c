//Tarefa : Ordenar um vetor de 5 posições em uma função sem alterar o vetor original.
#include <stdio.h>

void printArray(int v[], int arrayLenght){
    for (int i = 0; i < arrayLenght; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void bubbleSort(int *p, int arrayLenght){
    int *pv[arrayLenght];   // vetor de ponteiros
    int *temp;

    for (int i = 0; i < arrayLenght; i++){
        pv[i] = &p[i];
    }

    // apontando cada pv[i] para o endereço do vetor original
    for(int i = 0; i < arrayLenght; i++){
        pv[i] = &p[i];
    }
    // Aqui tinha um print de teste para ver se o vetor foi copiado corretamente
    // {1,4,5,7,8,5,2}
    // Bubble sort
    for(int i = 0; i < arrayLenght - 1; i++){
        for(int j = 0; j < arrayLenght - 1 - i; j++){
            if(*pv[j] > *pv[j+1]){   // compara os valores apontados
                temp = pv[j];
                pv[j] = pv[j+1];
                pv[j+1] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for(int i = 0; i < arrayLenght; i++){
        printf("%d ", *pv[i]);
    }
    printf("\n");

}

void selectionSort(int *p, int arrayLenght){
    int *pv[arrayLenght];   // vetor de ponteiros
    int *temp;
    int menor;

    for (int i = 0; i < arrayLenght; i++){
        pv[i] = &p[i];
    }

    if (arrayLenght == 0){
        printf("%s", "Vetor vazio");
    }

    for (int i = 0; i < arrayLenght; i++){
        menor = i;
        for (int j = i + 1; j < arrayLenght; j++){
            if (*pv[j] < *pv[menor]){
                menor = j;
            }
        }
        temp = pv[i];
        pv[i] = pv[menor];
        pv[menor] = temp;
    }

    printf("Vetor ordenado: ");
    for(int i = 0; i < arrayLenght; i++){
        printf("%d ", *pv[i]);
    }
    printf("\n");

}

void insertionSort(int p*, int arrayLenght){

}

int main(){

    int v[5] = {13,7,1,9,6};
    int *p = v;
    int vSize = sizeof(v) / sizeof(v[0]);
    // int = x;  [BBBB]   int v[5] = {[BBBB] ,[BBBB] ,[BBBB] ,[BBBB] ,[BBBB]};
    // int vSize = sizeof(v) / sizeof(v[0]);   Calcula o tamanho do vetor; EX:
    // sizeOf(v) (5 ints → 5 × 4 bytes = 20 bytes)dw
    // divide (/) por sizeOf(v[0]) 4 bytes: 20 / 4 = 5
    
    selectionSort(p, vSize);

    printArray(v, vSize);

}