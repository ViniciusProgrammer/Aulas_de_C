#include <stdio.h>

int main()
{
    int a, cont, soma = 0;

    printf("Informe o valor de A: ");
    scanf("%d", &a);


    if (a > 0){
        for(cont = 1; cont <= a; cont++){
            printf("%d ", cont);
            soma += cont;
        }
    }
    printf("\nA soma de todos os termos de 1 até %d = %d\n",a, soma);
    
    return 0;
}
