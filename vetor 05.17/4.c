#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int vet[15];

    printf("Ser� pedido para digitar 15 n�meros. Aperte \"enter\" para continuar...");
    getchar();
    system("cls");

    i = 0;
    do
    {
        printf("Digite um n�mero [%d]: ", i+1);
        scanf("%d%*c", &vet[i]);
        i++;
    } while (i <= 14);

    printf("\nS�o iguais a 30 os n� de posi��es: ");

    i = 0;
    while(i < 15){
        if(vet[i] == 30){
            printf("%d, ", i+1);
        }
        i++;
    }

    printf("\n");
    system("pause");
    return 0;
}