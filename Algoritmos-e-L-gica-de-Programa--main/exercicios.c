#include <stdio.h> 

int main()
{  // comandos básicos
   float recebido,gasto; // float porque pode ser um salario ou gasto com centavos. 
   printf("Informe seu salário recebido: "); // sempre ; depois do printf, for e if não precisa, mas usa{}
   scanf("%f",&recebido);// o & irá guardar o valor informado na variável recebido, o %f é pq essa variável é float
   printf("Seu gasto: ");                
   scanf("%f",&gasto);// mesma coisa
   if (gasto>recebido){ // se gasto for maior que recebido, faça:
        printf("Orçamento estourado\n"); // esse \n é pra pular linha
   }
    else // se não, faça isso:
       printf("Gastos dentro do orçamento\n");
    return 0;
}


#include <stdio.h>
#include <math.h> // para operações matemáticas mais difíceis, como seno,raiz quadrada,etc. Aqui não foi necessário usar. 

int main()
{
    int a,resto,b=5; // posso declarar o valor da variavel logo no inicio aqui
    printf("Digite um número inteiro: ");
    scanf("%d",&a);
    resto= a % b; // resto da divisao de a por b
    if (resto==0) {
        printf("É divisível por 5");
    }
    else 
        printf("Não é divisível por 5");
    return 0;
    }


#include <stdio.h>

int main()
{
    int i;
    float a,b,c;
    float media;
    int resto= i % 2;
    printf("Coloque os valores i,a,b e c: ");
    scanf("%d%f%f%f",&i,&a,&b,&c);// cada %d ou %f corresponde a uma variável que está com o &=e-comercial, em sequencia
    if (i<0) {
        printf("i deve ser inteiro e positivo");
    }
    else {
        if (resto==0) {
        media=(a+b+c)/3; // média aritmética 
        printf("%.2f",media);
        }
        else{
        media=(((a*2)+(b*3)+(c*5))/10); // media ponderada, com pesos, dá pra usar pra tirar a media de um aluno
        printf("%.2f",media);
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int time1, time2; // esse programa é meio óbvio né, mas é para treinar, ver como o código funciona
    printf("Quantos gols cada time fez: ");
    scanf("%d%d",&time1,&time2); // aqui, o primeiro numero que ele digitar, vai pra o time1, e o segundo para o time2
    if (time1>time2){
        printf("O primeiro time ganhou");
    }
    else if (time1==time2){
        printf("Deu empate");
    }
    else printf("O segundo time ganhou");
    return 0;
}


#include <stdio.h>

int main()
{
    int alt,comp,larg,cmdi,capto, autonomia;
    printf("Informe a altura,comprimento e largura do reservatório em centímetros: \n");
    scanf("%d%d%d",&alt,&comp,&larg);
    printf("E o consumo médio diário em litros: \n");
    scanf("%d",&cmdi);
    capre=((alt*comp*larg)/1000);// defini o valor de capre depois de ter recebido os valores de alt,comp e larg
    printf("A capacidade do reservatório é: %d litros\n",capre);// o %d vai pegar o valor que está em capre e colocar no texto,printf.
    autonomia=capto/cmdi; 
    printf("a autonomia é de %d dias\n",autonomia);

    if(autonomia<=2){
        printf("Consumo elevado");
    }
    else {
        if(2<=autonomia<7){
        printf("Consumo moderado");
        }
      else printf("Consumo reduzido");

    }
    return 0;
}

