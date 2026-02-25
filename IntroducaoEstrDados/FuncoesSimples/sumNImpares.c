#include <stdio.h>

int soma_inpares(int n);

int main(){
    int a = 3;
    int b = 7;

    printf("%d\n",soma_inpares(a));
    printf("%d\n",soma_inpares(b));

    return 0;
}

/*
Essa função é responsável por somar os n primeiros números ímpares e retornar sua soma.
Foi defrinida uma variável local "soma".
Lógica: 
Só incremento no looping caso o número seja ímpar. Basicamente, um contador de ímpares. E quando esse "contador" é 
igual a n, minha condição de parada foi cumprida.
*/
int soma_inpares(int n){
    int soma = 0;

    for (int i = 1; i <= n ; i+=2){
        soma += i;
    }
    
    return soma;
}