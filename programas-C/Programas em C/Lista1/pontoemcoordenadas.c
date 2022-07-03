#include <stdio.h>

int main()
{
    //Declarando x e y
    float x, y;

    //Obtendo x e y
    printf("Digite o valor de x:\n");
    scanf("%f", &x);
    printf("Digite o valor de y:\n");
    scanf("%f", &y);

    //If Origem, eixo x e eixo y
    if(x==0.0 & y==0.0){
        printf("Origem");
    }
    if(x!=0.0 && y==0.0){
        printf("Eixo X");
    }
    if(x==0.0 && y!=0.0){
        printf("Eixo Y");
    }

    //If quadrantes
    if(x>0.0 && y<0.0){
        printf("Q4");
    }
    if(x>0.0 && y>0.0){
        printf("Q1");
    }
    if(x<0.0 && y>0.0){
        printf("Q2");
    }
    if(x<0.0 && y<0.0){
        printf("Q3");
    }

}
