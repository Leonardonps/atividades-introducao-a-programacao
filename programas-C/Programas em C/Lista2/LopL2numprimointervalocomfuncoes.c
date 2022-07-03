#include <stdio.h>
// Programa: achar numeros primos em um intervalo usando funções
// Muito parecido com um já feito sem funções

// Função para saber se um numero no intervalo é primo
int ehprimo(int imain){

    // Declarando variaveis locais para executar o for
    int i2, quant;

    /* Atribuindo quant = 0 para que, a cada num novo, zere essa variavel
    e não fique acumulando o quant de todos
    */
    quant = 0;

    // For para saber a quantidade de numeros divisiveis de um numero
    for(i2 = 1; i2<=imain; i2++){
        if(imain%i2 == 0){
        quant ++;
        }
    }

    // Condição para ser primo e retornando o valor
    if(quant == 2){
        return 1;
    }
}

// Função principal do programa
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
    o imain é levado para função eh primo para ser classificado em primo ou nao
    */
    for(imain = pi; imain <= pf; imain ++){
        //printf("%d", imain);

        // Armazenando o retorno da funçãoehprimo em uma variavel da função main (não necessário)
        resp = ehprimo(imain);

        /* Se o retorno e, consequentemente, a variavel resp forem verdadeiras ( 1 ),
        exibimos o número na tela
        */
        if(resp == 1){
            printf("%d ", imain);
        }
    }
}
