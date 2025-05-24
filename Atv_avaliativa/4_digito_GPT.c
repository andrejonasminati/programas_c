#include <stdio.h>

int calcular_digito_verificador(int numero_conta) {
    // Inverso do número da conta
    int centena = numero_conta / 100;
    int dezena = (numero_conta / 10) % 10;
    int unidade = numero_conta % 10;
    int inverso = unidade * 100 + dezena * 10 + centena;

    // Soma da conta com seu inverso
    int soma = numero_conta + inverso;

    // Multiplicação pela posição (da direita para esquerda)
    int resultado = 0;
    int posicao = 1;
    while (soma > 0) {
        int digito = soma % 10;
        resultado += digito * posicao;
        soma /= 10;
        posicao++;
    }

    // Último dígito do resultado
    return resultado % 10;
}

int main() {
    int numero;

    // Entrada e validação
    do {
        printf("Digite um número de 4 dígitos (ex: 1234): ");
        scanf( "%d", &numero);
        if (numero < 1000 || numero > 9999) {
            printf("Número inválido! Tente novamente.\n");
        }
    } while (numero < 1000 || numero > 9999);

    int numero_conta = numero / 10;
    int digito_informado = numero % 10;

    int digito_calculado = calcular_digito_verificador(numero_conta);

    printf("Número da conta: %d\n", numero_conta);
    printf("Dígito verificador informado: %d\n", digito_informado);
    printf("Dígito verificador calculado: %d\n", digito_calculado);

    if (digito_informado == digito_calculado) {
        printf("Número da conta VÁLIDO.\n");
    } else {
        printf("Número da conta INVÁLIDO.\n");
    }

    return 0;
}