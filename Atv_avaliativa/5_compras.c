#include <stdio.h>
#include <string.h>

int main() {
    float temp;
    int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0, moedas_1 = 0;
    int qtde_total = 0;
    double media=0, valor, valor_total=0, qtde;

    do{
        printf("Informe a quantidade de um produto(0 ou negativo para sair)\n>>");
        scanf("%f", &qtde);
        if(qtde <= 0){
            break;
        }
        printf("Informe o valor unitario do produto\n>>");
        scanf(" %lf", &valor);
        valor_total += qtde * valor;
        qtde_total+= (int)qtde;
    }while(1);
    media = valor_total/qtde_total;
    printf("VALOR TOTAL DA COMPRA: %.2lf\n", valor_total);
    printf("VALOR MEDIO DA COMPRA: %.2lf\n", media);

    //notas

    while (valor_total>=1){
        if (valor_total >=100){
            notas_100++;
            valor_total-=100;
        } 
        else if(valor_total>=50){
            notas_50++;
            valor_total-=50;
        }
        else if(valor_total>=20){
            notas_20++;
            valor_total-=20;
        }
        else if(valor_total>=10){
            notas_10++;
            valor_total-=10;
        }
        else if(valor_total>=5){
            notas_5++;
            valor_total-=5;
        }
        else if(valor_total>=2){
            notas_2++;
            valor_total-=2;
        }
        else{
            moedas_1++;
            valor_total-=1;
        }
    }
    printf("Notas\n");
    printf("De 100: %d\n", notas_100);
    printf("De 50: %d\n", notas_50);
    printf("De 20: %d\n", notas_20);
    printf("De 10: %d\n", notas_10);
    printf("De 5: %d\n", notas_5);
    printf("De 2: %d\n", notas_2);
    printf("Moedas 1: %d\n", moedas_1);
    return 0;
}
