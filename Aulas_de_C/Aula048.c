#include <stdio.h>

//Aula 48 - Utilizando o operador lógico (Ou) que em C se usa "||" duas barras verticais.

int main()
{
    int idade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60){
        printf("Você tem o direito a gratuidade do transporte!\n");
    }
    else{
        printf("O pagamento da passagem será obrigatório!\n");
    }

    return 0;
}
