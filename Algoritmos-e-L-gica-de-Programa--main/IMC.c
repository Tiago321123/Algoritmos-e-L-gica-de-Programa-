#include <stdio.h>
int main()
{
    float a,p,IMC;
    printf("Welcome a nossa rede de calculo de IMC");
    printf("\nPara realizar a conta de seu IMC, precisaremos de dois dados seus:");
    printf("\nO primeiro sera sua altura em metros");
    printf("\nDigite sua altura: ");
    scanf:("%f",&a);
    printf("\nAgora seu peso: ");
    scanf("%f",&p);
    IMC=p/a*a;
    if (18>IMC<22)
       printf("\nParabéns, tu é o cara!");
    else printf ("que pena");
       return 0;
}
