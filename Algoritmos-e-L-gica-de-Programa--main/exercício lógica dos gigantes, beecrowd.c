#include <stdio.h>

int main()
{
    /*
    int i, n, x, p, m, g, quantMuralha = 0, muralha[5], a = 0;

    scanf("%d%*c %d%*c", &n, &x);
    char tamanho[20];
    muralha[0] = x;

    for (i = 0; i < n; i++)
    {
        scanf("%c%*c", &tamanho[n]);
    }
    scanf("%d%*c %d%*c %d%*c", &p, &m, &g);

    for (i = 0; i < n; i++)
    {

        if (tamanho[n] == 'P' || tamanho[n] == 'p')
        {
            if (p > x)
            {
                quantMuralha++;
                a++;
                muralha[a] = x - p;
            }
            else
            {
                muralha[0] = muralha[0] - p;
                if (muralha[0] > 0)
                {
                }
            }
        }
        if (tamanho[n] == 'M' || tamanho[n] == 'm')
        {
            if (m > x)
            {
                quantMuralha++;
                muralha[0] = x;
            }
            else
            {
                muralha[0] = muralha[0] - m;
            }
        }
        if (tamanho[n] == 'G' || tamanho[n] == 'g')
        {
            if (g > x)
            {
                quantMuralha++;
                muralha[0] = x;
            }
            else
            {
                muralha[0] = muralha[0] - g;
            }
        }
        if (muralha < 0)
        {
            muralha[0] = x - muralha[0];
            quantMuralha++;
        }
        if (muralha == 0)
        {
            muralha[0] = x;
            quantMuralha++;
        }
    }

    printf("\n%d", quantMuralha);
    */
    float conta = 0, F1, F2, num = 100;
    scanf("%f", &F1);
    scanf("%f", &F2);
    conta = num + F1;

    conta = conta + (F2 / num) * conta;
    conta = conta - num;

    printf("%f", conta);

    return 0;
}