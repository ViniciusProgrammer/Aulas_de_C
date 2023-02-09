#include <stdio.h>

//Aula 101 - Lendo e imprimindo valores e adicionando no vetor.

int main()
{
    int valores[10];

    for (int c = 0; c < 10; c++){
        printf("Digite um valor na posição %d: ", c);
        scanf("%d", &valores[c]);
    }
    printf("\n");

    for (int c = 0; c < 10; c++){
        printf("%d ", valores[c]);
    }

    printf("\n");

    return 0;
}
