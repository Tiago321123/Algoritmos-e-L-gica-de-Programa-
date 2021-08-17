#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int time, jogador, idade,jog18=0,soma_idade=0,soma_altura=0,jog_gordo=0;
float peso, altura, percentual,media_idade,media_altura;

 for (time=1;time<=2;time++){
soma_idade=0;
for (jogador=1;jogador<=3;jogador++){
printf("\nDigite o peso do jogador em Kg %d:",jogador);
scanf("%f%*c",&peso);
printf("\nDigite altura do jogador em cm %d:",jogador);
scanf("%f%*c",&altura);
printf("\nDigite o idade do jogador em anos %d:",jogador);
scanf("%d%*c",&idade);
soma_idade = soma_idade + idade;
soma_altura = soma_altura + altura;
if(idade<18){
jog18++;
}
if (peso>80){
jog_gordo++;
}
}
media_idade = soma_idade/11;
printf("\nMedia de idade dos jogadores do time %d = %f",time,media_idade);
printf("\n\nPressine enter para continuar...");
getch();
system("cls");
}
media_altura = soma_altura/55;
percentual = jog_gordo*100/55;
printf("\nQuantidade de jogadores menores de 18 anos: %d",jog18);
printf("\nMedia de altura dos jogadores do campeonato: %f", media_altura);
printf("\nPercentual de jogadores acima do peso: %f",percentual);

return 0;
}
