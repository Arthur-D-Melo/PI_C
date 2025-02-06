#include <stdio.h>

int main(){
    float indice;
    int continua;
    do { 
        printf("Insira o indice de poluicao abaixo:\n");
        scanf("%f", &indice);

        if((indice >= 0.3) && (indice < 0.4)) {
            printf("Grupo 1 notificado!");
        } else if((indice >= 0.4) && (indice < 0.5)){
            printf("Grupos 1 e 2 notificados!");
        } else if ((indice >= 0.5)) {
            printf("Todos os grupos notificados!");
        } else {
            printf("Indice pequeno. ninguem sera notificado!");
        }
        printf("\nSe desejar repetir, digite 0.\n");
        scanf("%d", &continua);
    } while (continua == 0);

        printf("\nTerminando...");

    return 0;
}