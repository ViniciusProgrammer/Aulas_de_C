#include <stdio.h>

int main()
{
    int opcao;
    float reais, dolar;

    printf("1 - Reais em Dólar\n2- Dólar em Reais\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Quantos reais você deseja trocar: ");
        scanf("%f", &reais);

        printf("%.2f reais equivalem a $%.2f dolares\n", reais, reais / 5.30);

    }
    else if(opcao == 2){
        printf("Quantos dólares deseja trocar: ");
        scanf("%f", &dolar);

        printf("%.2f dólares equivalem a R$%.2f\n", dolar, dolar * 5.30);

    }

    return 0;
}
