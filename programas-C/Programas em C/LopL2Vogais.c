#include<stdio.h>
//Programa contar vogais de um nome

int main()
{
    //Declarando variaveis
    char nome [100];
    int i;
    int cont=0;

    //Coletando o nome
    //printf("Digite o nome:\n");
    fgets(nome, 100, stdin);
    //printf("%s", nome);
    //printf("tam. do texto: %d\n", strlen(nome));

    //Usando for para identificar vogais e somar no contador
    for(i=0; i<=99;i++){
            if (nome[i] == '\0'){
                break;
            }
            if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' ||
               nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U'){
                cont = cont + 1;
            }
    }

    //Exibindo a quantidade
    printf("%d", cont);
}
