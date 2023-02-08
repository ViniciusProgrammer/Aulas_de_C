#include <stdio.h>

int main()
{
    int num, divisores = 0;

    do{
    printf("Informe um valor maior que 1: ");
    scanf("%d", &num);

    }while(num < 1);

    for (int c = 1; c <= num; c++){
        if (num % c == 0){
                divisores += 1;
        }
    }

    if (divisores > 2){
        printf("O número %d NÃO é primo!\n", num);
    }
    else{
        if (divisores == 2){
            printf("O número %d é PRIMO!\n", num);
        }
    }

    return 0;
}
