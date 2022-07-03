#include<stdio.h>

int main ()
{
    //Declarando as variaveis
    float rm;
    float vpor15, vpor275;

    //Determinando a renda mensal
    printf("Digite o valor de sua renda mensal em reais:\n");
    scanf("%f", &rm);

    //Usando if, calculando e exibindo o valor do imposto
    if(rm<=1164.00){
        printf("R$ 0.00");
    }

    if(1164.00<rm && rm<=2326.00){

    vpor15 = (rm*15.00)/100.00;

    printf("O valor a ser pago de imposto �: R$ %.2f.\n", vpor15);
    }

    if(rm>2326.01){

    vpor275 = (rm*27.50)/100.00;

    printf("O valor a ser pago de imposto �: R$ %.2f.\n", vpor275);}
}
