#include <stdio.h>

int soma(int vet[], int tam){
    if(tam == 0){
        return 0;
    }
    else{
        return vet[tam - 1] + soma(vet, tam - 1);
    }
}

int main(){
    
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("A soma dos elementos desse vetor = %d\n", soma(vetor, 10));

    return 0;
}
