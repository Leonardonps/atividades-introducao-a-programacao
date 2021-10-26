#include <stdio.h>
//Programa - Urna eletronica; resolucao orientada pelo professor

//Estruturando um novo tipo de dado, focado nas caracteristicas do candidato
typedef struct dadoscandidato{
    char nome[100];
    int numcand;
    int quantvotos;
}t_dadoscandidato;

//Funcao para determinar para quem o voto vai; alem disso, nos informa sobre votos nulos
int votacao(int quantcandidatos, int votoatualwhile, t_dadoscandidato candidato[ ]){
    int j;

    for(j = 0; j < quantcandidatos; j++){
        if(votoatualwhile == candidato[j].numcand){
            candidato[j].quantvotos++;
        return 0; //voto para algum candidato
        }
    }

    return 1; //voto nulo
}

//Funcao principal
int main(){
    //Declarando variaveis, separadas por seus papeis - mesmo sendo mesmo tipo
    int quantcandidatos;
    int i;
    int votoatualwhile;
    int registroTotalvotos = 0, registroVotosnulos = 0;
    int res, refdecomp = 0;

    //Lendo a quantidade de candidatos, uma das variaveis mais importantes desse programa
    printf("Para comecar a votacao, digite a quantidade de candidatos:\n");
    scanf("%d", &quantcandidatos);

    t_dadoscandidato candidato[quantcandidatos];

    //Utilizando o for para coletar os dados dos candidatos e armazenar
    for(i = 0; i < quantcandidatos; i++){
        printf("Digite o numero do candidato:\n");
        scanf("%d", &candidato[i].numcand);
        getchar();
        printf("Digite, agora, o nome do candidato:\n");
        gets(candidato[i].nome);
        candidato[i].quantvotos = 0;
    }

    //Processo de votacao, captura do voto atual que está na máquina e funcao votacao inserida
    while(1){
        printf("Ola, para comecar a votacao, digite o numero de seu candidato:\n");
        scanf("%d", &votoatualwhile);

        if(votoatualwhile <= 0){
            break;
        }

        registroTotalvotos ++;
        res = votacao(quantcandidatos, votoatualwhile, candidato);
        registroVotosnulos = registroVotosnulos + res;
    }

    /*printf("quant total de votos: %d\n", registroTotalvotos);
    printf("quant de votos nulos: %d\n", registroVotosnulos);

    for(i = 0; i < quantcandidatos; i++){
        printf("quant de votos candidato %d: %d\n", i, candidato[i].quantvotos);
    }*/

    //Pós votacao, usamos uma variavel referencial - redecomp = 0 - para saber quem teve mais voto
    for (i = 0; i < quantcandidatos; i++){
        if(candidato[i].quantvotos > refdecomp){
            refdecomp = candidato[i].quantvotos;
        }
    }

    //Exibindo porcentagem, numero do candidato, nome e o vencedor; retirado do programa do professor
    for(i = 0; i < quantcandidatos; i++){
       if(refdecomp == candidato[i].quantvotos){
            printf("%.2f - %d - %s VENCEDOR\n", (candidato[i].quantvotos*100.0)/registroTotalvotos, candidato[i].numcand, candidato[i].nome);
       }
       else{
            printf("%.2f - %d - %s\n", (candidato[i].quantvotos*100.0)/registroTotalvotos, candidato[i].numcand, candidato[i].nome);
       }
    }

    printf("%.2f - Nulos\n", (registroVotosnulos*100.0)/registroTotalvotos);
}
