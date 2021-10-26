#include <stdio.h>
// Programa: achar numeros primos em um intervalo usando fun��es
// Muito parecido com um j� feito sem fun��es

// Fun��o para saber se um numero no intervalo � primo
int ehprimo(int imain){

    // Declarando variaveis locais para executar o for
    int i2, quant;

    /* Atribuindo quant = 0 para que, a cada num novo, zere essa variavel
    e n�o fique acumulando o quant de todos
    */
    quant = 0;

    // For para saber a quantidade de numeros divisiveis de um numero
    for(i2 = 1; i2<=imain; i2++){
        if(imain%i2 == 0){
        quant ++;
        }
    }

    // Condi��o para ser primo e retornando o valor
    if(quant == 2){
        return 1;
    }
}

// Fun��o principal do programa
int main (){

    // Declarando variaveis
    int pi, pf;
    int imain;
    int resp;

    // Lendo os pontos inicial e final do intervalo
    printf("Digite os pontos inicial e final respectivamente:\n");
    scanf("%d %d", &pi, &pf);

    /* For para que rode o imain do ponto inicial ao ponto final sempre de 1 + 1 (1, 2, 3...)
        Dentro desse for, a cada vez que o imain muda para o proximo numero em sequencia,
    o imain � levado para fun��o eh primo para ser classificado em primo ou nao
    */
    for(imain = pi; imain <= pf; imain ++){
        //printf("%d", imain);

        // Armazenando o retorno da fun��oehprimo em uma variavel da fun��o main (n�o necess�rio)
        resp = ehprimo(imain);

        /* Se o retorno e, consequentemente, a variavel resp forem verdadeiras ( 1 ),
        exibimos o n�mero na tela
        */
        if(resp == 1){
            printf("%d ", imain);
        }
    }
}
