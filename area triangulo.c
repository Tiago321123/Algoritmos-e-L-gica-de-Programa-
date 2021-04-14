#include <stdio.h>

int main()
{
    int contador=1;
    float base, altura, area;
    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f",&base);
    printf("Digite o tamanho da altura do triangulo: ");
    scanf("%f",&altura);
    area=(base*altura/2);
    printf("%f\n",area);

    while (contador<=5){
    printf("%i\n",contador);
     ++contador;
    }
    return 0;
}
