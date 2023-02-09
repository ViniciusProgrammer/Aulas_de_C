#include <stdio.h>

int main()
{
    int vetor1[25], vetor2[25], vetor3[25];
    int i, j, c;

    printf("\nPrimeiro vetor!\n");
    for (i = 0; i < 25; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%d", &vetor1[i]);
    }
    printf("\n\n");

    printf("\nSegundo vetor!\n");

    for (j = 0; j < 25; j++){
        printf("Informe um valor para a posição %d: ", j);
        scanf("%d", &vetor2[j]);
    }
    printf("\n\n");

    printf("\nTerceiro Vetor!\n");
    
    for (c = 0; c < 25; c++){
        vetor3[c] = vetor1[c] + vetor2[c];
        printf("%d ", vetor3[c]);
    }
    printf("\n\n");

    return 0;
}
