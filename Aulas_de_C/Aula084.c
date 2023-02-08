#include <stdio.h>

int main()
{
    
    int numFuncionarios;
    float media_salarios = 0, maior_salario = 0, menor_salario = 0, salarios, soma_salários = 0;


    do{
        printf("Quantidade de funcionáros: ");
        scanf("%d", &numFuncionarios);
        
    }while(numFuncionarios <= 0);


    for (int c = 1; c <= numFuncionarios; c++){
        
        printf("Salário do funcionário %d\n", c);
        scanf("%f", &salarios);

        if (c == 1){
            maior_salario = menor_salario = salarios;
        }
        else{
            if (salarios > maior_salario){
                maior_salario = salarios;
            }
            
            if (salarios < menor_salario){
                menor_salario = salarios;
            }
        }

        soma_salários += salarios;
    }

    media_salarios = (soma_salários / numFuncionarios);

    printf("Maior salário %.2f\n", maior_salario);
    printf("Menor salário %.2f\n", menor_salario);
    printf("A média salarial da empresa é %.2f\n", media_salarios);

    return 0;
}
