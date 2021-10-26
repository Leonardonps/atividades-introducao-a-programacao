#include <stdio.h>
//Programa realizado em aula: classificando matriz

//Declarando variavel numero de colunas como global para nao dar problema na classificacao
int numcolunas;

//Funcao para saber se eh esparsa ou nao
int esparsa(int matriz[][numcolunas], int numlinhas, int numcolunas){
    //Declarando variaveis locais da funcao esparsa
    int L, C, qZeros = 0;
    float totalEl;

    //Percorrendo matriz para saber a quantidade de zero
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C < numcolunas; C++){
            if(matriz[L][C] == 0){
                qZeros++;
            }
        }
    }

    //Calculando quantidade de elementos na matriz
    totalEl = numlinhas * numcolunas;

    //Retornando a funcao de acordo com a porcentagem de zero
    if(qZeros/totalEl > 0.7){
        return 1;
    }
    else{
        return 0;
    }
}

//Funcao principal
int main (){

    //Declarando variaveis locais
    int numlinhas;
    int L, C;

    //Lendo o numero de linhas e colunas
    printf("Digite a quantidade de linhas:\n");
    scanf("%d", &numlinhas);

    printf("Digite a quantidade de colunas:\n");
    scanf("%d", &numcolunas);

    //Declarando a matriz
    int matriz[numlinhas][numcolunas];

    //Armazenando elementos na matriz
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C < numcolunas; C++){
                printf("Elemento da linha %d, coluna %d:\n", L, C);
                scanf("%d", &matriz[L][C]);
        }
    }

    //Retornando funcao esparsa e classificando a matriz por meio do if/else
    if(esparsa(matriz, numlinhas, numcolunas) == 1){
        printf("A matriz e esparsa");
    }
    else{
        printf("A matriz nao e esparsa");
    }
}
