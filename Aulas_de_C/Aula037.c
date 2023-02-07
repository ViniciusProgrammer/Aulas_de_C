#include <stdio.h>

int main()
{
    //1 hora = 60 minutos
    //1 minuto = 60 segundos
    //1 hora == 60 minutos == 3600 segundos

    int segundos;
    int hora = 60;
    int minutos = 60;

    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos);

    printf("%d minutos\n", (segundos/minutos)/hora);
    printf("%d horas\n", hora/minutos);

    return 0;
}
