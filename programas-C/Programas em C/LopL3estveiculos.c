#include <stdio.h>
//Programa: comparando caracteristicas de carros usando registro

// Definindo um tipo de variavel que contenha as caracteristicas de um carro
typedef struct carro {
    char modelo[100];
    char marca[100];
    int anodefab;
    int preco;
} t_carro;

//Funcao principal
int main () {

    //Declarando variaveis
    t_carro carro1, carro2;

    // Coletando dados da variavel carro 1
    printf("Digite o modelo do carro 1:\n");
    gets(carro1.modelo);
    printf("Digite a marca do carro 1:\n");
    gets(carro1.marca);
    printf("Digite o ano de fabricacao do carro 1:\n");
    scanf("%d", &carro1.anodefab);
    printf("Digite, por ultimo, o preco do carro 1:\n");
    scanf("%d", &carro1.preco);
    getchar();
    printf("\n");

    // Coletando dados da variavel carro 2
    printf("Digite o modelo do carro 2:\n");
    gets(carro2.modelo);
    printf("Digite a marca do carro 2:\n");
    gets(carro2.marca);
    printf("Digite o ano de fabricacao do carro 2:\n");
    scanf("%d", &carro2.anodefab);
    printf("Digite, por ultimo, o preco do carro 1:\n");
    scanf("%d", &carro2.preco);

    // Aplicando condicoes para exibir o modelo e a marca de um desses carros
    if(carro1.anodefab<carro2.anodefab){
        printf("%s %s", carro1.modelo, carro1.marca);
    }
    else if(carro2.anodefab<carro1.anodefab){
        printf("%s %s", carro2.modelo, carro2.marca);
    }

    else{
        if(carro1.preco<carro2.preco){
            printf("%s %s", carro1.modelo, carro1.marca);
        }
        else{
            printf("%s %s", carro2.modelo, carro2.marca);
        }
    }
}
