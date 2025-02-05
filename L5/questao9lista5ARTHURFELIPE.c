//9)Entrar com números inteiros em uma lista A de 10 posições. Gerar uma lista B onde cada
//elemento é o quadrado do elemento da lista A, na respectiva posição. Exibir os elementos das
//listas A e B lado a lado.

#include <stdio.h>
#include <math.h>

void main() {
    int i;
    float numA[10], numB[10];

    for(i=0; i<10; i++){
        printf("Digite o %do numero:\n", i+1);
        scanf("%f", &numA[i]);
        numB[i] = pow(numA[i], 2);
    }

    printf("Resultados:\n");

    for(i=0; i<10; i++){
        printf("%.2f | %.2f\n", numA[i], numB[i]);
    }
}