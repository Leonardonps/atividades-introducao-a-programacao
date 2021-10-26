#include<stdio.h>
//Programa: Quadrado da distancia de dois pontos

//Definindo um tipo de variavel para armazenar x e y
typedef struct ponto{
    int x;
    int y;
}t_ponto;

//Funcao principal
int main (){

    //Declarando variaveis da funcao main
    t_ponto ponto1, ponto2;
    int quaddadist;

    //Lendo x e y do p1
    printf("Digite o x e o y do ponto 1:\n");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    //Lendo x e y do p2
    printf("Digite o x e o y do ponto 2:\n");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    //Processamento do quadrado da distancia
    quaddadist = (ponto2.x - ponto1.x)*(ponto2.x - ponto1.x) + (ponto2.y - ponto2.y)*(ponto2.y - ponto2.y);

    //Exibindo o quadrado da distancia
    printf("Quadrado da distancia desses pontos eh: %d\n", quaddadist);

}
