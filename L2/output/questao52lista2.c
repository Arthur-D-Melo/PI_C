#include <stdio.h>
#include <string.h>
int main(){
    char palavra[15], novapalavra[15];

    printf("Digite uma palavra:\n");
    fgets(palavra, 15, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    if((palavra[0] == 'L') || (palavra[0] == 'l') || (palavra[0] == 'D') || (palavra[0] == 'd')){
        novapalavra[0] = palavra[0];
        novapalavra[1] = palavra[1];
        novapalavra[2] = palavra[strlen(palavra) - 1];
        novapalavra[3] = '\0';
        printf("Palavra formada: %s", novapalavra);
    } else {
        int len = strlen(palavra);
        for(int i=0; i < len;i++){
            novapalavra[i] = palavra[i + 1];
        }
        printf("Nova palavra formada: %s", novapalavra);
    }

    return 0;
}