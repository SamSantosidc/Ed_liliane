#include <stdio.h>

void stringOposta(char *str);

int main(){

    char str[] = "Samuel";

    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    printf("%c", "");

    stringOposta(str);

    for (int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    return 0;
}

void stringOposta(char *str){
    
}