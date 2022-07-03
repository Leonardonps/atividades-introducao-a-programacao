#include <stdio.h>
//Numeros primos em um intervalo

int main()
{

    //Declarando variaveis
    int p1, p2;
    int i1, i2, N, quant;

    //Obtendo os pontos do intervalo
    printf("Digite o ponto 1 do intervalo:\n");
    scanf("%d", &p1);

    printf("Digite o ponto 2 do intervalo:\n");
    scanf("%d", &p2);

    /*For dentro de um for
        For externo: para pegar um numero que está contido no intervalo
        For interno: para saber a quantidade de divisiveis esse numero tem
    */

    for (i1 = p1; i1 <= p2; i1++){
        //Esse printf nos informa se o for está funcionado direito p.ex. 1, 2, 3...
        printf("\n%d\n", i1);

        /*Considerando que a cada ciclo do for temos que classificar o numero em
        primo ou não, utilizamos o i1 (que vai mudando do p1 até o p2) como a variavel
        num que será analisada no for interno
        */
        N = i1;

        /*A cada ciclo novo, depois de classificar um numero, temos que zerar o quant.
        Senao, ele não corresponderia a quantidade de divisiveis de um num,
        ficaria acumulando a quantidade total de divisiveis de todos os numeros do intervalo
        */

        quant = 0;

        //For interno
        for(i2 = 1; i2 <= N; i2++){
            if(N%i2 == 0){
                //printf só para saber se está funcionando o for corretamente
                printf("Numero e divisivel por: %i \n", i2);
                quant = quant + 1;
            }
        }

        /*Exibindo quantidade de divisiveis, para ver se está correto, e o num que
        considerado primo
        */

        printf("quant = %d\n", quant);
        if(quant == 2){
            printf("%d ", N);
        }
    }
}


