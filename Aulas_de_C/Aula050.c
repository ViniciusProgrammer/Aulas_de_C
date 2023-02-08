#include <stdio.h>

//Aula 50 - Utilizando o operador switch case, é um método de escolha, funcionando de forma similiar ao if e ao Else só que ele funciona como forma de escolha e não como um intervalo e comparações.

//ex: num == 1 imprima tal coisa.

int main()
{
    int escolha;

    printf("1 - Cadastrar Produto\n2 - Vender Produto\n3 - Buscar Produto\n4 - Imprimir Produto\n5 - Sair\n\nInforme uma opção: ");
    scanf("%d", &escolha);
    
//Importante salientar que após cada case temos que colocar um break no final pois sem ele o programa executará todas as opções a serem processadas, o que não é interessante para o nosso caso.

    switch(escolha){
    case 1:
    printf("\nCadastrando um novo produto...\n");
    break;

    case 2:
    printf("\nVendendo um novo produto...\n");
    break;

    case 3:
    printf("\nBuscando um novo produto...\n");
    break;

    case 4:
    printf("\nImprimindo um novo produto...\n");
    break;

    case 5:
    printf("\nSaindo...\n");
    break;

    default:
        printf("\nOpção inválida!\n");
    }

//Importante que tais escolhas podem ser feitos com caracteres nas opções, na hora que for pedido para o usuário digitar uma letra e preciso substituir no case pelo caracter com aspas. 

    return 0;
}
