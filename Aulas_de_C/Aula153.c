#include <stdio.h>

//Aula 153 - Funções recursivas, imprimindo um valor até 0 de forma decrementar.

void imprimir(int x){
    if(x == 0){
        printf("%d ", x);
    }
    else{
        printf("%d ", x);    //Para imprimir de forma crecente precisamos só inverter o printf pela função dentro do else
        imprimir(x - 1);
    }
}

int main()
{
    int valor;

    printf("Informe um valor maior que 0: ");
    scanf("%d", &valor);

    imprimir(valor);

    return 0;
}
