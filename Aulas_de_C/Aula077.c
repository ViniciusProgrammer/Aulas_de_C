#include <stdio.h>

int main()
{
    int valor;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for(int cont = 1; cont <= valor; cont++){
        if(cont % 2 == 0){
            printf("%d\n", (cont * cont));
        }
    }
        
    return 0;
}
