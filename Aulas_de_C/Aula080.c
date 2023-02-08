#include <stdio.h>

int main()
{
    float centavos = 0.1, soma = 0;
    int dias = 30;

    for (int c = 1; c <= dias; c++){
        printf("Dia %d temos %.1f\n",c, centavos);
        soma += centavos;
        centavos = centavos * 2;
    }
    printf("%.2f\n",soma);
    printf("%.2f\n", soma/100.0);

    return 0;
}
