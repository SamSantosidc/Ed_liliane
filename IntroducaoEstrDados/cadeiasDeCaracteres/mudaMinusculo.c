/* 
Dúvida: Quando rodei com a string sendo um ponteiro de char, o progarama n rodava. Pesquisei na IA para ter uma noção
e ela me respondeu que ao usar o ponteiro eu tenho um "literal de string", mas n sei oque isso significa e pq da erro.
*/
#include <stdio.h>
#include <ctype.h>

void minusculo(char *str);

int main(){
    char str[] = "SaMuEl";

    // Checar antes da mudança
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    minusculo(str);

    // Checar depois da mudaça
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    return 0;
}


/*
Nessa função, eu recebo a string e atravez do for que vai ate o '\0', transformo cada caractere em minúsculo.
Uso a função tolower da bib <ctype.h> para cada caracter da string.
Percorro a string com um for e a cada str[i], trasformo em minusculo.

*/
void minusculo(char *str){

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }
    
}