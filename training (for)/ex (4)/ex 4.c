#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, n, par, impar, zero;
    par = 0;
    impar = 0;
    zero = 0;

    printf("Ser� pedido para digitar 10 n�meros. Aperte \"enter\" para continuar.\n");
    getchar();

    for (i = 1; i <= 10; i = i + 1)
    {
        printf("%d� n�mero\n", i);
        printf("Digite um n�mero inteiro:");
        scanf("%d%*c", &n);
        printf("\n");

        //0 � neutro
        if (n == 0)
        {
            zero = zero + 1;
        }
        else if (n % 2 == 0)
        {
            par = par + 1;
        }
        else if (n % 2 != 0)
        {
            impar = impar + 1;
        }
    }

    printf("A quantidade de n�meros pares � de %d.\n", par);
    printf("A quantidade de n�meros �mpares � de %d.", impar);
    return 0;
}