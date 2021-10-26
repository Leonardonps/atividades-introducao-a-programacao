#include <stdio.h>
//Programa para fazer em casa - feito em classe; soma de vetores

int main ()
{
    //Declarando variaveis
    int A[10], B[10], C[10];
    int i;

    //Repetição para pegar os elementos de vetor A
    for(i=0; i<=9; i++){
        printf("Digite o numero:\n");
        scanf("%d", &A[i]);
    }

    //Repetição para pegar os elementos de vetor B
    for(i=0; i<=9; i++){
        printf("Digite o numero:\n");
        scanf("%d", &B[i]);
    }

    //Repetição para somar A e B
    for(i=0; i<=9; i++){
        C[i] = A[i] + B[i];
    }

    //Exibindo a soma
    for(i=0; i<=9; i++){
        printf("%d ", C[i]);
    }

}
