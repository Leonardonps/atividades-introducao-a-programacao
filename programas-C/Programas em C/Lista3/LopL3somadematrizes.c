#include <stdio.h>
//Programa soma matrizes, resolucao baseada no outro exercicio de matrizes

//Declarando variaveis globais
int numlinhas, numcolunas;

//Funcao somar duas matrizes e exibir o resultado
int somamatrizes (int matriz1[ ][numcolunas ], int matriz2[ ][numcolunas]){
    //Declarando variaveis locais
    int matrizres[numlinhas][numcolunas];
    int L, C;

    //Somando as duas matrizes e colocando o resultado em uma matriz
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C<numcolunas; C++){
            matrizres[L][C] = matriz1[L][C] + matriz2[L][C];
        }
    }

    //Exibindo resultado
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C<numcolunas; C++){
           printf("%d ", matrizres[L][C]);
        }
        printf("\n");
    }

}

//Funcao principal
int main (){

    //Declarando variaveis locais
    int L, C;

    //Lendo o tamanho das duas matrizes, linhas x colunas
    //printf("Digite a quantidade de linhas e colunas:\n");
    scanf("%d %d", &numlinhas, &numcolunas);

    //Declarando variaveis matriz 1 e matriz 2
    int matriz1[numlinhas][numcolunas], matriz2[numlinhas][numcolunas];

    //Armazenando elementos da matriz 1
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C < numcolunas; C++){
            //printf("Digite o elemento da matriz 1, linha %d e coluna %d:\n", L, C);
            scanf("%d", &matriz1[L][C]);
        }
    }

    //Armazenando elementos da matriz 2
    for(L = 0; L < numlinhas; L++){
        for(C = 0; C < numcolunas; C++){
            //printf("Digite o elemento da matriz 2, linha %d e coluna %d:\n", L, C);
            scanf("%d", &matriz2[L][C]);
        }
    }

    //Colocando as duas matrizes na funcao somamatrizes
    somamatrizes(matriz1, matriz2);
}
