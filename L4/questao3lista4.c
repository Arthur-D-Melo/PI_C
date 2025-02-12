#include <stdio.h>

int main(){
    int contador = 1;
    for(int i = 1; i < 10; i++){
        for(int w = i + 1; w <11; w++){
            printf("Jogo %d: time %d x time %d\n", contador, i, w);
            contador++;
        }
    }
    return 0;
}