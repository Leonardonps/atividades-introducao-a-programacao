#include <stdio.h>

int main(){

    float sal, vemp, par;
    float divVempPar, sal30por;

    printf("Digite o valor de seu salario:\n");
    scanf("%f", &sal);
    printf("Agora, o valor do emprestimo a ser requisitado:\n");
    scanf("%f", &vemp);
    printf("Por ultimo, o numero de parcelas:\n");
    scanf("%f", &par);

    if (sal==0.0 || sal<0.0 || vemp==0.0 || vemp<0.0 || par ==0.0 || par<0){
        printf("Emprestimo nao pode ser concedido\n");
    }
    else{

        divVempPar=vemp/par;
        sal30por=(3.0*sal)/10.0;

        if(divVempPar<sal30por){
            printf("Emprestimo nao pode ser concedido\n");
        }
        else{
            printf("Emprestimo pode ser concedido\n");
        }
    }


}
