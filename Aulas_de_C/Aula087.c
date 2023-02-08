#include <stdio.h>

int main()
{
    int num, positivos = 0, negativos = 0;

    do{
        printf("Informe um valor: ");
        scanf("%d", &num);

        if (num > 0){
            positivos += 1;
        }
        else{
            if(num < 0){
                negativos += 1;
            }
        }
        
    }while(num != 0);

    printf("Total de Positivos: %d\n", positivos);
    printf("Total de Negativos: %d\n", negativos);

    return 0;
}
