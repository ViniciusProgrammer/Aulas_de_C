#include <stdio.h>

//Exercício de fixação. Obs: Nesse exercício inicializamos pedindo o sexo do usuário através do tipo "char", na aula 12 vamos iniciar de uma forma diferente e vamos ter problemas.

//Tive que saltar linhas nos printfs finais pra imprimir o que o teclado leu, pois sem pular linhas no final os valores digitados estavam saindo zerados.

int main()
{
    char sexo;
    int idade;
    float peso, altura;

    printf("Informe o seu sexo: ");
    scanf("%c", &sexo);

    printf("Informe a sua idade: \n");
    scanf("%d", &idade);

    printf("Informe o seu peso e a sua altura respectivamente: \n");
    scanf("%f %f", &peso, &altura);

    printf("\nOs dados informados foram.\n");
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Peso: %.1fKg e altura: %.2fm\n", peso, altura);

    return 0;
}
