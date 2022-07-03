#include <stdio.h>
//Calculando IMC com classificação

int main()
{
//Declarando variaveis
  float massa, altura, imc;

//Obtendo variaveis
  scanf("%f", &massa);
  scanf("%f", &altura);

//Calculando imc
  imc=massa/(altura*altura);

//Classificando com if
    if(imc<18.5){
        printf("Abaixo do peso\n");
    }
    else{
        if(18.5<=imc && imc<25.0){
            printf("Peso normal\n");
        }
        else{
            if(25.0<=imc && imc<30.0){
                printf("Sobrepeso\n");
            }
            else{
                if(imc>30.0){
                    printf("Obesidade\n");
                }
            }
        }
    }
}
