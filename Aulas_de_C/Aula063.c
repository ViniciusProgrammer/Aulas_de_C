#include <stdio.h>

int main()
{
    float l1, l2, l3;

    printf("Informe o primeiro lado: ");
    scanf("%f", &l1);

    printf("Informe o segundo lado: ");
    scanf("%f", &l2);

    printf("Informe o terceiro lado: ");
    scanf("%f", &l3);

    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
        printf("Podemos formar um triângulo!\n");

        if (l1 == l2 && l2 == l3){
            printf("Com tais medidas podemos formar um triângulo EQUILÁTERO!\n");
        }
        else if (l1 == l2 || l2 == l3 || l1 == l3){
            printf("Com tais medidas podemos formar um triângulo ISÓSCELES\n");
        }
        else if(l1 != l2 && l2 != l3 && l1 != l3){
            printf("Com tais medidas podemos formar um triângulo ESCALENO\n");
        }
    }
    else{
        printf("Não podemos formar um triângulo!\n");
    }

    return 0;
}
