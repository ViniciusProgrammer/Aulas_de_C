#include <stdio.h>

int main()
{
    int maior, menor;
    int num1, num2, num3;

    
    printf("Informe 3 valores\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3 && num2 > num3){
        maior = num1;
        menor = num3;

        printf("O maior é %d\n", num1);
        printf("O menor é %d\n", num3);
    }
    else if (num2 > num1 && num2 > num3 && num1 > num3){
        maior = num2;
        menor = num3;

        printf("O maior é %d\n", num2);
        printf("O menor é %d\n", num3);
    }
    else if (num3 > num2 && num3 > num1 && num2 > num1){
        maior = num3;
        menor = num1;

        printf("O maior é %d\n", num3);
        printf("O menor é %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num3 > num1){
        maior = num2;
        menor = num1;
        printf("O maior é %d\n", num2);
        printf("O menor é %d\n", num1);
    }
    else if(num3 > num1 && num3 > num2 && num1 > num2){
        maior = num3;
        menor = num2;

        printf("O maior é %d\n", num3);
        printf("O menor é %d\n", num2);

    }
    else if (num1 > num3 && num1 > num2 && num3 > num2){
        maior = num1;
        menor = num2;

        printf("O maior é %d\n", num1);
        printf("O menor é %d\n", num2);

    }

    return 0;
}
