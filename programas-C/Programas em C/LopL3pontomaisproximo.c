#include <stdio.h>
#include <math.h>
//Programa calcular a menor distancia de um ponto P entre outros varios pontos

//Definindo um tipo de dado para ponto, contendo as coordenadas x e y
typedef struct ponto{
    int x;
    int y;
}t_ponto;

//Funcao distancia entre os pontos
float distanciaentrepontos(t_ponto pontoP, t_ponto pontoN){
    float res;

    res = sqrt(((pontoP.x - pontoN.x)*(pontoP.x - pontoN.x)) +
                 ((pontoP.y - pontoN.y)*(pontoP.y - pontoN.y)));

    return res;
}

//Funcao principal
int main(){

    //Declarando variaveis
    t_ponto pontoP, pontoN, pontoRef;
    int n, i, res;
    float distanciaref = 99999999999.9;

    //Lendo o ponto principal
    printf("Digite o x do ponto P:\n");
    scanf("%d", &pontoP.x);
    printf("Digite o y do ponto P:\n");
    scanf("%d", &pontoP.y);

    //Perguntando quais pontos o usuario vai querer comparar com o ponto principal
    printf("Quantos pontos deseja comparar:\n");
    scanf("%d", &n);

    //Dentro do for, coletamos os dados dos pontos, um ponto de cada vez, e inserimos na funcao de distancia
    for(i = 1; i <= n; i++){
        printf("Digite o x do ponto %d:\n", i);
        scanf("%d", &pontoN.x);
        printf("Digite o y do ponto %d:\n", i);
        scanf("%d", &pontoN.y);

        //funcao
        res = distanciaentrepontos(pontoP, pontoN);

        //guardar coordenadas mais proximas
        if (distanciaref > res){
            distanciaref = res;
            pontoRef.x = pontoN.x;
            pontoRef.y = pontoN.y;
        }
    }

    //exibir coordenadas mais proximas
    printf("Ponto mais perto é (%d, %d)", pontoRef.x, pontoRef.y);
}




