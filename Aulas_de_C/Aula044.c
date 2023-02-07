#include <stdio.h>

//Aula 44 - Decisões aninhadas.

int main()
{
    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    if(num < 0){
        printf("O valor é negativo!\n");
    }

    else{
        if(num > 0){
            printf("O valor é positivo!\n");
        }

        else{
            printf("O valor é igual a 0!\n");
        }
    }
    return 0;
}
