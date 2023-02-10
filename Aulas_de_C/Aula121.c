#include <stdio.h>
#include <time.h>

int main()
{
    int i, j, matriz[5][5];

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    printf("\nMatriz Completa\n\n");

    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Principal\n\n");

    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                printf("%2d ", matriz[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
