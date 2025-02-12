/*12)Faça um algoritmo que leia duas listas A e B, contendo, cada um, 15 elementos inteiros.
Intercale esses dois conjuntos ( A[1] / B[1] / A[2] / B[2] /..), formando um lista V de 30 elementos.
Imprima a lista V.*/
#include <stdio.h>

int main(){
    int numerosA[15], numerosB[15], V[30], contador = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite o %do elemento da lista A:\n", i+1);
        scanf("%d", &numerosA[i]);
        printf("Digite o %do elemento da lista B:\n", i+1);
        scanf("%d", &numerosB[i]);
    }
    
    for(int i = 0; i < 30; i++){
        if (i % 2 == 0){
            V[i] = numerosA[contador];
        } else {
            V[i] = numerosB[contador];
            contador++;
        }
    }

    for(int i = 0; i < 30; i++){
        printf("%d\n", V[i]);
    }
    return 0;
}