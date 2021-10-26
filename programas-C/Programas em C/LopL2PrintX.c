#include<stdio.h>
//Programa print area de quadrado X
int main ()
{
    //Declarando variaveis
    int quant, i1, i2;

    //Solicitar a area do quadrado
    printf("Digite a area do quadrado feito por x:\n");
    scanf("%d", &quant);

    /*Dois for; for de dentro para fazer as linhas horizontais /
    for de fora para dar espaço e copiar o que ta la em cima ate a quantidade*/
    for (i1 = 0; i1<quant; i1++){
        for(i2 = 0; i2<quant; i2++){
            printf("X");
        }
        printf("\n");
    }
}
