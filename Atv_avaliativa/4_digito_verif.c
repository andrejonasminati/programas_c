#include <stdio.h>
#include <string.h>

int main() {
    int entrada;
    int valor1, valor2, valor3, valor4, verificador, temp;

    while(1){
        printf("Digite um numero de quatro digitos para ser validado: ");
        scanf("%d", entrada);
        if (entrada > 1000 && entrada < 9999){
                break;
            } 
        else {
                printf("Numero invalido.\n");
            }
    }

    printf("%c\n", (int)valor1);
    printf("%c\n", (int)valor2);
    printf("%c\n", (int)valor3);
    printf("%c\n", (int)valor4);

    strcat(valor1,valor2);
    printf("%s\n", (int)valor1);


    return 0;
}
