#include <stdio.h>
//Programa: menu de opcoes para treinar switch case; feito em aula

int main (){
    //Declarando variavel
    int op;

    //Criando laço de repetição, coletando a variavel op e colocando-a em um switch case
    do{
        printf("1 - Item 1\n");
        printf("2 - Item 2\n");
        printf("3 - Item 3\n");
        printf("4 - Sair\n");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("Item 1\n");
                break;
            case 2:
                printf("Item 2\n");
                break;
            case 3:
                printf("Item 3\n");
                break;
            case 4:
                printf("Sair\n");
                break;
            default:
                printf("Opcao %d Invalida\n", op);
        }
    }while(op != 4);
}
