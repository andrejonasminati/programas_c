#include <stdio.h>


int main() {
    int total_alunos, vagas = 0, classificados = 0, temp = 0, maior = 0;

    printf("Informe quantos alunos:\n>>");
    scanf("%d", &total_alunos);
    int lista[total_alunos];
    printf("Informe as vagas disponiveis:\n>>");
    scanf("%d", &vagas);
    printf("Digite a nota de cada aluno\n");
    for(int x=0; x<total_alunos; x++){
        printf("Aluno %d: ", x+1);
        scanf("%d", &temp);
        lista[x] = temp;
    }

    while(classificados<vagas){
        maior = 0;
        for (int x = 0;x<total_alunos;x++){
            if(lista[x]>maior){
                maior = lista[x];
            }
        }
        //printf("Maior: %d\n", maior);
        for (int x =0; x<total_alunos; x++){
            if(lista[x]==maior){
                classificados++;
                lista[x] = 0;
            }
        }
    }
    printf("Classificados : %d\n", classificados);

    return 0;
}