#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[30];
    char endereco[40];
    char CEP[11];
    char telefone[16];

    printf("Digite aqui seu nome: ");
    fgets(nome,30,stdin);
    printf("Digite aqui seu endereço: ");
    fgets(endereco,40,stdin);
    fflush(stdin);
    printf("Digite aqui seu CEP: ");
    fgets(CEP,11,stdin);
    printf("Digite aqui seu telefone: ");
    fgets(telefone,16,stdin);
    system("cls");
    printf("Nome: %s",nome);
    printf("Endereço: %s",endereco);
    strtok(CEP,"\n");
    printf("CEP: %s Endereço: %s",CEP,telefone);


    return 0;
}
