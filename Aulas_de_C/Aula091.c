#include <stdio.h>

int main()
{
    int c, i;

    for (c = 1; c <= 10; c++){
        for (i = 1; i <= 20; i++)
            printf("*");
        printf("\n");
    }

    return 0;
}
