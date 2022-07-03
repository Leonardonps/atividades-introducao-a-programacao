#include<stdio.h>

int main ()
{
    /*Declarando variaveis: vdp = valor do produto; vpors1 = valor do produto a porcentagem 45%;
    vpors2 = valor do produto a porcentagem 30%; vdpMenorque = soma do produto + valor da porcentagem45;
    vpdMaiorque = soma do produto + valor da porcentagem30*/
    float vdp;
    float vpors1, vpors2;
    float vdpMenorque, vdpMaiorque;

    //Coletando valor da variavel
    printf("Insira o valor do produto comprado:\n");
    scanf("%f", &vdp);

    //Desenvolvendo o problema com if e apresentando resultados
    if(vdp<=20.00){
        vpors1 = (45.00*vdp)/100.00;
        vdpMenorque = vdp + vpors1;
        printf("O valor do produto com porcentagem de 45% é: R$ %.2f.\n", vdpMenorque);
    }
    else{
        vpors2 = (30.00*vdp)/100.00;
        vdpMaiorque = vdp + vpors2;
        printf("O valor do produto com porcentagem de 30% é: R$ %.2f.\n", vdpMaiorque);
    }
}
