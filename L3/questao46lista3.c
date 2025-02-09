#include <stdio.h>

int main(){
    int opcao, v1 = 0, v2 = 0, v3 = 0, v5 = 0, v6 = 0, vencedor;
    float total = 0;
   do{
    printf("Vote no candidato 1, 2, 3, 5 pra nulo, ou 6 pra branco. <7 para finalizar>\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Voto confirmado para o candidato 1!\n");
        v1++;
        break;
        
        case 2:
        printf("Voto confirmado para o candidato 2!\n");
        v2++;
        break;
        
        case 3:
        printf("Voto confirmado para o candidato 3!\n");
        v3++;
        break;
        
        case 5:
        printf("Voto confirmado para o candidato 5!\n");
        v5++;
        break;
        
        case 6:
        printf("Voto confirmado para o candidato 6!\n");
        v6++;
        break;
        
        case 7:
        printf("Terminando votacao...\n");
        break;

        default:
        printf("Insira um numero valido!\n");
        break;
    }
    
}while(opcao != 7);
total = v1 + v2 + v3 + v5 + v6;
printf("Total de votos para os candidatos:\n1- %d\n2- %d\n3- %d\n", v1, v2, v3);
printf("Total de votos nulos: %d\n", v5);
printf("Total de votos brancos: %d\n", v6);
printf("Percentual de votos em branco e nulos sobre o total: %.2f\n", ((v5 + v6)/total)*100);
vencedor = (v1 > v2 && v1 > v3)?1:
           (v2 > v1 && v2 > v3)?2:
           (v3 > v1 && v3 > v2)?3:
           0;
if(vencedor != 0){
    printf("O vencedor eh o candidato %d!\n", vencedor);
} else {
    printf("Nao ha vencedores, houve empate!\n");
}

switch(vencedor){
    case 1:
    if(v1 > (v2 + v3)){
        printf("O vencedor 1 venceu com mais votos que os candidatos 2 e 3 somados!\n");
    } else{
        printf("O vencedor 1 venceu com MENOS votos que os candidatos 2 e 3 somados!\n");
    }
    break;
    
    case 2:
    if(v2 > (v1 + v3)){
        printf("O vencedor 2 venceu com mais votos que os candidatos 1 e 3 somados!\n");
    } else{
        printf("O vencedor 2 venceu com MENOS votos que os candidatos 1 e 3 somados!\n");
    }
    break;
    
    case 3:
    if(v3 > (v1 + v2)){
        printf("O vencedor 3 venceu com mais votos que os candidatos 1 e 2 somados!\n");
    } else{
        printf("O vencedor 3 venceu com MENOS votos que os candidatos 1 e 2 somados!\n");
    }
    break;
}
}