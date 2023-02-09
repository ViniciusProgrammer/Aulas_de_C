#include <stdio.h>

int main()
{
    int i, escolha;
    float vetor[10];

    for(i = 0; i < 10; i++){
        printf("Informe um valor para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    do{
        printf("\n1- Do início ao fim\n2- Do fim ao início\n0- Para finalizar\n\nEscolha: ");
        scanf("%d", &escolha);

        switch(escolha){
        case 1:
            for(i = 0; i < 10; i++){
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;

        case 2:
            for(i = 9; i >= 0; i--){
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;

        case 0:
            printf("\nFinalizando...\n");
            break;
            
        default:
            printf("\nOpção Inválida!\n");
        }

    }while(escolha != 0);

    return 0;
}
