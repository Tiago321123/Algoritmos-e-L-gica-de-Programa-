#include <stdio.h>
#include <math.h>/*pra matem�tica*/
#include <stdlib.h>/*faz um monte coisa*/

int main()
{
    float fatorial;
    float resposta=1;
    printf("digite o numero pra fatorar: ");
    scanf("%f",&fatorial);
    for ( ; fatorial>=1;--fatorial) {
        resposta *=fatorial;
    }
    printf("%f",resposta);

    float i=0;

    while (i!=0){
        printf("teste\n");
    }
    do{ // esse esta na ordem inversa do de cima, while=enquanto
        printf("\nteste");
    } while(i!=0);

    return 0;
}
