#include <stdio.h>

//Não consegui colocar dentro de um for, ou while pedir e armazenar numa variavel a nota, talvez isso seja possível mas eu não consegui nesse momento.

int main()
{
    float n1, n2, media;

    do{
        printf("Informe a primeira nota: ");
        scanf("%f", &n1);

    }while(n1 < 0 || n1 > 10);

    do{
        printf("Informe a segunda nota: ");
        scanf("%f", &n2);
    }while(n2 < 0 || n2 > 10);

    media = (n1 + n2) / 2;

    printf("A média semestral do aluno(a): %.1f\n", media);

    return 0;
}
