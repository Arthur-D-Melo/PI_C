#include <stdio.h>
#include <math.h>

int main() {
    int opcao1, opcao2, opcao3, cal = 0;
    printf("CARDAPIO\n1- Vegetariano\n2- Peixe\n3-Frango\n4-Carne\nInsira a comida desejada:\n");
    scanf("%d", &opcao1);

    switch (opcao1){
        case 1:
            cal += 180;
            break;

        case 2:
            cal += 230;
            break;

        case 3:
            cal += 250;
            break;

        case 4:
            cal += 350;
            break;
        
        default:
            printf("Opcao invalida!");
    }

    printf("CARDAPIO\n1- Abacaxi\n2- Sorv diet\n3-mousse diet\n4-mousse chcolate\nInsira a comida desejada:\n");
    scanf("%d", &opcao2);

    switch (opcao2){
        case 1:
            cal += 75;
            break;

        case 2:
            cal += 110;
            break;

        case 3:
            cal += 170;
            break;

        case 4:
            cal += 200;
            break;
        
        default:
            printf("Opcao invalida!");
    }

    printf("CARDAPIO\n1- cha\n2- suco laranja\n3-suco limao\n4-refri diet\nInsira a comida desejada:\n");
    scanf("%d", &opcao3);

    switch (opcao3){
        case 1:
            cal += 20;
            break;

        case 2:
            cal += 70;
            break;

        case 3:
            cal += 90;
            break;

        case 4:
            cal += 75;
            break;
        
        default:
            printf("Opcao invalida!");
    }

    printf("O gasto total de calorias foi %d.", cal);
    return 0;
}