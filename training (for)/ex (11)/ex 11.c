#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, numero, verificacao;

    printf("Digite um n�mero inteiro maior do que 1:  ");
    scanf("%d%*c", &numero);

    if (numero < 1)
    {
        printf("N�mero inv�lido, reinicie o programa.");
        return 0;
    }
    else
    {
        for (i = 2; i < numero; i++)
        {
            verificacao = numero % i;

            if (verificacao == 0)
            {
                printf("O n�mero digitado n�o � primo.");
                return 0;
            }
        }

        printf("O n�mero digitado � primo.");
    }

    return 0;
}