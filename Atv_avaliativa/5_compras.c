#include <stdio.h>

int main() {
    char repetir = 'S';
    
    while (repetir == 'S'){

        int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0, moedas_1 = 0;
        int qtde_total = 0;
        double media=0, valor, valor_total=0, qtde;
        
        do{
            printf("Informe a quantidade de um produto(0 ou negativo para sair)\n>>");
            scanf("%lf", &qtde);
            if(qtde <= 0){
                break;
            }
            printf("Informe o valor unitario do produto\n>>");
            scanf(" %lf", &valor);
            valor_total += qtde * valor;
            qtde_total+= (int)qtde;
        }while(1);
        media = valor_total/qtde_total;

        printf("VALOR TOTAL DA COMPRA: R$ %.2lf\n", valor_total);
        printf("VALOR MEDIO DA COMPRA: R$ %.2lf\n", media);

        int reais = (int)valor_total;
        int centavos = (int)((valor_total - reais) * 100 + 0.5);
        printf("\n");
        printf("Valor total da compra eh %d reais e %d centavos.\n", reais, centavos);

        //notas
        valor_total = reais;
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
        printf("%d reais equivale a:\n", reais);
        printf("%d nota(s) de 100\n", notas_100);
        printf("%d nota(s) de 50\n", notas_50);
        printf("%d nota(s) de 20\n", notas_20);
        printf("%d nota(s) de 10\n", notas_10);
        printf("%d nota(s) de 5\n", notas_5);
        printf("%d nota(s) de 2\n", notas_2);
        printf("%d moeda(s) de 1\n", moedas_1);
        printf("\n");

        printf("Deseja repetir o programa?(S ou N)\n>>");
        scanf(" %c", &repetir);
        if (repetir == 's'){
            repetir = 'S';
        }
    }
    return 0;
}
