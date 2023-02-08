#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);
    printf("\nInforme o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura); 

    printf("O seu IMC é %.1f\n", imc);

    if(imc < 18.5){
        printf("Você está abaixo do peso!\n");
    }
    else if (imc >= 18.5 && imc < 25){
        printf("O seu peso está normal\n");
    }
    else if (imc >= 25 && imc < 30){
        printf("Você está em sobrepeso\n");
    }
    else if(imc >= 30 && imc < 35){
        printf("Você está com obesidade grau 1\n");
    }
    else if (imc >= 35 && imc < 40){
        printf("Você está com obesidade grau 2\n");
    }
    else{
        printf("Você está com obesidade grau 3\n");
    }

    return 0;
}
