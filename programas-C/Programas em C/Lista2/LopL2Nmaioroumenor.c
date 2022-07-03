#include<stdio.h>

int main ()
{
    //Declarando as variaveis
    int i;
    float Maior, Menor;
    float vetornum[15];

    //For para armaenar o vetor com cinco numeros
    for(i = 0; i<=14; i++){
        scanf("%f", &vetornum[i]);
    }

    //Colocando um referencial para o maior pode ser qualquer numero
    Maior = vetornum[0];

    //Comparando vetor com o numero maior usando for
    for(i = 0; i<=14; i++){
       if(vetornum[i] > Maior){
            Maior = vetornum[i];
       }
    }

    //Colocando um referencial para o menor pode ser qualquer numero
    Menor = vetornum[0];

    //Comparando vetor com o numero menor usando for
    for(i = 0; i<=14; i++){
       if(vetornum[i] < Menor){
            Menor = vetornum[i];
       }
    }

    //Exibindo os numeros maior e menor
    printf("Maior: %.0f\n", Maior);
    printf("Menor: %.0f\n", Menor);

}
