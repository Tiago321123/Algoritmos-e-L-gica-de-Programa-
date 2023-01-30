#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Digite dois numeros diferentes: ");
    scanf("%f",&a);
    printf("Agora o segundo: ");
    scanf("%f",&b);
    if (a==b){
        printf("Apenas numeros diferentes");
    }
    else{
     if (a>b){
        c=a*a;}
     else
        c=b*b;
    }
    printf("O quadrado do maior numero �: %0.2f",c);
    return 0;
}
