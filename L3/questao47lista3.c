/*MENU

A – Imprime maior de 10 números
B - Entra com um número e seu número de dígitos e imprime invertido
C - Calcula e imprime a tangente de um ângulo em graus
F - Termina o algoritmo
OPCAO:
Observações:
1- Na entrada de dados, considerar as letras maiúsculas e minúsculas.
2- No item B, se você entrar com 987654 e 6, deverá sair: 456789
3- No item C, não se esqueça de testar os ângulos que não têm tangente.*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char opcao, numero[15], novonumero[15];
    float numrad;
    int tamanho;

    do{
        printf("\nMENU\nA- IMPRIME MAIOR DE 10 NUMEROS\nB- ENTRA COM UM NUMERO E SEU NUMERO DE DIGITOS E IMPRIME INVERTIDO\nC- CALCULA E IMPRIME A TANGENTE DE UM ANGULO EM GRAUS\nF- TERMINA O ALGORITMO\n");
        scanf(" %c", &opcao);

        if ((opcao == 'A')||(opcao == 'a')){



        } else if ((opcao == 'B')||(opcao == 'b')){
            printf("Insira um numero:\n");
            getchar();
            fgets(numero, 15, stdin);
            printf("Insira o numero de digitos dele:\n");
            scanf("%d", &tamanho);
            int aux = 0;
            for(int i = tamanho-1; i >= 0; i--){
               novonumero[aux] = numero[i];
               aux++;
            }
            for(int i = 0; i < tamanho; i++){
                printf("%c", novonumero[i]);
            }

        } else if ((opcao == 'C')||(opcao == 'c')){
            printf("Insira o numero para calcular sua tangente:(em rad)\n");
            scanf("%f", &numrad);
            if(cos(numrad) == 0){
                printf("A tangente nao eh possivel! (cos = 0)");
            }else{
                printf("A tangente de %frad eh %f!", numrad, (sin(numrad)/cos(numrad)));
            }

        } else if ((opcao == 'F')||(opcao == 'f')){
            printf("Encerrando programa...");
        } else {
            printf("Letra invalida!");
        }

    }while((opcao != 'F')&&(opcao != 'f'));
    
    
    return 0;
}