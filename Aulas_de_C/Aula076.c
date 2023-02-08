#include <stdio.h>

int main()
{
    int c;
    for (c = 1; c <= 9999; c++){

        if(c % 7 == 0){
            printf("%4d, ", c);
        }
    }

    return 0;
}
