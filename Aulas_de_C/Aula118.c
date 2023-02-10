#include <stdio.h>
#include <time.h>

//Esse exercício eu poderia ler pelo teclado como eu fiz pela primeira vez só que na resolução do exercício o professor gerou números randômicos.

int main()
{
    int i, j, soma = 0, matriz[5][7];
    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            matriz[i][j] = rand() % 100;
            soma += matriz[i][j];
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos valores da matriz: %d \n", soma);

    return 0;
}
