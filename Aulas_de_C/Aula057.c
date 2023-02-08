#include <stdio.h>

int main()
{
    char letra;

    printf("Informe uma letra: ");
    scanf("%c", &letra);

    if (letra == 'A' || letra == 'B' || letra == 'C' || letra == 'D' || letra == 'E'){
        printf("A letra %c é uma vogal\n");
    }
    else if (letra == 'a' || letra == 'b' || letra == 'c' || letra == 'd' || letra == 'e'){
        printf("A letra é uma vogal\n");
    }
    else{
        printf("A letra é uma consoante!\n");
    }
    
    return 0;
}
