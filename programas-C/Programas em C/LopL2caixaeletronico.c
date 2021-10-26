#include <stdio.h>
//Programa: Retirando notas em um caixa eletronico

void saque (int quantia){

    int quant200, quant100, quant50, quant5;

    quant200 = quantia/200;
    quant100 = (quantia%200)/100;
    quant50 = ((quantia%200)%100)/50;
    quant5 = (((quantia%200)%100)%50)/5;

    //Exibindo a quantidade de notas em cada valor
    printf ("R$ 200 = %d, R$100,00 = %d, R$ 50,00 = %d, R$ 5,00 = %d", quant200, quant100, quant50, quant5);

}

int main (){

    //Declarando variaveis
    int quantia;

    //Lendo variavel valor
    printf ("Digite o valor a ser retirado no caixa eletronico:\n");
    scanf ("%d", &quantia);

    saque(quantia);
}
