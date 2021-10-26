
#include <stdio.h>
//Programa envolvendo funções: achando o maximo entre três números inteiros

//Função específica o maior número entre eles, usamos if para determinar as condições de ser o maior
int maximo(int n1, int n2, int n3){

    if(n1>n2 && n1>n3){
    return n1;
    }

    if(n2>n1 && n2>n3){
    return n2;
    }

    if(n3>n1 && n3>n2){
    return n3;
    }

}

//Função principal main, onde coletamos os números e exibimos a saída
int main (){

    //Declarando os três números a serem comparados
    int n1, n2, n3;

    //Lendo esses números
    printf ("Digite os tres numeros para determinar o maior entre eles:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Exibindo o maior numero entre eles
    printf("O maior desses numeros eh: %d\n", maximo(n1, n2, n3));

}
