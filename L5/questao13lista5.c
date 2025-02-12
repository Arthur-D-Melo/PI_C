/*Entrar com vários números, até digitar o número 0, que não deve ser guardado na lista.
Imprimir quantos números iguais ao último número da lista foram lidos.
Obs: A quantidade máxima de números é 100.*/

int main(){
    int opcao, numero[100], ultimo, acciguais;
    for(int i = 0; i < 100; i++){
        printf("Digite um numero: <0 pra parar>\n");
        scanf("%d", &opcao);
        if(numero != 0){
            numero[i] = opcao;
        } else {
            ultimo = i - 1;
        } 
    }

    for(int i = 0; i < ultimo; i++){
        if(numero[i] == numero[ultimo]){
            acciguais++;
        }
    }
    printf("Numero de numeros iguais ao ultimo:%d", acciguais);
    }
}