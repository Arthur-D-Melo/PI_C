#include <stdio.h>

int main(){
    int n;
    float acc = 0;
    printf("Insira N:\n");
    scanf("%d", &n);

    for(n; n > 0; n--){
        if(n % 2 == 0){
            acc -= (1.0/n);
        } else {
            acc += (1.0/n);
        }
    }
    printf("Resultado = %f", acc); 
    return 0;
}