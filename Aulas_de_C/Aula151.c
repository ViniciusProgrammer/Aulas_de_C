#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Aula 151 - Como fazer um procedimento para converter uma string em maiúsculo ou minúsculo

//procedimento que converte uma string para maiusculo
void maiusculo(char s1[], char s2[]){

    int i = 0;

    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; //Meu vetor s2 precisa receber o caracter de fim de string, para assim finalizarmos a copia de uma string para a outra, que nesse caso além de copiar estamos convertendo a string para maiúsculo com a função toupper().
}

void minusculo(char s1[], char s2[]){
    int i = 0;

    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

int main()
{   
    char str1[] = {"Ola, Bom Dia!"};
    char str2[50];

    printf("%s\n", str1);

    maiusculo(str1, str2);

    printf("%s\n", str2);

    minusculo(str1, str2);

    printf("%s\n", str2);
    
    return 0;
}
