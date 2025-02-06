#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso do paciente:\n");
    scanf("%f", &peso);
    printf("Digite a altura do paciente:\n");
    scanf("%f", &altura);

    imc = peso/pow(altura, 2);

    if (imc < 20) {
        printf("A situacao do paciente eh: abaixo do peso.");
    } else if ((imc >= 20)&&(imc <25)){
        printf("A situacao do paciente eh: peso normal.");
    } else if ((imc >= 25)&&(imc<30)){
        printf("A situacao do paciente eh: excesso de peso.");
    } else if ((imc >= 30) && (imc < 35)){
        printf("A situacao do paciente eh: obesidade1.");      
    } else if ((imc >= 35) && (imc < 40)){
        printf("A situacao do paciente eh: obesidade2.");      
    } else if (imc >= 40) {
        printf("A situacao do paciente eh: obesidade3.");      
    }
    
}