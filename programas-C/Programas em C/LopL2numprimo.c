#include <stdio.h>
//Programa definir se o numero � primo
int main ()
{
    /*Declarando as variaveis N = numero primo;
    i = numeros de vezes que passara no for ate o numero;
    quant = quantidade de vezes que o resto pode ser 0 (2) */
    int N, i, quant = 0;

    //Obtendo o numero a saber se ou nao e primo
    printf("Digite o numero:\n");
    scanf("%d", &N);

    //Usando for para saber quanto de resto � 0
    for (i =1; i <=N; i++){
            if(N%i == 0){
                printf("Numero e divisivel por: %i\n", i);
                quant++;
            }
    }

    //Condi��es para definir se � primo
    if(quant == 2){
        printf("Numero %d e primo; quantidade de divisiveis: %d \n", N, quant);
    }
    else{
        printf("Numero %d nao e primo; quantidade de divisiveis: %d\n", N, quant);
    }
}
