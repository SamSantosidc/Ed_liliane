#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

#define TAMANHO_BUFFER 30

int main(){
    FILE *texto = fopen("C:\\Users\\Samue\\Downloads\\tentativa_fopen.txt", "r");
    printf("Verificando caminho...\n");
    //system("dir C:/Users/Samue/Downloads"); perguntar pq o uso do system aponta [Opção inválida - "Users".]

    // Sempre checar se o arquivo foi carregado corretamente
    if (texto == NULL) {
        perror("Arquivo não foi carregado com sucesso");
        return 1;
    }
    printf("%s\n", "Arquivo passou pela checagem");

    char buffer[TAMANHO_BUFFER];

    memset(buffer, 0, sizeof(buffer)); 
    /*Comentar sobre limpar buffers(memoria) antes de usar, pois C pega a primeira memoria que não esta sendo utilizada,
     mas ela vem com muito lixo. É de responsabilidade do programador PEGAR, LIMPAR, UTILIZAR.
     Prefixo "mem" diz respeito a memória */
    fgets(buffer, sizeof(buffer), texto);
    printf("%s\n", buffer);

    // Sempre que abrir, tem que fechar
    fclose(texto);
    return 0;
}
