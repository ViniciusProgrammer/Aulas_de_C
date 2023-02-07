#include <stdio.h>

//Aula 45 - Operador ternário aninhado


int main()
{
    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    num < 0 ? printf("\nO valor é negativo!\n") :
    num > 0 ? printf("O valor é positivo\n") : printf("O valor é igual a zero\n");

    return 0;
}
