#include <stdio.h>

int potencia(int x, int y){

    if(y == 0){
        return 1;
    }
    else if(y == 1){
        return x;
    }
    else{
        return x * potencia(x, y - 1);

    }
}

int main()
{
    int x, y;

    printf("Informe o valor de X e de Y: ");
    scanf("%d%d", &x, &y);

    printf("%d elevado a %d = %d\n", x, y, potencia(x, y));
    
    return 0;
}
