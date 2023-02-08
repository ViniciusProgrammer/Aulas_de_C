#include <stdio.h>

int main()
{
    int idade, numpessoas, maiorIdade = 0, menorIdade = 0, qtdMulheres = 0; 
    float salario, media_salarial = 0, somaSalario = 0;
    char sexo;

    do{
        printf("Informe a quantidade de pessoas: ");
        scanf("%d", &numpessoas);

    }while(numpessoas <= 0);

    for (int c = 1; c <= numpessoas; c++){

        printf("Informe a sua idade: ");
        scanf("%d", &idade);

        printf("Informe o seu sexo [M/F]:");
        scanf(" %c", &sexo);

        printf("Informe o salário da pessoa: ");
        scanf("%f", &salario);


        if (c == 1){
            maiorIdade = menorIdade = idade;
        }
        else{
            if (idade > maiorIdade){
                maiorIdade = idade;
            }
            if (idade < menorIdade){
                menorIdade = idade;
            }
        }

        somaSalario += salario;

        if (sexo == 'f' && salario <= 2000){
            qtdMulheres += 1;
        }
    }

    media_salarial = (somaSalario/numpessoas);

    printf("\nA média salarial do grupo é %.2f\n", media_salarial);
    printf("\nA maior idade do grupo é %d anos e a menor é %d anos\n", maiorIdade, menorIdade);
    printf("\nA quantiade de mulheres que ganham até 2 mil reais é %d mulhere(s)\n", qtdMulheres);

    return 0;
}
