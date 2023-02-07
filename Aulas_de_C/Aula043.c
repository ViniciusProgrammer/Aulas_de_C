#include <stdio.h>

//Aula 43 - Operador ternário.

//Modelo: condição ? verdadeiro : falso

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    num < 0 ? printf("\nO número é negativo!\n") : printf("\nO número é positivo ou igual a zero\n-");
 //Condição ?  verdadeiro                        :  falso   

    return 0;
}
