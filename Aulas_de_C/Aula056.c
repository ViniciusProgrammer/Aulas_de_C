#include <stdio.h>

int main()
{
    int mes;
    
    printf("1 - Janeiro\n2 - Fevereito\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 -Outubro\n11 -Novembro\n12 -Dezembro\n");

    scanf("%d", &mes);

    switch (mes){
    case 1:
    printf("Mês escolhido foi Janeiro\n");
    break;

    case 2:
    printf("Mês escolhido foi Fevereiro\n");
    break;

    case 3:
    printf("Mês escolhido foi Março\n");
    break;

    case 4: 
    printf("Mês escolhido foi Abril\n");
    break;

    case 5:
    printf("Mês escolhido foi Maio\n");
    break;

    case 6:
    printf("Mês escolhido foi Junho\n");
    break;

    case 7:
    printf("Mês escolhido foi Julho\n");
    break;

    case 8:
    printf("Mês escolhido foi Agosto\n");
    break;

    case 9:
    printf("Mês escolhido foi Setembro\n");
    break;

    case 10:
    printf("Mês escolhido foi Outubro\n");
    break;

    case 11:
    printf("Mês escolhido foi Novembro\n");
    break;

    case 12:
    printf("Mês escolhido foi Dezembro\n");
    break;
    
    default:
        printf("Mês escolhido é inválido\n");
    }

    return 0;
}
