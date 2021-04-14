#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float rendelata, valorlata, valortotal, L, C, A, area1, area2, area3,areatotal,Qlata;
    printf("Please, coloque a medida do comprimento do comodo em metros: ");
    scanf("%f",&C);
    printf("Agora, coloque a medida da largura do comodo: ");
    scanf("%f",&L);
    printf("Agora, coloque a medida da altura do comodo: ");
    scanf("%f",&A);
    printf("Agora, quanto rende uma lata de tinta em M2: ");
    scanf("%f",&rendelata);
    printf("E o preco da lata de tinta: ");
    scanf("%f",&valorlata);
    area1=C*A + C*A;
    area2=A*L + A*L;
    area3=C*L;
    areatotal=area1+area2+area3;
    Qlata=areatotal/rendelata;
    valortotal=Qlata*valorlata;
   // valortotal= ceil(valortotal)
    system("cls");
    printf("O valor total é: %f\n",valortotal);
    printf("A quantidade de latas é: %f",Qlata);
   // ceil arredonda pra cima, 5.5 vai pra 6
    return 0;
}
