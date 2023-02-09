#include <stdio.h>

int main()
{
    int mat1[3][3];

    //Digitando os valores pelo teclado!

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Informe um valor na linha %d coluna %d: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n");

    //Imprimindo os valores lidos que eu digitei acima!

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
