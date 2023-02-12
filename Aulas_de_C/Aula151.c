#include <stdio.h>

int somacoluna(int mat[3][3], int col){
    int l, soma = 0;

    for(l = 0; l < 3; l++){
        soma += mat[l][col];
    }

    return soma;

}

void imprimirmatriz(int x[3][3]){
    int l, c;

    printf("\n");

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("%d ", x[l][c]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[3][3];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe um valor na linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j = 0; j < 3; j++){
        printf("Soma da coluna %d = %d\n", j, somacoluna(matriz, j));
    }

    imprimirmatriz(matriz);

    return 0;
}
