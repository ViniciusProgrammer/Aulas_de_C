#include <stdio.h>

int main(i)
{
    int mes;

    printf("1 - Jan\n2 - Fev\n3 - Mar\n4 - Abr\n5 - Mai\n6 - Jun\n7 - Jul\n8 - Ago\n9 - Set\n10 - Out\n11 - Nov\n12 - Dez\n");
    scanf("%d", &mes);
    

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        printf("O mês %d possui 31 dias!\n");
    }
    else if(mes == 2){
        printf("O mês %d possui 28 dias\n");
    }
    else{
        printf("O mês %d possui 30 dias!\n");
    }
    return 0;
}
