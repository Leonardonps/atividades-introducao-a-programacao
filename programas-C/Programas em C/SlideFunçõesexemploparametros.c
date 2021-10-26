/*
//passagem de parametros por valor
#include <stdio.h>

void quadrado (int num){

    num = num*num;

    printf ("quadrado eh %d\n", num);
}

int main (){
    int x = 10;

    printf("ANTES::valor de x eh %d\n", x);
    quadrado (x);
    printf("DEPOIS::valor de x eh %d\n", x);
}
*/

#include <stdio.h>
//passagem de parametros por referencia

void quadradoRef (int *num){

    *num = (*num) * (*num);

    printf ("quadradoRef eh %d\n", *num);
}

int main (){
    int x = 10;

    printf("ANTES::valor de x eh %d\n", x);
    quadradoRef (&x);
    printf("DEPOIS::valor de x eh %d\n", x);
}
