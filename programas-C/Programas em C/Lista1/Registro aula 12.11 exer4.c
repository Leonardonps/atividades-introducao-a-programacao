#include <stdio.h>
#include <string.h>

typedef struct agenda {

    char nome[100];
    int telefone;

} t_agenda;

int main(){

    t_agenda contatos[10];
    int i, achou = 1;
    char buscador[100];

    for (i = 0; i<10; i++){
        printf("Digite nome:\n");
        gets(contatos[i].nome);
        printf("Digite telefone:\n");
        scanf("%d", &contatos[i].telefone);
        getchar();
        //scanf("%d%*c", &contatos[i].telefone);
        printf("\n");
    }

    printf("\n");

    for (i = 0; i<10; i++){
        printf("Nome: %s\n", contatos[i].nome );
        printf("Telefone: %d\n", contatos[i].telefone);
        printf("\n");
    }

    printf("Pesquise um contato:\n");
    gets(buscador);

    for(i = 0; i<10; i++){
        if (strcmp (buscador, contatos[i].nome) == 0){
            printf("Nome: %s\n", contatos[i].nome );
            printf("Telefone: %d\n", contatos[i].telefone);
            achou = 1;
        }
    }

    if(achou == 0){
        printf("Contato nao encontrado.\n");
    }
}
