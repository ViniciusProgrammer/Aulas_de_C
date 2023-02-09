#include <stdio.h>
#include <string.h>

//Outra forma de se copiar uma string para a outra através de caracter por caracter

int main(){

    char palavras1[100] = {"manchester united"}, palavras2[100] = {"santos"};
    int i = 0;

    while(palavras1[i] != '\0'){
        palavras1[i] = palavras2[i];
        i++;
    }

    printf("%s e %s\n", palavras1, palavras2);

    return 0;
}
