#include <stdio.h>

int main()
{
    int vetor1[20], c, fim = 19, copia;

    for (c = 0; c < 20; c++){
        printf("Informe o valor na posição %d: ", c); //Lendo os valores para armazenar no vetor
        scanf("%d", &vetor1[c]);
    }

    printf("\nVetor original!\n");

    for (c = 0; c < 20; c++){
        printf("%2d ", vetor1[c]); //imprimindo os valores do vetor
    }

    printf("\n");

    for (c = 0; c < 10; c++){ //Aqui o programa vai rodar até a metade do tamanho do vetor (Pois pede pra trocar a 11 posição com a 10)
        copia = vetor1[c]; // A variável cópia recebe o valor do vetor em suas respectivas posições
        vetor1[c] = vetor1[fim]; // A posição 0 ta recebendo a posição 19 que é a última do vetor
        vetor1[fim] = copia; // A posição 19 ta recebendo a posição 0 que é a primeira do vetor
        fim--; // Aqui o final tá diminuido, já que são 19 aqui vai ficar 18 depois 17... 16... 15...
    }

    return 0;
}
