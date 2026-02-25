#include <stdio.h>

int dentro_ret (int x0, int y0, int x1, int y1, int x, int y);

int main(){

    int x0,y0,x1,y1,x,y;

    x0 = 2;
    y0 = 2;
    x1 = 4;
    y1 = 6;

    x = 1;
    y = 4;

    printf("%d",dentro_ret(x0, y0, x1, y1, x, y));

    return 0;
}

/* 
Nessa função eu precisei checar se, dado dois pares ordenados, vértices de um retângulo, um ponto qualquer pertence 
a esse retângulo. 
para isso, usei a lógica de checar se, para cada dimensão (x e y) elas pertenciam ao intervalo que forma o retâmgulo
no espaço.
Se pertencer, retorna 1. Caso contrário, 0.
*/
int dentro_ret (int x0, int y0, int x1, int y1, int x, int y){
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1){
        return 1;
    }
    
    return 0;
}