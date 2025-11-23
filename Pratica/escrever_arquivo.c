#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 30

int main(){
    // Declaração
    char buffer[BUFFER_SIZE];
    char *endereço_texto = "C:\\Users\\Samue\\Downloads\\tentativa_fopen.txt";
    FILE *texto_teste = fopen(endereço_texto, "r+");

    // Teste/preparação
    memset(buffer, 0, sizeof(buffer));

    if (texto_teste == NULL){
        printf("%s", "Arquivo não encontrado");
        return 1;
    } else{
        printf("%s", "Arquivo encontrado");
    }

    char *novo_texto = "Consegui escrever!";
    fputs(novo_texto, texto_teste);

    // Esse trecho le o conteudo do buffer e exibe (nesse caso, um texto[String])
    memset(buffer, 0, sizeof(buffer));
    fgets(buffer, sizeof(buffer), texto_teste);
    printf("%s", buffer);

    fclose(texto_teste);
    return 0;
}