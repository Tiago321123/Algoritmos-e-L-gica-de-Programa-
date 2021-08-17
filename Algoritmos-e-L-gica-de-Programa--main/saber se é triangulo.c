#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c;
printf("Coloque um lado do triangulo: ");// %s é pra caractere, palavras e o %d pra decimal, numeros!!!!
scanf("%d",&a);                          // &&=e   e   ||=ou
printf("Coloque o outro lado triangulo: ");
scanf("%d",&b);
printf("Coloque o outro lado triangulo: ");
scanf("%d",&c);
if ((a<b+c) && (b<c+a) && (c<a+b)) {  // && significa "e", é pra juntar. Enquanto que || significa "ou".

if ((a!=b) && (b!=c) && (a!=c)) {
printf("E triangulo isosceles");  }

else{

if ((a==b)&&(a==c)){
printf("E triangulo equilatero");
}
else{
if ((a!=b) && (b==c) && (c!=a) || (b!=a) && (b!=c) && (c==a) || (b==a) && (b!=c) && (c!=a)){
printf("E triangulo escaleno"); } }
}
}
else{
printf("Nao e um triangulo");}

return 0;
}
