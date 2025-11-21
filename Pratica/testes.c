#include <stdio.h>

int is_in(char *s, char c);

int main() {
    char *s = "Perfect";
    char c = 'f';

    int resultado = is_in(s, c);
    printf("%d", resultado);
}

int is_in(char *s, char c){
    while(*s)
        if(*s == c) return 1;
        else s++;
    return 0;
}