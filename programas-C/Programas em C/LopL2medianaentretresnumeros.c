#include <stdio.h>
//Programa envolvendo fun��es: achando a mediana entre tr�s n�meros inteiros

//Fun��o espec�fica da mediana, usamos if para determinar quando um n�mero ser� uma mediana
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

//Fun��o principal main, onde coletamos os n�meros e exibimos a sa�da
int main (){

    //Declarando os tr�s n�meros a serem comparados
    int n1, n2, n3;

    //Lendo esses n�meros
    printf ("Digite os tres numeros para determinar a mediana:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Exibindo a mediana
    printf("A mediana desses numeros eh: %d\n", mediana(n1, n2, n3));

}
