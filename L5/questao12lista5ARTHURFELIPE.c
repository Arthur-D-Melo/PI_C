//12)Faça um algoritmo que leia duas listas A e B, contendo, cada um, 15 elementos inteiros.
//Intercale esses dois conjuntos ( A[1] / B[1] / A[2] / B[2] /..), formando um lista V de 30 elementos.
//Imprima a lista V.
#include <stdio.h>
#include <math.h>

void main(){
    int numA[15], numB[15], numV[30];

    for(int i=0; i<15; i++){
        printf("Digite o %do numero da lista A:\n", i+1);
        scanf("%d", &numA[i]);
        printf("Digite o %do numero da lista B:\n", i+1);
        scanf("%d", &numB[i]);
    }

    int temp = 0;
    for(int i=0; i<30; i++){
        if(i%2 == 0){
            numV[i] = numA[temp];
        }else{
            numV[i] = numB[temp];
            temp++;
        }
        printf("\nElemento %d da lista: %d",i+1 , numV[i]);
    }

}