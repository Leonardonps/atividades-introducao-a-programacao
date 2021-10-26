#include<stdio.h>

int main()
{
    int cont;

    for(cont = 1; cont<=5; cont++){
        printf("%d::Nao devo jogar avioes de papel\n", cont);
    }
   // printf("%d", cont); mostrar dps o contador, fica 6
}

int main2()
{
    float n1, n2, media;
    char resp='s';

    while(resp=='s' || resp=='S'){

    printf("Digite n1:\n");
    scanf("%f", &n1);
    printf("Digite n1:\n");
    scanf("%f", &n2);
    getchar();//Limpa enter que ta sobrando

    media=(n1+n2)/2;
    printf("Media = %.2f\n", media);

    printf("Quer realizar novo calculo?(s/n)\n");
    resp = getchar();
    //scanf("%c", &resp);
    //scanf("%c", &resp); 2x para nao passar direto
    //outro jeito: %*cc
    }
}
