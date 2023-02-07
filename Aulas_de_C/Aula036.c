#include <stdio.h>

// Convertendo reais em dólares

int main()
{
    double dolares = 5.30, reais;

    printf("Informe quantos reais quer trocar por dólares: ");
    scanf("%lf", &reais);

    printf("O valor de R$ %.2lf equivale a U$ %.2lf\n", reais, reais / dolares);

    return 0;
}
