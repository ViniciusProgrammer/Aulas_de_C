#include <stdio.h>

int main()
{
    int impares = 0;

    for(int c = 1; c <= 1000; c++){
        if (c % 2 == 1){
            impares += c;
        }
    }
    
    printf("\nA soma entre todos os números impares entre 1 e 1000 = %d\n\n", impares);

    return 0;
}
