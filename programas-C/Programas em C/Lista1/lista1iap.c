#include <stdio.h>

int main ()
{

float n1, n2, n3;
float med;

printf("Olá! Digite sua primeira nota:\n");
scan ("%f",&n1);
printf("Agora, digite sua segunda:\n");
scan ("%f",&n2);
printf("Por fim, sua terceira nota:\n");
scan ("%f",&n3);

med=(n1+n2+n3)/3;
printf("A sua média é: %.2f\n", med);
}
