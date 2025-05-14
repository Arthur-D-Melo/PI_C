#include <stdio.h>

void recolher(int lista[], int tamanho){
    int temp;
    for(int i = 0; i < tamanho; i++){
        printf("Insira o %do numero da lista:\n", i+1);
        scanf("%d", &temp);
        lista[i] = temp;
        printf("\n");
    }
}

void sort(int lista[], int tamanho){
    int aux;
    for(int x = 0; x < tamanho -1; x++){
        for(int y = x+1; y < tamanho; y++){
            if (lista[x] > lista[y]){
                aux = lista[x];
                lista[x] = lista[y];
                lista[y] = aux;
            }
        }
    }
}

void sort(int lista[], int tamanho){
    int aux;
    int trocou = 0;
    while(trocou == 0){
        for(int x = 0; x < tamanho -1; x++){
            if(lista[x] > lista[x + 1]){
                aux = lista[x];
                lista[x + 1] = aux;
                lista[x] = lista[x + 1];
            }
        }
    }
    
}

void imprimir(int lista[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%do elemento: %d\n", i+1, lista[i]);
    }

}

int main(){
    int lista1[10];

    recolher(lista1, 10);
    
    sort(lista1, 10);

    imprimir(lista1, 10);
    
    return 0;
}