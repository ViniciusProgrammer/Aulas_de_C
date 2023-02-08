#include <stdio.h>

int main()
{
    int impares = 0, c = 1;

    for (c = 1; c <= 1000; c += 2){
        printf("%3d\n", c); //Esse 3 antes do d serve para dizer ao compilador que teremos 3 digitos pra ficar alinhado.
        impares += c;
    }

    printf("A soma entre todos os valores imapares de %d até %d é igual a %d\n", impares);
    
    return 0;
}
