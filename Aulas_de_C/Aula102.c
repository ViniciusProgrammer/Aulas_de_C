#include <stdio.h>

// Aula 102 - dobrando os elementos de um vetor.

int main()
{
    int valores[10];

    for (int c = 0; c < 10; c++){
        printf("Informe o valor na posição %d: ", c);
        scanf("%d", &valores[c]);

    }

    for (int c = 0; c < 10; c++){
        valores[c] = valores[c] * 2; // Aqui os elementos estão recebendo os seus próprios elementos e sendo multiplicados por 2.
        printf("%d", valores[c]);
    }

    printf("\n");

    return 0;
}
