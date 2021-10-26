#include <stdio.h>

typedef struct candidato {
    char nome [70];
    int numero;
    int votos;
}t_candidato;

int incrementarVoto(t_candidato cand[ ], int q, int vAtual){
    int i;

    for(i=0; i<q; i++){
        if(cand[i].numero == vAtual){
            cand[i].votos ++;
            printf("%d", cand[i].votos);
            return 0;
        }
    }
    return 1;
}

int main (){
    int qCandidatos, votoAtual, i;
    int qVotos, qNulos;

    printf("Quantidade de candidatos:\n");
    scanf("%d", &qCandidatos);

    t_candidato candidatos[qCandidatos];

    for(i=0; i<qCandidatos; i++){
        printf("Numero: ");
        scanf("%d", &candidatos[i].numero);
        getchar();
        printf("Nome: ");
        gets(candidatos[i].nome);
        candidatos[i].votos = 0;
    }

    while (1){
        printf("Voto: ");
        scanf("%d", &votoAtual);

        if (votoAtual <= 0)
            break;

        qVotos++;
        incrementarVoto(candidatos, qCandidatos, votoAtual);
        qNulos += incrementarVoto(candidatos, qCandidatos, votoAtual);

    }




}
