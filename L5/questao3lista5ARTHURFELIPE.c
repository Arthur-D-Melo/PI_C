//3)Armazenar 8 números em uma lista e após encerrar a leitura, imprimir todos os múltiplos de seis digitados.
#include <stdio.h>

void main() {
    int num[8], i;
    for(i = 0; i<8; i++){
        printf("Digite o %do numero:\n", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0; i<8; i++){
        if(num[i] % 6 == 0) 
            printf("O numero %d eh multiplo de 6!\n", num[i]);
    }

}