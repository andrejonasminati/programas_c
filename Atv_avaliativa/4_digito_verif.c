#include <stdio.h>

int main() {
    int numero, numero_conta, digito_informado;
    int centena, dezena, unidade, inverso, soma;
    int resultado = 0, posicao = 1, digito_calculado;

    do {
        printf("Digite um numero de 4 digitos (ex: 1234)\n>> ");
        scanf("%d", &numero);

        if (numero < 1000 || numero > 9999) {
            printf("Numero invalido! Tente novamente.\n");
        }
    } while (numero < 1000 || numero > 9999);

    numero_conta = numero / 10;
    digito_informado = numero % 10;

    centena = numero_conta / 100;
    dezena = (numero_conta / 10) % 10;
    unidade = numero_conta % 10;
    inverso = unidade * 100 + dezena * 10 + centena;

    soma = numero_conta + inverso;

    while (soma > 0) {
        resultado += (soma % 10) * posicao;
        soma /= 10;
        posicao++;
    }

    digito_calculado = resultado % 10;

    printf("Numero da conta: %d\n", numero_conta);
    printf("Digito verificador informado: %d\n", digito_informado);
    printf("Digito verificador calculado: %d\n", digito_calculado);

    if (digito_informado == digito_calculado) {
        printf("Numero da conta VALIDO.\n");
    } else {
        printf("Numero da conta INVALIDO.\n");
    }

    return 0;
}
