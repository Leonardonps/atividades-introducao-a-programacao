#include <stdio.h>
//Programa arquivo CSV feito em aula pelo professor

//Definindo tipo pessoa com caracteristicas variadas
typedef struct pessoa{
    int cpf;
    char nome [50];
    char sobrenome[50];
    char endereco[100];
    char telefone[25];
} t_pessoa;

//Funcao especifica para salvar arquivo
void salvarArquivo(t_pessoa lista[], int quant){
    int i;
    FILE* fp;

    fp = fopen ("dados.csv", "w");

    if(fp == 0){
        printf("Erro ao abrir o arquivo para escrita\n");
    }
    else{
        fprintf(fp, "CPF,nome,snome,endereço,telefone\n");
        for(i = 0; i < quant; i++){
            fprintf(fp, "%d,%s,%s,%s,%s\n", lista[i].cpf, lista[i].nome,
            lista[i].sobrenome, lista[i].endereco, lista[i].telefone);
        }
    }
    fclose(fp);
}

//Funcao especifica para ler e exibir arquivos, diferente de outro modo que está no slide
void LereExibirArquivo(){
    FILE* fp;
    fp = fopen ("dados.csv", "r");
    char linha[225];

    if(fp==0){
            printf("Error ao abrir o arquivo para leitura\n");
    }
    else{
        while(1){
            fgets(linha, 225, fp);

            if(feof(fp)){
                break;
            }
            printf("%s", linha);
        }
    }
}

//Funcao principal
int main (){
    //Declarando funções
    int i, quant;

    //Perguntando sobre quantas pessoas que estarão cadastradas
    //printf("Digite a quantidade de pessoas a serem cadastradas no sistema:\n");
    scanf("%d", &quant);

    //Declarando variavel lista
    t_pessoa lista[quant];

    //For para armazenar os dados dessas pessoas
    for(i = 0; i < quant; i++){
        //printf("Para comecar, digite seu cpf:\n");
        scanf("%d", &lista[i].cpf);
        getchar();
        //printf("Digite seu nome:\n");
        gets(lista[i].nome);
        //printf("Digite seu sobrenome:\n");
        gets(lista[i].sobrenome);
        //printf("Digite, agora, seu endereço:\n");
        gets(lista[i].endereco);
        //printf("Por ultimo, seu telefone:\n");
        gets(lista[i].telefone);
    }

    //Funcoes de salvar, ler e exibir os dados em arquivo csv
    salvarArquivo(lista, quant);
    LereExibirArquivo();

}

