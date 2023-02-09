#include <stdio.h>

int main()
{
    int anos = 0;
    float chico = 1.50, ze = 1.10;

    while(ze <= chico){
        chico += 0.02;
        ze += 0.03;
        anos += 1;
        printf("\n\tNo ano %d\n", anos);
        printf("Chico: %.2f", chico);
        printf("\tZé: %.2f\n", ze);

    }

    printf("\t%d Anos\n", anos);

    return 0;
}
