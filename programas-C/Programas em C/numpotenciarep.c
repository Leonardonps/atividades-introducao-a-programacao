#include <stdio.h>

int main()
{
    /*Declarando variaveis. cont = 1 por causa da contagem do for que vai até o
     numero do expoente. mpl = 1 para ter algo para sustentar a variavel mpl
     antes de chegar a variavel a.*/
    int B;
    int cont = 1, mpl = 1;
    float A;
    char resp;

    do{
    //Obtendo as variaveis base e expoente
    printf("Digite a base da exponenciacao:\n");
    scanf("%f", &A);

    printf("Agora o expoente:\n");
    scanf("%d", &B);

    //Usando if caso expoente seja zero; caso especial
    if ( B == 0){
        printf("Resultado da exponenciacao e: 1.\n");
    }
    else{

        //Estrutura for para ficar multiplicando A a quantidade de vezes de B
        for(cont=1; cont<=B; cont++){
            mpl = mpl * A;
        }

        //Mostrando resultados
        printf("Resultado da exponenciacao e: %d\n", mpl);
        printf("\n");
    }
    getchar();
    printf("Quer realizar novo calculo(s/n)? \n");
    scanf("%c", &resp);

    } while(resp == 's');
}
