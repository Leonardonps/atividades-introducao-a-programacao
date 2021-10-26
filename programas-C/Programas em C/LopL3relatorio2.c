#include <stdio.h>
#include <string.h>
//Programa relatorio de produtos; com instruçoes do professor

//Definindo um tipo para movel e suas caracteristicas
typedef struct Movel{
    char nome[50];
    float peso;
    char tipo;
}t_Movel;

//Funcao principal
int main(){

    //Declarando variaveis
    int i, quant;
    float pesoref = 0.00;
    char tiporef = 's';
    int tipos10mais, indprodmaispes, quantReal = 0;
    char texto[ ] = "Real"; //variavel feita pelo professor
    char* finalDesc;//variavel feita pelo professor

    //Sabendo quantos moveis estarao no cadastro
    //printf("Quantos moveis para serem cadastrados:\n");
    scanf("%d", &quant);
    getchar();

    //Declarando variavel produtos, depois de saber a quantidade de moveis
    t_Movel produtos[quant];

    //For - estrutura principal desse programa
    for(i=0; i<quant; i++){

        //Coletando o nome, peso e tipo do movel
        //printf("Digite o nome do produto:\n");
        gets(produtos[i].nome);
        //printf("Agora, o seu peso:\n");
        scanf("%f", &produtos[i].peso);
        getchar();
        //printf("Digite o tipo do seu produto:\n");
        scanf("%c", &produtos[i].tipo);
        getchar();

        //Primeira condiçao do problema
        if((tiporef == produtos[i].tipo) && (produtos[i].peso > 10.0)){
            tipos10mais++;
        }

        //Segunda condicao, criada pelo professor
        finalDesc = &produtos[i].nome[strlen(produtos[i].nome) - 4];
       //printf("%s\n", finalDesc);

        if(strcmp(finalDesc, texto) == 0){
            quantReal++;
        }

        //Terceira condiçao do problema
        if(pesoref < produtos[i].peso){
            pesoref = produtos[i].peso;
            indprodmaispes = i;
        }

    }


    //Exibindo o que pede do problema
    printf("Tipo 's' acima de 10Kg: %d\n", tipos10mais);
    printf("Termina em  \"Real\": %d\n", quantReal);
    printf("Mais pesado: \"%s\" \n", produtos[indprodmaispes].nome);

}
