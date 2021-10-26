#include<stdio.h>
//Programa: Determinando a pessoa mais velha

//Definindo uma variavel para armazenar as datas das duas pessoas
typedef struct Data {
    int dia, mes, ano;
}t_Data;

//Função comdata (comparando as datas) com uma extensa condições

int compdata(t_Data pessoa1, t_Data pessoa2){
    //Primeira "onda" de condiçoes, verificando ano
    if(pessoa1.ano == pessoa2.ano){
        //Segunda "onda" de condiçoes, verificando mes
        if(pessoa1.mes == pessoa2.mes){
            //Terceira "onda" de condiçoes, verificando dia
            if(pessoa1.dia == pessoa2.dia){
                return 0;
            }
            else if(pessoa1.dia<pessoa2.dia){
                return 1;
            }
            else{
                return -1;
            }
        }
        else if(pessoa1.mes<pessoa2.mes){
            return 1;
        }
        else{
            return -1;
        }
    }
    else if(pessoa1.ano<pessoa2.ano){
        return 1;
    }
    else{
        return -1;
    }
}

//Funçao principal
int main (){
    //Declarando variaveis
    t_Data pessoa1, pessoa2;
    int res;

    //Coletando as datas das variaveis pessoas 1 e 2
    printf("Pessoa 1, digite o dia, o mes e o ano de seu nascimento:\n");
    scanf("%d %d %d", &pessoa1.dia, &pessoa1.mes, &pessoa1.ano);

    printf("Pessoa 2, digite o dia, o mes e o ano de seu nascimento:\n");
    scanf("%d %d %d", &pessoa2.dia, &pessoa2.mes, &pessoa2.ano);

    //Atribuindo o retorno da funçao compdata em uma variavel, res
    res = compdata(pessoa1, pessoa2);

    //Condicionando a variavel em res para exibiçao de resultados
    if (res == -1){
        printf("Pessoa 2 eh mais velha\n");
    }
    else if (res == 0){
        printf("Ambas tem a mesma idade\n");
    }
    else{
        printf("Pessoa 1 eh a mais velha\n");
    }
}
