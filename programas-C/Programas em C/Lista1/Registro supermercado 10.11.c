#include <stdio.h>

typedef struct produto{
    char nome[100];
    float valor;
    int quant;
    char validade[15];
    int codigodebar;

}t_produto;

int main (){

    t_produto item1;

    printf("Digite o nome do produto:\n");
    gets(item1.nome);

    printf("Digite o valor do produto:\n");
    scanf("%f", &item1.valor);

    printf("Agora, digite a quantidade do produto:\n");
    scanf("%d", &item1.quant);
    getchar( );

    printf("Digite a validade do produto:\n");
    gets(item1.validade);

    printf("Por ultimo, o codigo de barra do produto:\n");
    scanf("%d", &item1.codigodebar);

    printf("\n");

    printf("Nome do produto: %s\n", item1.nome);
    printf("Preço do produto: %.2f\n", item1.valor);
    printf("Quantidade do produto: %d\n", item1.quant);
    printf("Validade do produto: %s\n", item1.validade);
    printf("Codigo de barras do produto: %d\n", item1.codigodebar);

}
