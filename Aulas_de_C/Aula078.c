#include <stdio.h>

//Desafio

int main()
{
    int escolha; 
    float valor1, valor2;
    
    do {
        printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n\nEscolha: ");
        scanf("%d", &escolha);
        
        if(escolha == 1 || escolha == 2 || escolha == 3){

            printf("Informe um valor: ");
            scanf("%f", &valor1);

            printf("Informe um valor: ");
            scanf("%f", &valor2);
        }

        switch (escolha){
        case (1):
            printf("A soma entre %.0f + %.0f = %.0f\n", valor1, valor2, valor1 + valor2);
            break;
        case (2):
            printf("A subtração entre %.0f - %.0f = %.0f\n", valor1, valor2, valor1 - valor2);
            break;
        case (3):
            printf("A multiplicação entre %.0f * %.0f = %.0f\n", valor1, valor2, valor1 * valor2);
            break;
        case (4):
            if (escolha == 4){
                do{
                    printf("informe um valor: ");
                    scanf("%f", &valor1);

                    printf("Informe um valor: ");
                    scanf("%f", &valor2);

                    if (valor2 == 0){
                        printf("Você não pode dividir qualquer valor por 0\n");
                    } 

                }while(escolha == 4 && valor2 == 0);

                printf("A divisão de %.0f / %.0f = %.1f\n", valor1, valor2, valor1/valor2);
                break;
            }
        case (0):
            printf("Saindo...\n");
            break;
        
        default:
            printf("\nOpção inválida!\n");
            
        }
    } while(escolha != 0);

    return 0;
}
