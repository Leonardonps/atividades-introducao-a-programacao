#include <stdio.h>
// Programa feito em aula

int main()
{
    //Declarando variaveis
    int sdns = 0, cont = 1, ndns;
    int nota;
    float media;

    //Sabendo o numero de notas para fazer a media
    printf("Quantas notas deseja fazer a media:\n");
    scanf("%d", &ndns);

    //Estrutura for / prestar atençao como se e usado
    for(cont = 1; cont<=ndns; cont++){
        printf("Digite a nota:\n");
        scanf("%d", &nota);
        sdns= sdns + nota;
    }

    //Exibindo a media; casting - 'mudar' tipo de variavel (float)
    media = sdns/(float)ndns;
    printf("Media: %.2f", media);

}
