#include <stdio.h>
#include <time.h>


int main()
{
    int i, j, matriz[4][4];
    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = rand() % 100;
        }
    }

    printf("\nMatriz Completa\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }


    printf("\nValores abaixo da Diagonal Principal\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i > j){
                printf("%2d ", matriz[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nValores acima da Diagonal Principal\n");

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i < j){
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
