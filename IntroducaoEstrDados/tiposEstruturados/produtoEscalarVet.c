#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vetor3D;

float dot(Vetor3D *v1, Vetor3D *v2);

int main() {
    Vetor3D vetor1;
    Vetor3D vetor2;

    vetor1.x = 2;
    vetor1.y = 2;
    vetor1.z = 2;

    vetor2.x = 3;
    vetor2.y = 2;
    vetor2.z = 5;

    printf("%f", dot(&vetor1, &vetor2));

    return 0;
}

/*
Esta função recebe dois ponteiros pra um tipo struct referente a um vetor no espaço 3D.
Primeiro é checado se um dos dois é nulo, se for o caso a função retorna 1.
Após a checagem, é calculado o produto do x, y e z e somados. Retornando o escalar resultante desse produto.
*/

float dot(Vetor3D *v1, Vetor3D *v2){
    if (v1 == NULL || v2 == NULL){
        return 1;
    }

    float produtoEscalar;

    produtoEscalar = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);

    return produtoEscalar;
}