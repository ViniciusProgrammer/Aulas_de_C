#include <stdio.h>
#include <string.h>

int main()
{
    //Forma simplificada de se fazer esse código
    
    char palavra[30], copia[30];
    int i = 0, tam, iguais = 0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);
    tam--;

    while(tam >= i){
        if(palavra[i] != palavra[tam]){
            iguais++;
        }
        i++;
        tam--;
    }

    if(iguais == 0){
        printf("Palavras palindromas!\n");
    }
    else{
        printf("Não são palindromas\n");
    }

    /*
    
    Forma mais complexa de fazer esse código

    for(i = 0; i < strlen(palavra); i++){
        copia[i] = palavra[tam - 1];
        tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    printf("Original: %s\n", palavra);
    printf("Copia: %s\n", copia);

    for(i = 0; i < tam; i++){
        if(palavra[i] == copia[i]){
            iguais++;
        }
    }

    if(tam == iguais){
        printf("\nTemos um palindromo!\n");
    }

    else{
        printf("\nEssa palavra não é um palindromo!\n");
    }
    */

    return 0;
}
