
#include <stdio.h>
//Programa envolvendo fun��es: achando o maximo entre tr�s n�meros inteiros

//Fun��o espec�fica o maior n�mero entre eles, usamos if para determinar as condi��es de ser o maior
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

//Fun��o principal main, onde coletamos os n�meros e exibimos a sa�da
int main (){

    //Declarando os tr�s n�meros a serem comparados
    int n1, n2, n3;

    //Lendo esses n�meros
    printf ("Digite os tres numeros para determinar o maior entre eles:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Exibindo o maior numero entre eles
    printf("O maior desses numeros eh: %d\n", maximo(n1, n2, n3));

}
