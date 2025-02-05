//provavelmente vou fzr só aas ímpares ou até enjoar
#include <stdio.h>
#include <math.h>

int main() {
    float numero, base, resultado;

    printf("Digita o numero q tu quer saber o log ai\n");
    scanf("%f", &numero);
    printf("Digita o numero da base ai\n");
    scanf("%f", &base);

    resultado = log10(numero)/log10(base);

    printf("Resultado: %.2f\n", resultado);
    printf("quadrado: %f\n", pow(base, numero));
    printf("Raiz: %f", pow(base, 1/numero));
    //aaaaa
    return 0;
}