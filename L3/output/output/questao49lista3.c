#include <stdio.h>
#include <math.h>
//MENUR - Raiz Quadrada de um númeroQ - Quadrado de um númeroL - Logaritmo de um número em uma base qualquerF - Termina o algoritmo
int main() {
    char opcao;
    double numraiz, numpot, base, logaritmando;

    do{
        printf("\nMENU\nR- RAIZ QUADRADA\nQ- QUADRADO DE NUMERO\nL- LOGARITMO EM QQR BASE\nF- TERMINA O ALGORITMO\n");
        scanf(" %c", &opcao);

        switch(opcao){
            case 'R':
            printf("Insira um numero pra tirar a raiz:\n");
            scanf("%lf", &numraiz);
            printf("O resultado eh %.2lf", pow(numraiz, 0.5));
            break;

            case 'Q':
            printf("Insira o numero pra tirar seu quadrado:\n");
            scanf("%lf", &numpot);
            printf("O numero %.2lf ao quadrado eh %.2lf!", numpot, pow(numpot, 2));
            break;

            case 'L':
            printf("Insira o numero da base do log:\n");
            scanf("%lf", &base);
            printf("Insira o numero do log:\n");
            scanf("%lf", &logaritmando);
            printf("O log de %.2lf na base %.2lf eh %.2lf!\n", logaritmando, base, (log(logaritmando)/log(base)));
            break;

            case 'F':
            printf("Encerrando Algoritmo...");
            break;

            default:
            printf("Entrada invalida. Talvez voce escreveu a letra minuscula!");
        }

    }while(opcao != 'F');

    return 0;
}