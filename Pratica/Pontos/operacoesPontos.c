#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

// Esse struct representa um par odenado (x,y), logicamente, no espaço R2.
struct ponto{
    float x;
    float y;
};

int main (){

    Ponto *p1 = criaPonto(5, 9);
    mostrarPonto(p1);

    Ponto *p2 = criaPonto(3, 10);
    mostrarPonto(p2);

    atribuiPonto(p1, 4,6);
    mostrarPonto(p1);

    atribuiPonto(p2, -6,-8);
    mostrarPonto(p2);

    printf("Distancia entre os dois pontos: %f\n", distanciaPonto(p1, p2));

    Ponto *novoPonto = calculaPonto(p1, p2);
    mostrarPonto(novoPonto);

    return 0;
}

void atribuiPonto(Ponto *p, float x, float y){

    p->x = x;
    p->y = y;
}

Ponto* calculaPonto(Ponto *p1, Ponto *p2){
    Ponto *novoPonto;

    novoPonto->x = p1->x + p2->x;
    novoPonto->y = p1->y + p2->y;

    return novoPonto;
}

Ponto* criaPonto(float x, float y){
    Ponto *novoponto;

    novoponto = (Ponto *) malloc(sizeof(Ponto));

    if (novoponto == NULL){
        printf("Memória insuficiente!\n");
        exit(1);
    }

    novoponto -> x = x;
    novoponto -> y = y;

    return novoponto;
}

float distanciaPonto(Ponto *p1, Ponto *p2){
    float distanciaX;
    float distanciaY;

    distanciaX = p2 -> x - p1 -> x;
    distanciaY = p2 -> y - p1 -> y;

    return sqrt(distanciaX * distanciaX + distanciaY * distanciaY);
}

void liberaPonto(Ponto *p){
    free(p);
}

void mostrarPonto(Ponto *p){
    printf("Valor de x: %f\n", p->x);
    printf("Valor de y: %f\n", p->y);
}

// Essa função deve checar se cada coordenada(x e y) do ponto p pertence aos limites dados pelas coordenadas dos vértices.
// Ou seja, x deve ser maior ou igual que o x do vértice inferior e deve ser menor que o x do vértice superior.
// O mesmo vale para y.
// A função retorna 1 se o ponto estiver no retangulo e 0 se não estiver.
