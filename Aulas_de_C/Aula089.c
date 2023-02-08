#include <stdio.h>

int main()
{
    int x, y;

    do{
        printf("Informe a coordenada X: ");
        scanf("%d", &x);

        printf("Informe a coordenada Y: ");
        scanf("%d", &y);

        if (x > 0 && y > 0){
            printf("Primeiro\n");
        }
        else if (x < 0 && y < 0){
            printf("Terceiro\n");
        }
        else if (x < 0 && y > 0){
            printf("Segundo\n");
        }
        else if (x > 0 && y < 0){
            printf("Quarto\n");
        }

    }while(x != 0 & y != 0);

    return 0;
}
