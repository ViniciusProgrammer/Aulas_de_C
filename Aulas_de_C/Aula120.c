#include <stdio.h>
#include <time.h>


int main()
{
    int i, j, matrizA[3][3], matrizB[3][3], matrizC[3][3];
    
    srand(time(NULL));
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizA[i][j] = rand() % 100;
        }
    }
    
    printf("Matriz A\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%2d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizB[i][j] = rand() % 100;
        }
    }

    printf("Matriz B\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%2d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz C\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%3d ", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
