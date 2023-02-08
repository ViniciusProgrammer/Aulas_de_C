#include <stdio.h>

int main()
{
    int idade, numAlunos_1_70 = 0, num_alunos_20anos = 0, soma_idade = 0;
    float altura, alturaMedia = 0, idadeMedia = 0, soma_altura = 0;


    for (int c = 1; c <= 45; c++){
        
        printf("Informe a idade do aluno: ");
        scanf("%d", &idade);

        printf("Informe a altura do alunos: ");
        scanf("%f", &altura);

        if (altura < 1.7){
            soma_idade += idade;
            numAlunos_1_70 += 1;
        }
        
        if (idade > 20){
            soma_altura += altura;
            num_alunos_20anos += 1;
        }
    }

    idadeMedia = ((float)soma_idade / numAlunos_1_70);
    alturaMedia = (soma_altura / num_alunos_20anos);

    printf("A idade média dos alunos com menos de 1.70m é %.1f\n", idadeMedia);
    printf("A altura média dos alunos com mais de 20 anos é %.2f\n", alturaMedia);

    return 0;
}
