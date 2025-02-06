#include <stdio.h>

int main(){
    int idade, peso, dosagem;

    printf("Insira a idade do paciente:\n");
    scanf("%d", &idade);
    printf("Insira o peso do paciente:\n");
    scanf("%d", &peso);

    if (peso < 5) {
        printf("Este medicamento eh contraindicado para bebes com menos de 5kg!");
    } else if (idade < 12){
        dosagem = (peso>=5)&&(peso<=9)? 125:
                  (peso>=9.1)&&(peso<=16)? 250:
                  (peso>=16.1)&&(peso<=24)? 375:
                  (peso>=24.1)&&(peso<=30)? 500:
                  750;

    } else {
        if (peso >= 50) {
            dosagem = 1000;
        } else {
            dosagem = 875;
        }
    }

    printf("A dosagem do paciente eh %dmg. (%d gotas)", dosagem, (dosagem/500) * 20);


    return 0;
}