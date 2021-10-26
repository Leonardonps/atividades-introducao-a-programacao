#include <stdio.h>
//#include <string.h>

typedef struct agenda {
    char nome [100];
    int telefone;
} t_agenda;

int main (){

    t_agenda contato;

    printf("Digite o nome do contato:\n");
    fgets(contato.nome, 100, stdin);

    //int pos = strlen(contato.nome) - 1;
    //contato.nome[pos] = '\0';

    printf("Digite, agora, o numero de telefone:\n");
    scanf("%d", &contato.telefone);

    printf("O nome eh: %s e o telefone: %d\n", contato.nome, contato.telefone);

}
