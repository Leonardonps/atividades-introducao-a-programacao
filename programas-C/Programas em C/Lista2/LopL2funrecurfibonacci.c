#include <stdio.h>
/* Programa: exibindo os números da sequência de Fibonacci
de acordo com a quantidade que o usuário pede.
*/

/*Função pré-moldada (slide) para definir um numero da sequencia de Fibonacci
de acordo com seu índice
*/
int fib(int numind){

    if (numind == 0){
        return 0;
    }
    else if (numind ==1){
        return 1;
    }
    else {
        return fib (numind - 1) + fib(numind - 2);
    }

}

// Função principal
int main (){

    // Declarando as variaveis
    int N;
    int numind, i, res;

    // Solicitando e armazenando a quantidade de numeros
    printf("Digite a quantidade de numeros a serem exibidos da sequencia fibonacci:\n");
    scanf("%d", &N);

  /* Utilizando essa quantidade de numeros para ser rodado em um for. Se i = 0, primeiro elemento a ser
  mostrado = 0. Se i = 1, primeiro elemento da sequencia Fibonacci = 1.
  */
    for (i = 0; i <= N; i++){

    //Dentro do for, associamos o valor do i como o valor do indice do numero a ser encontrado na seq Fibonacci
    numind = i;

    /* Após um valor ser atribuído em numind, será encaminhado para a função fib
    e resultado volta sendo armazenado em um variavel, res*/
    res = fib(numind);

    //Exibindo a variavel res e retornando ao for quantas vezes necessarias
    printf("%d ", res);
    }

}
