#include <stdio.h>

int main() {
    int opcao, numsoma, accsoma = 0, nummult, accmult = 1;
    do{
    printf("\nMAQUINA ESPERTA\n1- soma varios numeros\n2- multiplica varios numeros\n3-sai do algoritmo\n");
    scanf("%d", &opcao);

        switch (opcao){
            case 1:
                /*accsoma = 0;
                printf("Digite o numero para somar <aperte 0 para finalizar>\n");
                scanf("%d", &numsoma);
                while(numsoma != 0) {
                    accsoma += numsoma;
                    printf("Digite o numero para somar <aperte 0 para finalizar>\n");
                    scanf("%d", &numsoma);
                }
                printf("Resultado da soma: %d", accsoma);*/
                accsoma = 0;
                do{
                    printf("Insira um numero pra somar:\n");
                    scanf("%d", &numsoma);
                    if (numsoma != 0){
                        accsoma += numsoma;
                    }
                }while(numsoma !=0);
                printf("O resultado da soma eh %d", accsoma);
                break;

            case 2:
                accmult = 1;
                printf("Digite o numero pra multiplicar <aperte 0 para finalizar>\n");
                scanf("%d", &nummult);
                while (nummult != 0) {
                    accmult *= nummult;
                    printf("Digite o numero pra multiplicar <aperte 0 para finalizar>\n");
                    scanf("%d", &nummult);
                }
                printf("Resultado da multiplicacao: %d", accmult);
                break;

            case 3:
                printf("\nEncerrando o programa...");
                break;

            default:
            printf("Numero invalido.");
        } 
    }while (opcao != 3);
    
    return 0;
}