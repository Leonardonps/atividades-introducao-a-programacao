#include<stdio.h>

typedef struct jogador {
    char nomecomp[150];
    int idade;
    float chutes_a_gol;
    float gols;
} t_jogador;

int main (){
    t_jogador jogador1, jogador2;
    float acertosdegol1, acertosdegol2;

    printf("Digite o nome do jogador 1:\n");
    gets(jogador1.nomecomp);
    printf("Digite a idade do jogador 1:\n");
    scanf("%d", &jogador1.idade);
    printf("Digite a quantidade chutes a gol do jogador 1:\n");
    scanf("%f", &jogador1.chutes_a_gol);
    printf("Digite a quantidade de gols que o jogador 1 fez:\n");
    scanf("%f", &jogador1.gols);
    getchar();

    printf("Digite o nome do jogador 2:\n");
    gets(jogador2.nomecomp);
    printf("Digite a idade do jogador 2:\n");
    scanf("%d", &jogador2.idade);
    printf("Digite a quantidade chutes a gol do jogador 2:\n");
    scanf("%f", &jogador2.chutes_a_gol);
    printf("Digite a quantidade de gols que o jogador 2 fez:\n");
    scanf("%f", &jogador2.gols);

    acertosdegol1 = jogador1.gols/jogador1.chutes_a_gol;
    acertosdegol2 = jogador2.gols/jogador2.chutes_a_gol;

    if(acertosdegol1>acertosdegol2){
        printf("%s (%d)", jogador1.nomecomp, jogador1.idade);
    }
    if(acertosdegol2>acertosdegol1){
        printf("%s (%d)", jogador2.nomecomp, jogador2.idade);
    }
}
