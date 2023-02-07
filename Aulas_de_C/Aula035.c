#include <stdio.h>

// Calculando o pagamento de um funcionário

int main()
{
    int imposto = 8, dias, valorPorDia = 45;
    double valorTotal, desconto;

    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);

    valorTotal = (dias * valorPorDia);
    
    desconto = (valorTotal * imposto/100);

    printf("O valor liquído a receber é R$ %.2lf\n",valorTotal - (valorTotal * imposto/100));
    printf("Foram descontados R$ %.2lf do total de R$ %.2lf disponíveis\n", desconto, valorTotal);

    return 0;
}
