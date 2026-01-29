# Conceitos base
Eficiencia = Rapidez;
             Segurança;
             Economia.

Estrutura de dados = Organizar a informação da memória;
                     Acessar as informações da memória.

# Bib iniciais
Lembrar, sempre que for pensar em um código em C, usar as bibliotecas necessárias com o #include

    <stdio.h> -> Standart Input-Output Header. define funções, macros e variáveis essenciais para
                operações de entrada e saída. Exemplos: printf() e scanf().
    <>

    <>

    <>

# Função printf
Essa função exibe dados formatados na saída padrão (Geralmente na tela). Ela faz parte da <Stdio.h>.
Ela recebe um numero variável de parametros, dependendo do formatador utlizado, no seguinte padrão:

    printf("String de formatação", parametro1, parametro2, ...);

## Principais formatadores

    %d ou %i -> Inteiros decimais (int);
    %f -> Número de ponto flutuante/decimal (float ou double);
    %.2f -> Formata um float com 2 casas decimais;
    %c -> Um único caractere;
    %s -> Cadeia de caracteres (string);
    %u -> Inteiro sem sinal (unsigned int);
    %x ou %X -> Hextadecimal;
    %p -> Endereço de memória (ponteiro); NÃO IMPRIME O PONTEIRO, IMPRIME O ENDEREÇO DE MEMORIA!!!
    %% -> imprime o caractere %;

    Exemplo:

    #include <stdio.h>

    int main () {
        int idade = 19;
        float peso = 69.5;
        char nome[10] = "Samuel";

        printf("%d\n", idade);
        printf("%.1f\n", peso);
        printf("%s\n", nome);

        return 0;
    }

    2 detalhes a se atentar: Utilizei o %.1f pois o %f por padrão exibe 6 casas deciamis, oque resultaria em 69.500000. E o uso da \n para os prints não ficarem colados um no outro, com uma visualização ruim.

    Nota mental: Uma opção válida é utilizar ponteiro para armazenar o nome char: char *nome = Samuel;

# Vetores
Sequencia de campos em memória.
Os elementos devem ter: O mesmo tipo;
                        Mesma finalidade.

É uma alocação sequencial.

Sintáxe:
int v [10];

Em vetores podem ter dois tipos de ponteiros, os explicitos e os implicitos.
PE -> Controle direto do endereço de memória.
Ex: Ponteiros simples (int *p)

PI -> Não tem controle direito
Ex: (int vetor[5] = {1,2,3,4,5}) 

# Formas de percorrer um vetor
## While
É possívle percorrer um vetor com o While fazendo:
while(*ponteiro){
    if(Alguma_Condição){
        return X;           -> Caso seja apenas uma linha é possível reduzir a expressão do if: if(Alguma_Condição) return X;
    }
    else ponteiro++;        -> Incremena o ponteiro (Apontando para o próximo elemento)
}

Esse método funciona especificamente para Strings. De forma mais correta, esse padrão funciona qunado o vetor tem um valor sentinela '\0'.

## For 
A lógica é parecida com a do while. É só usar o for para percorrer o vetor(seja de números, chars...)
Exemplo:

    void printArray(int v[], intarrayLengh){
        for (int i = 0; i < arrayLenght; i++){
        printf("%d", v[i]);
        }
        printf("\n");
    }

Esse código é uma fução que percorre um vetor e printa seus elementos.

# Manipulação de arquivos

O FILE é um tipo de dado, de forma mais correta é um struct definido na bib <stdio.h>.
Ele representa um arquivo aberto, sendo:
    - Um .txt, .csv....;
    - fluxo de E/S;

Um arquivo não é só texto, ele contem:
    - posição do cursor;
    - modo de abertura (leitura, escrita, append...);
    - buffer;
    - estado de erro/  EOF;

Devemos usar ponteiros para declarar um FILE
Ex:
    FILE *arquivo;

Dessa forma o SO gerencia ele (tamanho, onde guardar...).

Para abrir um arquivo usamos a função fopen
Essa função: 
    - retona um FILE* valido -> sucesso
    - retorna NULL -> falha

## Modos de abertura no fopen

    "r" -> leitura
    "w" -> escrita
    "a" -> append (escreve no final)
    "r+" -> leitura + escrita
    "w+" -> leitura + escrita (zera o arquivo)
    "a+" -> leitura mais escrita no final         

Exemplo de uso:

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("teste.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "Hello, C!\n");
    fprintf(arquivo, "Arquivo usando FILE\n");

    fclose(arquivo);
    return 0;
}

# Struct
Struct, em C, é um tipo. Ele agrupa informações que não tem o mesmo tipo mas tem o mesmo contexto.
Exemplo:

struct pessoa {

    int idade;
    char nome[150];

}

Como pode ser visto é uma declaração sem nome de variável.

# Alocação Dinâmica
É a alocação de memória em tempo de execução. Solicitar e usar a memória durante a execução.
Isso devolve uma resposta -> Sim ou Não

O objetivo é evitar desperdício, reservando de acordo com a necessidade. É uma memoria alocada dinamicamente, não tem nome.
Exemplo de aplicação:

    Quando queremos guardar vetores de nomes
# Mandamentos

1 -> "Main deve ser finalizada com return 0";

2 -> "Tu és eternamente responsável pela mémoria que alocas";