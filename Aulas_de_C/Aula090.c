#include <stdio.h>

int main()
{
    long double soma_graos = 1, graos = 1; 
    int casas = 63;

    for (int c = 2; c <= casas; c++){
        graos = graos * 2;
        soma_graos += graos;
        printf("%d valor:  %Lf\n", c, graos);
    }
    printf("%Lf\n", soma_graos);

    return 0;
}
