#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, qtd_neg = 0;
    float n[10], soma_pos = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número[%d]: ", i + 1);
        scanf("%f%*c", &n[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (n[i] < 0)
        {
            qtd_neg++;
        }
        else
        {
            soma_pos += n[i];
        }
    }

    printf("\nA quantidade de n° negativos é de %d.", qtd_neg);
    printf("\nA soma de n° positivos é de %.3f.", soma_pos);

    system("pause");
    return 0;
}