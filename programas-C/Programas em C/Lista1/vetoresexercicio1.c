#include <stdio.h>

int main ( ){

    //Declaração de variáveis
    float numeros[5];
    int i;

    //Percorrendo o vetor
    for( i = 0; i<5; i++){
        printf("Digite um numero:\n");
        scanf("%f", &numeros[i]);
    }

    //Exibindo saída do vetor 1
    for(i = 0; i<5; i++){
        printf("%.2f ", numeros[i]);
    }

    printf("\n");

    //Exibindo saída do vetor 2
    for(i = 4; i>=0; i--){
        printf("%.2f ", numeros[i]);
    }

}
