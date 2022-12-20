#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;
    printf("Digite dois numeros diferentes: ");
    scanf("%f",&a);
    printf("Agora o segundo: ");
    scanf("%f",&b);
    if (a==b){
        printf("Apenas números diferentes");
    }
    else{
     if (a>b)
     {
        c=a*a;
        }
     else
        c=b*b;
    }
    wprintf(L"O quadrado do maior numero é: %0.2f",c); // toda linha q tiver alguma acentuação, fazer assim
    return 0;
}
