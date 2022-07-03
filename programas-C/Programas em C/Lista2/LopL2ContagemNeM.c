#include <stdio.h>

int main (){

    //Declarando variaveis

    int N, M;
    int i1, i2;

    //For Principal
    while(1){
        //Coletando as variaveis N e M
        //printf("Digite N:\n");
        scanf("%d", &N);

        //printf("Digite M:\n");
        scanf("%d", &M);

        //N==M parar o programa
        if(N==M){
            break;
        }

        //Primeira contagem N<M; ordem crescente
        if(N<M){
            for(i1 = N; i1 <=M; i1++){
                printf("%d ", i1);
            }
            printf("\n");
        }
        //Segunda contagem N>M; ordem decrescente
        if (N>M){
            for(i2 = N; i2 >= M; i2--){
                printf("%d ", i2);
            }
            printf("\n");
        }
    }
}
