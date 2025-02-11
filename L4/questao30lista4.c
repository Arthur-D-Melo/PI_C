/*30) Faça um algoritmo que deixe escolher qual a tabuada de multiplicar que se deseja
imprimir.*/
#include <stdio.h>

int main(){
    int numero;
    printf("Digite o numero que voce quer ver a tabuada:\n");
    scanf("%d", &numero);

    for(int i = 1; i<11; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}