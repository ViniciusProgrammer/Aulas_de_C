#include <stdio.h>
#include <stdlib.h>

//Usando uma variável auxiliar para trocar valores entre variáveis

int main()
{
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Os valores informados são a: %d\tb: %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Agora os novos valores são a: %d\tb: %d\n\n", a, b);

    return 0;
}
