#include <stdio.h>

// Trocando os valores das variáveis sem o uso de uma variável auxiliar

int main()
{
    int a, b;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Os valores lidos foram: A = %d e B = %d\n", a, b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("Os novos valores são: A = %d e B = %d\n", a, b);

    return 0;
}
