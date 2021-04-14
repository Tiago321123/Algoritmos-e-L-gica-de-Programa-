#include <stdio.h>
#include <string.h>

int main()
{
    int a,b;
    printf("Escreva um numero entre 1 e 4: ");
    scanf("%d",&a);
    printf("escreva para ser revertido: ");
    scanf("%d",&b);

    switch (a) {
        case 1: // nao esquecer os :, caso o a=1 fazer o printf aí.
            printf("primeiro\n");
            break; // termina,fecha o switch, se nao tiver ele, continua o código.
        case 2:
            printf("segundo\n");
            break;
        case 3:
            printf("terceiro\n");
            break;
        case 4:
            printf("quarto\n");
            break;
        default:
            printf:("opcao invalida\n");
            break;
    }
   // if("num1 % num2==0") quer dizer que se o resto da divisao entre o num1 e num2 for igual a 0, fazer
   //o que vem a seguir
   strrev(b);
        printf("reverse da string: %d",b);

    return 0;
}
