#include <stdio.h>

int main()
{
    float n1, n2, media_semsetral;

    int opcao;
    do{
        do{
            printf("Informe a primeira nota: ");
            scanf("%f", &n1);
        }while(n1 < 0 || n1 > 10);

        do{
            printf("Informe a segunda nota: ");
            scanf("%f", &n2);
        }while(n2 < 0 || n2 > 10);

        media_semsetral = (n1 + n2)/2;

        printf("%.1f\n", media_semsetral);

        printf("\nNovo cálculo?\n\n1-Para novo cálculo\n2 - Sair\nEscolha: ");
        scanf("%d", &opcao);

    }while(opcao != 2);

    return 0;
}
