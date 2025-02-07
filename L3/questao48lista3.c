/*Menu matemático
1 – Soma vários números positivos
2 – Exibe raiz quadrada de número
3 – Informa se um inteiro é par
4 – Encerra o programa.

Obs: Na opção 1 a soma continua até que se entre um valor negativo.
Lembre-se de que não existe raiz quadrada de número negativo.
Informe se a opção for inválida.*/
#include <stdio.h>
#include <math.h>

int main() {
    int opcao, accsoma, numero, numparouimpar;
    double numraiz;
    do {
    printf("\nMENU\n1- SOMA VARIOS NUMEROS POSITIVOS\n2- EXIBE RAIZ QUADRADA DE NUMERO\n3- INFORMA SE UM INTEIRO EH PAR\n4- ENCERRA O PROGRAMA\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        accsoma = 0;
        do{
            printf("Insira o numero a ser somado <insira um negativo para finalizar>\n");
            scanf("%d", &numero);
            if(numero>=0){
                accsoma += numero;
            }
        }while(numero>=0);
        printf("O resultado total da soma eh %d!", accsoma);
        break;

        case 2:
        printf("Insira o numero para obter sua raiz:\n");
        scanf("%lf", &numraiz);
        printf("A raiz de %lf eh %.2lf!", numraiz, pow(numraiz, 0.5));
        break;

        case 3:
        printf("Insira um numero para saber se eh PAR ou IMPAR!\n");
        scanf("%d", &numparouimpar);
        if(numparouimpar % 2 == 0){
            printf("O numero %d eh PAR!", numparouimpar);
        } else {
            printf("O numero %d eh IMPAR!", numparouimpar);
        }
        break;

        case 4:
        printf("Encerrando o Programa...");
    }
    }while(opcao != 4);

    return 0;
}