#include <stdio.h>

int main() {
    float acc = 0, temp = 0, accgeral = 0;
    int nalunos1, nalunos2, nalunos3, media = 0;

    printf("Digite o numero de alunos da turma 1:\n");
    scanf("%d", &nalunos1);
    for(int i = 0; i <nalunos1; i++){
        for(int w = 0; w < 4; w++){
        printf("Insira a nota do %do aluno da %da unidade:\n",i+1,w+1);
        scanf("%f", &temp);
        acc += temp;
        accgeral += temp;
        }
        printf("a media do aluno %d eh %f\n", i+1, acc/4);
        if((acc/4) > 7){media++;}
        acc = 0;
        temp = 0;
    }
    printf("O numero de alunos com media superior a 7 da turma 1 eh %d.", media);
    media = 0;
    printf("Digite o numero de alunos da turma 2:\n");
    scanf("%d", &nalunos2);
    for(int i = 0; i <nalunos2; i++){
        for(int w = 0; w < 4; w++){
        printf("Insira a nota do %do aluno da %da unidade:\n",i+1,w+1);
        scanf("%f", &temp);
        acc += temp;
        accgeral += temp;
        }
        printf("a media do aluno %d eh %f\n", i+1, acc/4);
        if((acc/4) > 7){media++;}
        acc = 0;
        temp = 0;
    }
    printf("O numero de alunos com media superior a 7 da turma 2 eh %d.", media);
    media = 0;
    printf("Digite o numero de alunos da turma 3:\n");
    scanf("%d", &nalunos3);
    for(int i = 0; i <nalunos3; i++){
        for(int w = 0; w < 4; w++){
        printf("Insira a nota do %do aluno da %da unidade:\n",i+1,w+1);
        scanf("%f", &temp);
        acc += temp;
        accgeral += temp;
        }
        printf("a media do aluno %d eh %f\n", i+1, acc/4);
        if((acc/4) > 7){media++;}
        acc = 0;
        temp = 0;
    }
    printf("O numero de alunos com media superior a 7 da turma 3 eh %d.", media);
    printf("\n\nA MEDIA GERAL DE TODAS AS ESCOLAS EH %f.", accgeral/(nalunos1 + nalunos2 + nalunos3));
    return 0;

}
