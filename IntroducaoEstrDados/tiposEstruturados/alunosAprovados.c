#include <stdio.h>

struct aluno{
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

struct turma{
    char nome[21];
    Aluno *alunos;
};
typedef struct turma Turma;

int addAluno(char *mome, char *matricula, char turma);
int addNotaAluno(char *matricula, float p1, float p2, float p3);
void imprimeAprovados(int n, Aluno **turma);

int main() {




    return 0;
}
