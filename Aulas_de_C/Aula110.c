#include <stdio.h>
#include <time.h>

int main()
{
    int matriz1[3][3] = {};
    srand(time(NULL));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz1[i][j] = rand();
        }
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%5d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}
