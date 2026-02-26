#include <stdio.h>

int contaVogais(char *str);

int main(){

    char *str = "Samuel";

    printf("%d", contaVogais(str));

    return 0;
}

/*
Nessa função eu devo contar a quantidade de vogais presentes em uma string(cadeia de caracteres).
Para isso, é criado uma variavel local que armazena a contagem, inciando em 0: vogCount.
Se o a string for nula, retorna 0.
Para buscar a ocorrencia das vogais foi feito um for. Esse for segue em looping até encontrar o marcador final '\0'.
Dentro do for é criada e utilizada uma variável local que armazena o caractere da iteração atual  do looping.
É utilizado o .toLower() para comparar o caractere atual com alguma vogal e caso seja uma vogal, incrementa o contador.
Por fim retorna a quantidade de vogais
*/
int contaVogais(char *str){
    int vogCount = 0;

    if (str == NULL){
        return vogCount;
    }

    for (int i = 0; str[i] != '\0'; i++){
        char c = str[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vogCount += 1;
        }
    }
    
    return vogCount;
}