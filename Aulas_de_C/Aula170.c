#include <stdio.h>

//Imprimindo um triângulo ao contrário

int main()
{
    int i, j, n;

    printf("Informe o valor de n: ");
    scanf("%d", &n);
    

    for(i = 1; i <= n; i++){
        for(j = n - 1; j >= i; j--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
