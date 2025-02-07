#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float nummedia1, nummedia2, nummedia3, num1, num2, num3;
    double cat1, cat2;  
    do {
        printf("\nOPCOES\n1- CALCULA HIPOTENUSA\n2- CALCULA A MEDIA DE 3 NUMEROS\n3- IMPRIME O MENOR ENTRE 3 NUMEROS\n4- TERMINA O ALGORITMO\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Insira um cateto:");
                scanf("%lf", &cat1);
                printf("Insira um cateto:");
                scanf("%lf", &cat2);
                printf("A hipotenusa sera de %.2lf.", pow((cat1 * cat1) + (cat2 * cat2),0.5));
                break;
            
            case 2:
                printf("Insira um numero p media:\n");
                scanf("%f", &nummedia1);
                printf("Insira um numero p media:\n");
                scanf("%f", &nummedia2);
                printf("Insira um numero p media:\n");
                scanf("%f", &nummedia3);
                printf("A media eh de %.2f", (nummedia1+nummedia2+nummedia3)/3);
                break;
            
            case 3:
                printf("Insira um numero p ver o menor:\n");
                scanf("%f", &num1);
                printf("Insira um numero p ver o menor:\n");
                scanf("%f", &num2);
                printf("Insira um numero p ver o menor:\n");
                scanf("%f", &num3);
                if ((num1 < num2)&&(num1 < num3)){
                    printf("O menor numero eh %.2f.", num1);
                } else if ((num2 < num1)&&(num2 < num3)){
                    printf("O menor numero eh %.2f.", num2);
                } else if ((num3 < num1)&&(num3 < num2)){
                    printf("O menor numero eh %.2f.", num3);
                }
                break;

            case 4:
                printf("Terminando algoritmo...");
              break;

            default:
                printf("Numero invalido!");  

        }

    }while(opcao !=4);
    
}