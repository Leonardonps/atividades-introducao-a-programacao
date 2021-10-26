#include <stdio.h>
#include <math.h>
//Programa que calcula a potencia de um dado numero e expoente por meio de função
//Programa feito em sala de aula pelo professor
//Já tem uma feita, refazendo

//Função específica da potencia
float pot(int base, int exp){

    //Declarando variaveis locais da função
    int i;
    int acumdapot = 1;
    float res1, res2;

    //Separando os casos, 1º caso expoente negativo
    if (exp < 0){

        //Extraindo modulo do expoente
        exp = sqrt(exp * exp);

        //Usando for para calcular a potencia
        for(i = 0; i < exp; i++){
            acumdapot = acumdapot * base;
        }

        //Invertendo a base por ser o expoente negativo e retornando resultado
        res1 = 1.0/acumdapot;
        return res1;
    }

    //2º Caso expoente zero ou positivo
    else{

        //Usando o mesmo for do caso 1
        for(i = 0; i < exp; i++){
            acumdapot = acumdapot * base;
        }

        //Armazenando o resultado em uma variavel (nao necessario) e retornando o resultado
        res2 = acumdapot;
        return res2;
    }
}

//Função principal main
int main(){

        //Declarando as variaveis da operação
        int base, exp;

        //Lendo as variaveis
        printf("Digite a base e o expoente de sua potencia respectivamente:\n");
        scanf("%d %d", &base, &exp);

        //Exibindo resultado final
        printf("O resultado eh: %.2f \n", pot(base, exp));
}
