#include<stdio.h>
//Programa definir tamanho do vetor, numero menor em um intervalo e seu indice

int main ()
{
    //Declarando as variaveis menos a do vetor
    int tam, numderef = 999999999, armindice;
    int i;

    //Estabelecendo, na variavel tam, o tamanho do vetor
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    //Atribuindo o tamanho do vetor
    int vetor[tam];

    //Usando for para armazenar dados no vetor
    for(i = 0; i < tam; i++){
        printf("Digite um numero para o indice %d do vetor.\n", i);
        scanf("%d", &vetor[i]);

        /*If para comparar com um numero de referencia e, assim,
        anotar o dado para ser o novo numderef e, tambem, seu indice
        */

        if(vetor[i]<numderef){
            numderef = vetor[i];
            armindice = i;
        }
    }

    //Exibindo a saida do menor numero com seu indice
   printf("Menor: %d\n", numderef);
   printf("Indice: %d\n", armindice);

}
