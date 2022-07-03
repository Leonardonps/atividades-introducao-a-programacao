#include <stdio.h>
#include <stdlib.h>

float pot(int base, int exp){

    float acum = 1.0;
    int i;

    if(exp<0){
        for(i = 0; i < abs(exp); i++){
            acum = acum*base;
        }

        acum = 1.0/acum;
        return acum;
    }
    else{
        for(i = 0; i < exp; i++){
            acum = acum*base;
        }
        return acum;
    }
}

int main ( ){

    int base, exp;
    float res;

    printf("Digite a base e o expoente de sua potencia respectivamente:\n");
    scanf ("%d %d", &base, &exp);

    res = pot(base, exp);

    printf ("O resultado da potencia eh: %.2f\n", res);
    /*std :: cout << res; / cpp
    biblioteca <iostream> para as casas decimais irem de acordo com o resultado
    */
}
