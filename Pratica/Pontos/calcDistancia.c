/*
Perguntar sobre como nomear um pelido pro struct sem o uso do typedef.
*/

#include <stdio.h>

// Esse struct representa um par odenado (x,y), logicamente, no espaço R2.
typedef struct{
    float x;
    float y;
}Ponto;

int dentroRet(Ponto *p1, Ponto *p2, Ponto *p);

int main (){
    Ponto p, p1, p2;

    p1.x = 2;
    p1.y = 2;

    p2.x = 4;
    p2.y = 6;

    p.x = 3;
    p.y = 3;

    printf("%d", dentroRet(&p1, &p2, &p));

    return 0;
}


// Essa função deve checar se cada coordenada(x e y) do ponto p pertence aos limites dados pelas coordenadas dos vértices.
// Ou seja, x deve ser maior ou igual que o x do vértice inferior e deve ser menor que o x do vértice superior.
// O mesmo vale para y.
// A função retorna 1 se o ponto estiver no retangulo e 0 se não estiver.
int dentroRet(Ponto *p1, Ponto *p2, Ponto *p){
    if (p->x >= p1->x && p->x <= p2->x && p->y >= p1->y && p->y <= p2->y){
        return 1;
    }

    return 0;
}