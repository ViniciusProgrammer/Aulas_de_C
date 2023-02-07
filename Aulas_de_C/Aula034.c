#include <stdio.h>

//Calculando a conta de um restaurante

int main()
{
    int pessoas;
    double despesa, gojeta;

    printf("Informe o total da despesa: ");
    scanf("%lf", &despesa);

    printf("Informe a porcetagem da gojeta: ");
    scanf("%lf", &gojeta);

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    printf("Para cada pessoa ficou: R$ %.2lf\n", (despesa + ((despesa * gojeta)/100))/pessoas);

    return 0;
}
