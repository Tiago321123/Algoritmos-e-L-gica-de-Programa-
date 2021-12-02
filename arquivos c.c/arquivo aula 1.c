#include <stdio.h>
#include <stdlib.h>

typedef struct dados
{
    int codigo;
    char nome[20];
    char sobrenome[15];
    char endereco[20];
    int rg;
    int telefone;
    float salario;
} cliente;

void inserir()
{
    int a;
    char numstr();
    FILE *fptr;

    cliente fatec;
    fptr = fopen("ARQUEDADOS","ab");

    if(fptr == NULL){
    printf("\nProblemas de arbetura de arquivo...");
    system("pause");
    }
    else{
        do{
            system("cls");



        }while(a=0);
    }
} 

int main(){
int a;
printf("\n Entre com o RG: ");


return 0;
}