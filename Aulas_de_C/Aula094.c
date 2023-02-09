#include <stdio.h>

int main()
{
    int c, valor, i;

    printf("Valor de parada de C: ");
    scanf("%d", &valor);

    for (c = 1; c <= valor; c++){
        for(i = 1; i <= c; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
