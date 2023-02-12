#include <stdio.h>

int somalinha(int matriz[3][3], int l){
    int c, soma = 0;

    for(c = 0; c < 3; c++){
        soma += matriz[l][c];
    }

    return soma;
}

int main()
{
    int mat[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe um valor para linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        printf("A soma da linha %d = %d\n", i, somalinha(mat, i));
    }

    return 0;
}
