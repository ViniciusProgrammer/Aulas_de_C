#include <stdio.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o seu peso e a sua altura respectivamente\n");
    scanf("%f%f", &peso, &altura);

    printf("Informe o seu sexo: ");
    scanf(" %c", &sexo); //Dando este espaço o buffer é desconsiderado, ele desoncidera o enter, o tab e qualquer espaço.


    printf("Os dados informados foram: \n");
    printf("A sua idade: %d anos\n", idade);
    printf("O seu peso %.1fKg e sua %.2fm\n", peso, altura);
    printf("O seu sexo: %c\n", sexo);

//Lendo dessa forma o programa nunca vai imprimir o valor da variável sexo, pois ao darmos um enter no teclado ele simplesmente ignora pois o enter pula uma linha da mesma forma que o \n então o scanf não ler nada, na verdade ele ler o espaço vazio e imprime sem nada na saída. Isso se chama Buffer do teclado.

//Pra resolver esse problema eu vou dar um espaço no scanf que vai ler o caracter lá em cima.

    return 0;
}
