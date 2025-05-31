#include <stdio.h>

int main() {
    int funcio_1, funcio_2, funcio_3, escolha_1, escolha_2, escolha_3, escolha_final, andar;
    printf("Quantidade de funcionarios no primeiro andar:\n>>");
    scanf("%d", &funcio_1);
    printf("Quantidade de funcionarios no segundo andar:\n>>");
    scanf("%d", &funcio_2);
    printf("Quantidade de funcionarios no terceiro andar:\n>>");
    scanf("%d", &funcio_3);
    escolha_1 = funcio_2 + funcio_3*2;
    escolha_2 = funcio_1 + funcio_3;
    escolha_3 = funcio_2 + funcio_1*2;



    if (escolha_1 <= escolha_2 && escolha_1 <= escolha_3){
        escolha_final = escolha_1;
        andar = 1;
    }
    if (escolha_2 < escolha_1 && escolha_2 <= escolha_3){
        escolha_final = escolha_2;
        andar = 2;
    }
    if (escolha_3 < escolha_1 && escolha_3 < escolha_2){
        escolha_final = escolha_3;
        andar = 3;
    }
    printf("Melhor andar: %d\nTempo gasto com deslocamento: %d minutos/dia\n", andar, escolha_final);
    printf("Tempo em cada andar do predio(em minutos)\nAndar1: %d\nAndar2: %d\nAndar3: %d\n",escolha_1, escolha_2, escolha_3);

    return 0;
}