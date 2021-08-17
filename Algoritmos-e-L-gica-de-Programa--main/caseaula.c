    #include <stdio.h>

    int main()
    {
    int opcao, op;
    printf("\nMenu Principal"); // um menu bunitinho
    printf("\n1 - Calcular area");
    printf("\n2 - Calcular perimetro");
    printf("\n3 - Calcular volume");
    printf("\nOpcao:");
    scanf("%d%*c",&opcao);//esse %*c retira o enter,buff do teclado, limpa ele.

    switch(opcao){ 
    case 1: // caso o valor de opcao seja 1, fazer:
    printf("Calculando a area...");
    printf("\nMenu Principal");
    printf("\n1 - Calcular area do triangulo"); // daí vc coloca as fórmulas de cada um, tenta aí
    printf("\n2 - Calcular area do quadrado ");
    printf("\n3 - Calcular area do circulo");
    printf("\nOpcao:");
    scanf("%d%*c",&op); 
    switch(op){ // uma opcao dentro de outra opcao
    case 1: // caso o valor de op seja 1, fazer:
    printf("Calculando....xxx...");
    break; // serve para quebrar,parar a operação
    case 2:
    printf("Calculando oxyyyyy..");
    break;
    case 3:
    printf("Calculando oxyyyyy..");
    break;
    default:
    printf("opçao invalida");
    }
    break;
    case 2:
    printf("Calculando o perimetro...");
    break;
    case 3:
    printf("Calculando o volume...");
    break;
    default: // caso não seja nehum dos cases acima, fazer isso:
    printf("opçao invalida");
    }


    return 0;
    }

    #include <stdio.h>
    #include <ctype.h>


    int main()
    {
    char sexo; 
    printf("\nF - Feminino");
    printf("\nM - Masculino");
    printf("\nN - não quero responder");
    printf("\nEscolha uma opcao:");
    scanf("%c%*c",&sexo);
    //sexo = toupper(sexo);//mudou para maiuscula
    //sexo = tolower(sexo);//mudou para minuscula

    switch(sexo){
    case 'f':
    printf("Sexo feminino");
    break;
    case 'M':
    printf("Sexo masculino");
    break;
    case 'N':
    printf("usuario nao quer responder");
    break;
    default:
    printf("opcao invalida");
    }

    return 0;

    #include <stdio.h>

    int main()
    {
    float a,b,c,d, media;
    printf("\n\t\t\tCalculo de Medias\n\n");
    printf("\n\tDigite a nota da prova 1:");
    scanf("%f%*c",&a);
    printf("\n\tDigite a nota da prova 2:");
    scanf("%f%*c",&b);
    printf("\n\tDigite a nota da prova 3:");
    scanf("%f%*c",&c);
    printf("\n\tDigite a nota da prova 4:");
    scanf("%f%*c",&d);
    media = (a+b+c+d)/4;
    if (media>=7){
    printf("Aprovado com media= %.2f",media);
    }
    else{
    printf("Reprovado com media= %.2f",media);
    }
    return 0;
    }

    #include <stdio.h>


int main()
{
float n1,n2,op;
printf("\n\t\tPrograma para comparacao de numeros inteiros");
printf("\n\t\tAutor: Aluno xxx");
printf("\n\t\tDigite um numero:");
scanf("%f%*c",&n1);
printf("\n\t\tDigite outro numero:");
scanf("%f%*c",&n2);
printf("\n\t\t1 - Media entre os numeros");
printf("\n\t\t2 - Diferenca do maior pelo menor numero");
printf("\n\t\t3 - Produto entre os numeros");
printf("\n\t\t4 - Divisão do primeiro pelo segundo numeros");
printf("\n\t\tOpcao:");
scanf("%f%*c",&op);

 system("cls"); // limpar a tela do programa
if(op==1){
printf("\nMedia dos numeros:%0.1f",(n1+n2)/2);//pode ter conta dentro assim
}
else if(op==2){
if (n2>n1){
printf("\nDiferenca do maior pelo menor numero: %.1f",(n2-n1));
}
if (n1>n2){
printf("\nDiferenca do maior pelo menor numero: %.1f",(n1-n2));
}
}
else if(op==3){  // os elses só funcionam se tiver um if atrás dele, se tiver mais de um if, o else vai pegar o último if como ponto de partida
printf("\nProduto entre os numeros: %.3f",(n1*n2));
}
else if(op==4){
if (n2==0){
printf("\nDivisão impossivel");
}
else{
printf("\nDivisão do primeiro pelo segundo numeros: %.1f",(n1/n2));
}
}
else{
printf("ERRO. Opcao invalida!");
}

 return 0;
}