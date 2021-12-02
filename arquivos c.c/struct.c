#include <stdio.h>
  
int main()
{

    struct cad_aluno
    {
        char nome[20]; // nome do aluno
        float notas[4];
        float media;
    };
    struct cad_aluno fatec[6]; // 6 alunos daí

    int i,n;

    printf("\n Cadastro de alunos");
    for(n=0; n<6;n++)
    {
    printf("\n\n Informe o nome do Aluno %d: ",n+1);
    fgets(fatec[n].nome,20,stdin);
    fflush(stdin);
        for(i=0; i<4;i++)
        {
        printf("\n Informe a nota do aluno:  ");
        scanf("%f%*c",&fatec[n].notas[i]);
        fatec[n].media += fatec[n].notas[i];   
        }
    }

    for(n=0; n<6;n++){
        printf("\n Nome .........%s",fatec[n].nome);
        for(i=0;i<4;i++)  
        {
        printf("\n Nota %d .......%.2f",i+1,fatec[n].notas[i]);
        }
        printf("\n Media: .......%.2f\n",fatec[n].media/4);
    }

    return 0;
}