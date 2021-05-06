#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments
#define total_bois 7

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    float codigo, peso, gordo, magro, soma_peso, med_peso;
    float codigo_gordo, codigo_magro;

    printf("Ser� pedido para digitar o c�digo e o peso de 7 bois.\n");
    printf("Aperte \"enter\" para continuar.\n");
    getchar();

    //leitura de refer�ncia
    printf("1� boi");
    printf("\nDigite o c�digo do boi:");
    scanf("%f%*c", &codigo);
    printf("Digite o peso do boi em kg:");
    scanf("%f%*c", &peso);
    printf("\n");

    gordo = peso;
    magro = peso;
    codigo_gordo = codigo;
    codigo_magro = codigo;
    soma_peso = peso;

    for (i = 2; i <= total_bois; i++)
    {
        printf("%d� boi", i);
        printf("\nDigite o c�digo do boi:");
        scanf("%f%*c", &codigo);
        printf("Digite o peso do boi em kg:");
        scanf("%f%*c", &peso);
        printf("\n");

        soma_peso = soma_peso + peso;

        if (peso > gordo)
        {
            gordo = peso;
            codigo_gordo = codigo;
        }
        else if (peso < magro)
        {
            magro = peso;
            codigo_magro = codigo;
        }
    }

    med_peso = soma_peso / total_bois;
    printf("\nO boi com o c�digo %.0f � o mais gordo.\n", codigo_gordo);
    printf("O boi com o c�digo %.0f � o mais magro.\n", codigo_magro);
    printf("O peso m�dio dos bois � de %.2f kg.\n", med_peso);

    return 0;
}