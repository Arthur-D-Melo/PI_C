#include <stdio.h>

int main() {
    int numero, milhar, centena, resultado;
    printf("Digite um numero (de quatro algarismos):\n");
    scanf("%d", &numero);

    milhar = numero/1000; //tá em int entao ele n vai mostrar o decimal, so a casa de milhar seca
    centena = (numero/100) - (milhar * 10);
    resultado = (milhar*10) + centena;

    if (resultado % 2 == 0) {
        printf("O numero %d eh par", resultado);
    } else {
        printf("O numero %d NAO eh par", resultado);
    }

    return 0;
}