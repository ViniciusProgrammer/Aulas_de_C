#include <stdio.h>

//Aula 47 - Operador da conjunção (e) que é a mesma coisa do and em python, em C usamos "&&" tipo, idade == 18 && sexo == 'm'.

int main()
{
    int idade;
    char sexo;

    printf("Informe o seu sexo: ");
    scanf("%c", &sexo);
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    
    if(sexo == 'm' && idade == 18){
        printf("O seu alistamento é obrigatório\n");
    }
    else{
        printf("Você está dispensado!\n");
    }

    return 0;
}
