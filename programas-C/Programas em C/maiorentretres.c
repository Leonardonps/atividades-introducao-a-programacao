#include<stdio.h>
//Programa: Maior n�mero entre tr�s

int main()
{
    //Declarando variaveis
    int n1, n2, n3;

    //Coletando os n�meros
    printf("Digite n�mero 1:\n");
    scanf("%d", &n1);
    printf("Agora, o n�mero 2:\n");
    scanf("%d", &n2);
    printf("Por �ltimo, o n�mero 3:\n");
    scanf("%d", &n3);

    //Realizando as condi��es e mostrando o resultado
    if(n1>n2 && n1>n3){
        printf("O n�mero %d � o maior entre os tr�s.\n", n1);
    }
    if(n2>n1 && n2>n3){
        printf("O n�mero %d � o maior entre os tr�s.\n", n2);
    }
    if(n3>n1 && n3>n2){
        printf("O n�mero %d � o maior entre os tr�s.\n", n3);
    }

}
