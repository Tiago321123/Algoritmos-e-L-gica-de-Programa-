#include <stdio.h>
#include <math.h>

int main()
{
   int b,a,c,conta,delta;
   float x1,x2;
   printf("Bem vindo ao basckara, coloque a variável a: ");
   scanf("%s",&a);
   printf("E agora o b: ");
   scanf("%s",&b);
   printf("Advinha? O c: ");
   scanf("%s",&c);
   delta=sqrt(b*b -4*a*c);

   if (delta >0) {
        x1=(-b+delta)/(2*a);
        x2=(-b-delta)/(2*a);
        printf("\nX1 e: %f\n",x1);
        printf("X2 e: %f",x2);
   }
   if (delta=0){
       x1=-b/(2*a);
       printf("\nX1 e: %f",x1);
   }
   if (delta<0) {
    printf("Nao vai dar, numero imaginario nao da");

   }

    return 0;
}
