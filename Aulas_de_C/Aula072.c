#include <stdio.h>

int main()
{
    int senha = 123456;
    int tentativa;

    do{
        printf("Informe a sua senha de acesso: ");
        scanf("%d", &tentativa);
        
        if (tentativa!= senha){
            printf("Senha inválida!\n");
        }
    }while(tentativa != senha);

    printf("Acesso permitido!\n");

    return 0;
}
