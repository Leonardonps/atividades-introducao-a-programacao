#include <stdio.h>
//Programa envolvendo funções: achando a mediana entre três números inteiros

//Função específica da mediana, usamos if para determinar quando um número será uma mediana
int mediana(int n1, int n2, int n3){

    if((n1>n2 && n1<n3) || (n3<n1 && n1<n2)){
    return n1;
    }

    if((n2>n1 && n2<n3) || (n3<n2 && n2<n1)){
    return n2;
    }

    if((n3>n1 && n3<n2) || (n2<n3 && n3<n1)){
    return n3;
    }


}

//Função principal main, onde coletamos os números e exibimos a saída
int main (){

    //Declarando os três números a serem comparados
    int n1, n2, n3;

    //Lendo esses números
    printf ("Digite os tres numeros para determinar a mediana:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Exibindo a mediana
    printf("A mediana desses numeros eh: %d\n", mediana(n1, n2, n3));

}
