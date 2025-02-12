/*Construa um programa que armazene nome, matrícula e média de até 50 alunos e dê ao
usuário a possibilidade de ver a listagem dos alunos em ordem alfabética ou em ordem de
classificação. Obs: uma vez que os dados sejam digitados, o usuário deve poder ver as listagens
quantas vezes ele desejar.*/
#include <stdio.h>
#include <string.h>

int main(){
    int matricula[50], auxmatricula, opcao, contador = 0;
    float media[50], auxmedia;
    char nome[50][30], auxnome[30], entrada[30]; 
    for(int i = 0; i<50; i++){
        printf("Insira o nome: <'fim' para terminar>\n");
        fgets(entrada, 30, stdin);
        entrada[strcspn(entrada, "\n")] = '\0';
        if (strcmp(entrada, "fim") == 0){
            break;
        }
        strcpy(nome[i], entrada);
        printf("Insira a matricula:\n");
        scanf("%d", &matricula[i]);
        printf("Insira a media:\n");
        scanf("%f", &media[i]);

        getchar();
        contador++;
    }

    do{
        printf("Escolha\n1- Exibir lista em ordem alfabetica\n2- Exibir lista em ordem de media\n3- Acabar\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                for(int x = 0; x < contador - 1; x++){
                    for(int y = x + 1; y < contador; y++){
                        if(strcmp(nome[x],nome[y]) > 0){
                            strcpy(auxnome,nome[x]);
                            strcpy(nome[x],nome[y]);
                            strcpy(nome[y],auxnome);

                            auxmedia = media[x];
                            media[x] = media[y];
                            media[y] = auxmedia;

                            auxmatricula = matricula[x];
                            matricula[x] = matricula[y];
                            matricula[y] = auxmatricula;
                        }
                    }
                }
            break;

            case 2:
                for(int x = 0; x < contador - 1; x++){
                    for(int y = x + 1; y < contador; y++){
                        if(media[x] < media[y]){
                            auxmedia = media[x];
                            media[x] = media[y];
                            media[y] = auxmedia;

                            auxmatricula = matricula[x];
                            matricula[x] = matricula[y];
                            matricula[y] = auxmatricula;

                            strcpy(auxnome, nome[x]);
                            strcpy(nome[x], nome[y]);
                            strcpy(nome[y], auxnome);

                        }
                    }
                }
            break;

            case 3:
                printf("Terminando o algoritmo...\n");
            break;

            default:
                printf("Opcao invalida!\n");
        }

        for(int i = 0; i<contador; i++){
            printf("Nome aluno: %s\n", nome[i]);
            printf("Matricula: %d\n", matricula[i]);
            printf("Media: %.2f\n", media[i]);


        }
    }while(opcao != 3);
    return 0;
}