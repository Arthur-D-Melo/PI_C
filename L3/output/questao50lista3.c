#include <stdio.h>
#include <math.h>

int main() {
    double base, logaritmando, resultado;
    int opcao;
    float num1, baseraiz, exporaiz;
    do {
        printf("\nMENU\n1- CALCULAR SENO E COSSENO\n2- CALCULAR LOGARITMO\n3- CALCULAR RADICIACAO\n4- TERMINA O ALGORITMO\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Digita o numero p calcular sen e cos: (em rad)\n");
                scanf("%f", &num1);
                printf("O sen eh %f e cos eh %f!", sin(num1), cos(num1));
                break;
            
            case 2:
                printf("Digita a base do log:\n");
                scanf("%lf", &base);
                printf("Digita o logaritmando:\n");
                scanf("%lf", &logaritmando);
                resultado = log(logaritmando)/log(base);
                printf("O log de %.2lf na base %.2lf eh %.2lf.", logaritmando, base, resultado);
                break;
            
            case 3:
                printf("Digita o numero dentro da raiz:\n");
                scanf("%f", &baseraiz);
                printf("Digita o outro numero:\n");
                scanf("%f", &exporaiz);
                printf("a raiz %.2fa de %.2f eh %.2f.", exporaiz, baseraiz, pow(baseraiz, 1/exporaiz));
                break;
            
            case 4:
                printf("Finalizando Algoritmo...");
                break;
            
            default:
                printf("Numero invalido!");
        }


    }while(opcao !=4);
    return 0;
}