#include <stdio.h>

//Aula 109 - Somando duas matrizes e jogando o resultado da soma em uma terceira matriz, esse exemplo que fiz eu fiz para treinar e absorver o conteúdo.

int main()
{
    
    int matriz1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, matriz2[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90}, matriz3[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j]; 
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%2d ", matriz3[i][j]);
        }
        printf("\n");
    }   

    printf("\n\n");

    return 0;
}
