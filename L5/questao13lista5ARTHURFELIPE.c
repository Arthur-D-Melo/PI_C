//13) Entrar com vários números, até digitar o número 0, que não deve ser guardado na lista.
//Imprimir quantos números iguais ao último número da lista foram lidos.
//Obs: A quantidade máxima de números é 100.
#include <stdio.h>

void main(){
    int num[100], numero, ultimo, acc = 0;

    for(int i=0; i<100; i++){
    printf("Digite o numero:\n");
    scanf("%d", &numero);
    if(numero != 0) {
        num[i] = numero;
    } else {
        ultimo = i-1;
        break;
    }
    }
    
    for(int i=0; i<ultimo; i++){
        if(num[i] == num[ultimo])
            acc++;
    }

    printf("Numeros iguais ao ultimo: %d", acc);

}