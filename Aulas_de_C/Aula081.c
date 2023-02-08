#include <stdio.h>

int main()
{
    float massa;
    int segundos = 0;

    printf("Informe a quantidade de massa do produto: ");
    scanf("%f", &massa);

    while(massa >= 0.05){
        massa = massa/2;
        segundos += 50;
    }

    printf("Massa final %f\n", massa);
    printf("O total de segundos foi %d segundos\n", segundos);

    return 0;
}
