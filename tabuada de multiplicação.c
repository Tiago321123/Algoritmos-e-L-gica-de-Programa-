#include <stdio.h>
int main()
{
  int dois,tres,quatro,cinco,conta,tabuada1,tabuada2;
    printf("Que tabuada de 2 a 5, voce deseja realizar? ");// para aumentar essa quantidade de tabuadas, basta continuar o que foi feito até então com os if;
    scanf("%d",&tabuada1);
    printf("Por qual numero voce deseja multiplicar? ");
    scanf("%d",&tabuada2);
    if(tabuada1==2){
        conta= 2*tabuada2;
        printf("resultado: %d",conta);
    }
    else 
        if(tabuada1==3){
            conta=3*tabuada2;
            printf("resultado: %d",conta);
    }
    if (tabuada1==4){
        conta=4*tabuada2;
        printf("resultado: %d",conta);
    }
    if (tabuada1==5){
        conta=5*tabuada2;
        printf("resultado: %d",conta);
    }
    // coloque a do 6 ate 10 aqui

    // resto: x % 2   = o resto da divisao por 2 (pra nao esquecer, muito importante)
  return 0;
}
