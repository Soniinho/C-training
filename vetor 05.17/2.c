#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n[7], i;

    printf("Ser� pedido para digitar 7 n�meros. Aperte \"enter\" para continuar...");
    getchar();
    system("cls");

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d%*c", &n[i]);
    }

    printf("\nM�ltiplos de 2: \n");
    for (i = 0; i < 6; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("O %d� �: %d\n", i + 1, n[i]);
        }
    }

    printf("\nM�ltiplos de 3: \n");
    for (i = 0; i < 6; i++)
    {
        if (n[i] % 3 == 0)
        {
            printf("O %d� �: %d\n", i + 1, n[i]);
        }
    }

    printf("\nM�ltiplos de 2 e 3: \n");
    for (i = 0; i < 6; i++)
    {
        if (n[i] % 2 == 0 && n[i] % 3 == 0)
        {
            printf("O %d� �: %d\n", i + 1, n[i]);
        }
    }

    system("pause");
    return 0;
}