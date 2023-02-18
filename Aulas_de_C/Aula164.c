#include <stdio.h>

void binario(int n){
    if(n == 0){
        printf("%d", n);
    }
    else{
        binario(n/2);
        printf("%d", n % 2);
    }
}

int main()
{
    int num;
    
    printf("Informe um valor: ");
    scanf("%d", &num);

    binario(num);

    printf("\n");
    
    return 0;
}
