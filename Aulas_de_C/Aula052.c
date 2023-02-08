#include <stdio.h>

int main()
{
    // O ideal quando temos variáveis contadoras é que inicializamos elas com 0 pois pode ter tido outro      programa a ter utilizado essas região de memória que a variável foi declarada. Isso se chama lixo de memória

    int negativos = 0, positivos = 0; 
    
    for(int i = 1; i <= 5; i++){
        
        int num;
        printf("Informe um valor: ");
        scanf("%d", &num);

        if(num < 0){
            negativos++;
        }
        else{
            if (num > 0){
                positivos++;
            }
        }
    }

    printf("Foram lidos %d valores positivos\n", positivos);
    printf("Foram lidos %d valores negativos\n", negativos);

    return 0;
}
