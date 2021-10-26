#include<stdio.h>
/*Programa: media com numeros maiores que ela - Lop
   Usando vetor e for*/

int main ()
{
    //Declaraçao de variaveis
    float notas[10], somadasnotas = 0.0, media;
    int cont;

    //For para armazenar as notas no vetor
    for(cont = 0; cont<10; cont++){
        printf("Digite a nota %d:\n", cont);
        scanf("%f", &notas[cont]);

        //Acumulando as notas obtidas
        somadasnotas = somadasnotas + notas[cont];
        //printf("%.2f", somadasnotas);
    }

    //Processando a media usando a variavel somadasnotas
    media = somadasnotas/10.0;

    //Exibindo a media
    printf("Media: %.2f\n", media);

    /*Em seguida, exibindo os numeros maiores que ela;
    utilizando for, interligado ao printf, para comparar e exibir*/
    printf("Maiores que a media: ");

    for(cont =0; cont<10; cont++){
        if(notas[cont]>media){
            printf("%.0f ", notas[cont]);
        }
    }

}
