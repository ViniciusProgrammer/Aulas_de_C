#include <stdio.h>

int main()
{

    int a;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    if(a < 0){
        printf("O valor %d é negativo!\n", a);
    }
    else if(a > 0){
        printf("O valor %d é positivo\n", a);
    }
    else{
        printf("O valor %d nem é positivo e nem é negativo\n", a);
    }

    return 0;
}
