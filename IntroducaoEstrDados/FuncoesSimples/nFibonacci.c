#include <stdio.h>

int fibonacci(int n);

int main(){
    int x = 6;

    printf("%d", fibonacci(x));

    return 0;
}


/*
Nessa função é retornado o enésimo número da sequência de fibonacci.
são utilizadas 3 variáveis locais, representando: 2 numeros da sequencia e o próximo número (soma dos dois anteriores).
Se n for 0, 0.
Se n for 1, 1.
Se n >= 2, cai no looping para ir calculando até o elemento de núemor n.
o calculo é feito assim:
prox é a soma dos dois anteriores, a e b.

a recebe o valor de b e b recebe o valor de prox
Apos os novos valores é feito a conta prox = a + b;
isso é feito n vezes.
*/
int fibonacci(int n){
    int a, b, prox;

    a = 0;
    b = 1;

    if (n == 0){
        return a;
    }

    if (n == 1){
        return b;
    }
    for (int i = 2; i <= n; i++){
        prox = a + b;
        
        a = b;
        b = prox;
    }

    return prox;
}