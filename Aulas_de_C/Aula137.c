#include <stdio.h>
#include <string.h>

//Aula 137 - Copiando uma string para a outra string, lembrando que strings é um conjunto de caracteres e por isso são armazenadas em um vetor.

int main()
{
    char palavra1[50] = {"Abacate"};
    char palavra2[50] = {"Maçã"};

    printf("\nAntes de copiar\n\nPalavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

    strcpy(palavra2, palavra1); // Primeiro parâmetro é o destino e o segundo é a origem

    printf("\nDepois de copiar\n\nPalavra 1: %s\nPalavra 2: %s\n", palavra1, palavra2);

    return 0;
}
