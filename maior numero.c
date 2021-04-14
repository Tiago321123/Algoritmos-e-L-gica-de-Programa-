#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Coloque o primeiro valor: ");
    scanf("%d",&n1);
    printf("O segundo: ");
    scanf("%d",&n2);
    printf("O terceiro: ");
    scanf("%d",&n3);
    if ((n1==n2) || (n1==n3) || (n2==n3)) {
        printf("Apenas valores diferentes");
    }
    else{
    if ((n1>n2) && (n1>n3)){
        printf("O %d e o maior",n1);
        }

    if ((n2>n1) && (n2>n3)){
        printf("O %d e o maior",n2);
    }

    if ((n3>n2) && (n3>n1)){
         printf("O %d e o maior",n3);
        }
    }
    return 0;
}
