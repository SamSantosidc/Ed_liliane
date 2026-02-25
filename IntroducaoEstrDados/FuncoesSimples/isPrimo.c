#include <stdio.h>

int isPrimo(int n);

int main(){

    int x,y,z;

    x = 7;
    y = 6;
    z = 11;

    printf("%d\n", isPrimo(x));
    printf("%d\n", isPrimo(y));
    printf("%d\n", isPrimo(z));

    return 0;
}


/*
Nessa função, checo se um numero inteiro é primo ou não.
A lógica do algoritmo é:
Se n <= 1 -> não é primo

Se n == 2 -> é primo

Se n é par -> não é primo

Para i = 3 até enquanto i*i <= n, pulando de 2 em 2:

se n % i == 0 -> não é primo

Se sair do loop -> é primo

Ao fim, se for primo, retorna 1. caso contrário, 0.
*/
int isPrimo(int n){
    if (n <= 0){
        return 0;
    }

    if (n ==2){
        return 1;
    }

    if (n % 2 == 0){
        return 0;
    }

    for (int i = 3; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;

    return 0;
}