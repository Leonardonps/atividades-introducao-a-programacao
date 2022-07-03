#include <stdio.h>

int main() {
  float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
  float media;

  printf("Digite n1:\n");
  scanf("%f", &n1);
  printf("Digite n2:\n");
  scanf("%f", &n2);
  printf("Digite n3:\n");
  scanf("%f", &n3);
  printf("Digite n4:\n");
  scanf("%f", &n4);
  printf("Digite n5:\n");
  scanf("%f", &n5);
  printf("Digite n6:\n");
  scanf("%f", &n6);
  printf("Digite n7:\n");
  scanf("%f", &n7);
  printf("Digite n8:\n");
  scanf("%f", &n8);
  printf("Digite n9:\n");
  scanf("%f", &n9);
  printf("Digite n10:\n");
  scanf("%f", &n10);

  media=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10.0;

  if(media>=5){
    if((n1>3.0) && (n2>3.0) && (n3>3.0) && (n4>3.0) && (n5>3.0) && (n6>3.0) && (n7>3.0) && (n8>3.0) && (n9>3.0) && (n10>3.0)){
    printf("Aprovado. Media = %.2f\n", media);
    }

    else{
      printf("Reposicao. Media = %.2f\n", media);
    }
  }

  if(media >=3.0 && media<5.0){
    printf("Reposicao. Media = %.2f\n", media);
  }
  if(media<3.0){
    printf("Reprovado. Media = %.2f\n", media);
  }

  if(n1<3){
    printf("%.2f ", n1);
  }
  if(n2<3){
    printf("%.2f ", n2);
  }
    if(n3<3){
    printf("%.2f ", n3);
  }
    if(n4<3){
    printf("%.2f ", n4);
  }
    if(n5<3){
    printf("%.2f ", n5);
  }
    if(n6<3){
    printf("%.2f ", n6);
  }
    if(n7<3){
    printf("%.2f ", n7);
  }
    if(n8<3){
    printf("%.2f ", n8);
  }
    if(n9<3){
    printf("%.2f ", n9);
  }
    if(n10<3){
    printf("%.2f", n10);
  }
  printf("\n");

    if(n1>5){
    printf("%.2f ", n1);
  }
  if(n2>5){
    printf("%.2f ", n2);
  }
    if(n3>5){
    printf("%.2f ", n3);
  }
    if(n4>5){
    printf("%.2f ", n4);
  }
    if(n5>5){
    printf("%.2f ", n5);
  }
    if(n6>5){
    printf("%.2f ", n6);
  }
    if(n7>5){
    printf("%.2f ", n7);
  }
    if(n8>5){
    printf("%.2f ", n8);
  }
    if(n9>5){
    printf("%.2f ", n9);
  }
    if(n10>5){
    printf("%.2f ", n10);
  }
}
