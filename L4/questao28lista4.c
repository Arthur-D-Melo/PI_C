/*28) Imprima uma tabela de conversão de polegadas para centímetros. Deseja-se que a
tabela conste valores desde 1 polegada até 20 polegadas inteiras.*/
#include <stdio.h>

int main(){
    printf("TABELA CONVERSAO POLEGADAS PARA CM\n");
    for(int i = 1; i<21; i++){
        printf("%d polegadas === %.2f centimetros\n", i, i * 2.54);
    }
    return 0;
}