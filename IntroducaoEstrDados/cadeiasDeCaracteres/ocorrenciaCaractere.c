#include <stdio.h>

int contaChar(char *str, char c);

int main(){
    char *str = "Samuel é muito gente boa e apaixonado";
    char c = 'e';

    printf("%d",contaChar(str, c));

    return 0;
}

/*
Segui a abordagem de checar os valores da string utilizando reefrencia (str[i]).
Variavel local que armazena a contagem de ocorrencias.
Se a tring for vaiza, retorna 0.
No looping for, que itera até encontrar o marcador '\0', é feito a comparação o caractere que o usuario quer contar
e o caractere atual do looping.
*/
int contaChar(char *str, char c){
    int contOcorrencia = 0;

    if (str == NULL){
        return contOcorrencia;
    }

    for (int i = 0; str[i] != '\0'; i++){
        if (c == str[i]){
            contOcorrencia += 1;
        }
    }
    
    return contOcorrencia;
}