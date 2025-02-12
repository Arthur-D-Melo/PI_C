/*Leia um vetor de 10 floats digitado em qualquer ordem e
o exiba ordenado em ordem crescente.*/
#include <stdio.h>

int main(){
    float numeros[10], aux;


    for(int i = 0; i < 10; i++){
        printf("Digite um numero pra lista.\n");  //esse for coleta os numeros da lista
        scanf("%f", &numeros[i]);
    }

    for(int x = 0; x < 9; x++){
        for(int y = x+1; y < 10; y++){
            if(numeros[x] > numeros[y]){
            aux = numeros[x];                 //aqui a ordenação é feita
            numeros[x] = numeros[y];
            numeros[y] = aux;
            }
        }
    }

    for(int i = 0; i<10; i++){
        printf("\n%.2f", numeros[i]);
    }


    return 0;
}

/*for(int x = 0; x < 9; x++){
        for(int y = x+1; y < 10; y++){
            if(numeros[x] < numeros[y]){
            aux = numeros[x];                 //se fosse decrescente
            numeros[x] = numeros[y];
            numeros[y] = aux;
            }
        }
    }*/