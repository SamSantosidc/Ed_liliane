/*
Não consegui desenvolver as checagens de se é uma letra ou não. E tbm a exceção do Z, Z deve virar A. 
*/

#include <stdio.h>

void shiftString(char *str);

int main(){

    char str[] = "Caza + 1";

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c",str[i]);
    }

    // Apenas pulando uma linha, para melhor visualização no terminal.
    printf("%c\n", "");
    
    shiftString(str);

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c",str[i]);
    }

    return 0;
}

/*
Essa função deve receber uma string e mudar todos os caracteres nela para o próxmimo caractere do alfabeto. Ex: a -> b, d -> f.
Inicialmente pensei em montar uma lista com as letras do alfabeto e fazer a lógica: Para cada caractere da string, 
trocar pelo caractere + 1 da lista montada.
Porém as letras já estão montadas na tabela ASCII. E a operação 'a' + 1 == 'b' é o melhor pensamento para esse problema.
Excessão para se atentar: os caracteres do z devem virar a (z == a && Z == A)
*/

void shiftString(char *str){

    for (int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }

}
