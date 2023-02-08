#include <stdio.h>

int main()
{
    int valor;
 
    do{
        printf("Digite um valor entre 1 e 10 para saber a tabuada!: ");
        scanf("%d", &valor);

        if (valor < 1 || valor > 10){
            printf("\nO valor deve está entre 1 e 10!\n\n");
        }

    }while(valor < 1 || valor > 10);
    
    if (valor >= 1 && valor <= 10){

        for (int c = 1; c <= 10; c++){
            printf("%d x %d = %d\n", valor, c, valor * c);
        }
    }

    return 0;
}
