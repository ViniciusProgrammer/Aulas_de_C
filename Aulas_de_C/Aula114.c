#include <stdio.h>

int main(void)
{
    float valorTotVendas = 0, valorObjeto[10];
    int maisVendido = 0, i, totalVendidos = 0, quantidadeVendida[10];

    //Item A da questão

    for(i = 0; i < 10; i++){
        printf("Informe o preço do produto na posição %d: ", i);
        scanf("%f", &valorObjeto[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("Informe a quantidade vendida do produto na posição %d: ", i);
        scanf("%d", &quantidadeVendida[i]);
        totalVendidos += quantidadeVendida[i];
    }

    printf("\nTotal de produtos vendidos = %d\n", totalVendidos);

    for(i = 0; i < 10; i++){
        printf("O produto na posição %d custa %.2f\n", i, valorObjeto[i]);
    }

    printf("\n");

    for(i = 0; i < 10; i++){
        printf("O valor total do produto %d vendido: %.2f: \n", i, valorObjeto[i] * quantidadeVendida[i]);
        valorTotVendas += (valorObjeto[i] * quantidadeVendida[i]);
    }
    printf("\n\n");

    printf("O valor total das vendas dos produtos: %.2f\n", valorTotVendas);
    printf("O valor total que o vendedor vai receber: %.2f\n\n",(valorTotVendas * 5/100));

    //Letra B

    for(i = 0; i < 10; i++){
        if (quantidadeVendida[i] > maisVendido){
            maisVendido = quantidadeVendida[i];
        }
    }

    for(i = 0; i < 10; i++){
        if (quantidadeVendida[i] == maisVendido){
            printf("Posição %d com o valor %.2f\n", i, valorObjeto[i]);
        }
    }

    return 0;
}
