#include<stdio.h>
//Programa: Media com quantidade variavel de notas - Lop

int main()
{
    //Declaraçao de variaveis
    float nota, somadanotas = 0, media;
    int N = 0;

    //While com ciclo infinito ate digitar uma nota negativa; (1)* == sempre verdadeiro
    while(1){

        //Obtendo a nota
        //printf("Digite uma nota:\n");
        scanf("%f", &nota);

        //Quebra de ciclo caso nota negativa
        if(nota<0.0){
            break;
        }

        //Acumulando a soma das notas
        somadanotas = somadanotas + nota;
        //printf("%.2f\n", somadanota);

        //Variavel para saber quantas notas passaram
        N = N + 1 ;
    }

    //Processando a media
    media = somadanotas/N;

    //Exibindo a media
    printf("A media e: %.2f\n", media);
    //printf("Quantidade de notas que passaram no ciclo: %d", N);
}
