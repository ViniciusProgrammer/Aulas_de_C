#include <stdio.h>
#include <string.h>

//Aula 146 - Função que descobre o tamanho de uma string

int tamString(char palavra[]){
    int i = 0;

    printf("Informe uma palavra: ");
    scanf("%20[^\n]", palavra);

    while(palavra[i] != '\0'){
        i++;
    }

    return i;
}

int main()
{
    char str[20];

    printf("Essa palavra possui %d caracteres\n", tamString(str));

    return 0;
}
