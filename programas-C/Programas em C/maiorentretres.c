#include<stdio.h>
//Programa: Maior número entre três

int main()
{
    //Declarando variaveis
    int n1, n2, n3;

    //Coletando os números
    printf("Digite número 1:\n");
    scanf("%d", &n1);
    printf("Agora, o número 2:\n");
    scanf("%d", &n2);
    printf("Por último, o número 3:\n");
    scanf("%d", &n3);

    //Realizando as condições e mostrando o resultado
    if(n1>n2 && n1>n3){
        printf("O número %d é o maior entre os três.\n", n1);
    }
    if(n2>n1 && n2>n3){
        printf("O número %d é o maior entre os três.\n", n2);
    }
    if(n3>n1 && n3>n2){
        printf("O número %d é o maior entre os três.\n", n3);
    }

}
