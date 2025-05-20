#include <stdio.h>

float valor_bem, valor_depreciado,depreciacao;
float taxa = 0.015;
int ano;

int main() {
    printf("Informe o valor do bem: \n");
    scanf("%f",&valor_bem);
    printf("Informe o periodo de depreciacao em anos: \n");
    scanf("%d",&ano);
    printf("\n\n%-5s%18s%18s%18s\n","Anos","Valor Atual", "Valor Depreciado", "Total depreciado");
    for(int i = 0;i < ano; i++ )
    {   
        printf("%-5d",i+1);
        printf("%18.2f",valor_bem);
        depreciacao = valor_bem*taxa;
        printf("%18.2f",depreciacao);
        valor_depreciado = valor_bem - depreciacao;
        printf("%18.2f\n",valor_depreciado);
        valor_bem = valor_depreciado;
    }

    return 0;
}