#include <stdio.h>

int main()
{
    float  mediaartimetica, mediaponderada, n1, n2, n3;
    char escolha;

    printf("a - Média Aritimética\np - Média Ponderada\n");
    scanf("%c", &escolha);

    if (escolha == 'a' || escolha == 'p'){
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    }  
    
    if (escolha == 'a'){
        mediaartimetica = (n1 + n2 + n3)/3;
        printf("A sua média aritimética é %.1f\n", mediaartimetica);
    }
    else if (escolha == 'p'){
            mediaponderada = ((n1 * 3) + (n2 * 3) + (n3 * 4))/10;
            printf("A sua média ponderada é %.1lf\n", mediaponderada);
        }
    else{
        printf("Opção inválida!\n");
    }
    
    return 0;
}
