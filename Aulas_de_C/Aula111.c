#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10];
    int i, j;

    
    for (i = 0; i < 10; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Elementos do vetor 1: ");
    
    for (i = 0; i < 10; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    printf("Elementos do vetor 2: ");

    for (j = 0; j < 10; j++){
        vetor2[j] = vetor1[j] * vetor1[j];
    printf("%d ", vetor2[j]);
    }

    printf("\n");

    return 0;
}
