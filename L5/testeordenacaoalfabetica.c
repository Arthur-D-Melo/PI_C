#include <stdio.h>
#include <string.h>

int main(){
    char nomes[4][30], auxnomes[30];
    for(int i = 0; i <4; i++){
        printf("Insira o primeiro nome:\n");
        fgets(nomes[i], 30, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for(int x = 0; x<3; x++){
        for(int y = x + 1; y <4; y++){
            if(strcmp(nomes[x], nomes[y]) > 0){
                strcpy(auxnomes, nomes[x]);
                strcpy(nomes[x], nomes[y]);
                strcpy(nomes[y], auxnomes);
            }
        }
    }

    for(int i = 0; i<4; i++){
        printf("Nome %d: %s", i+1, nomes[i]);
    }
    return 0;
}