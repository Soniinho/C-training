#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j, cod_igual;
    int cod_prod[10], total_estoque[10];
    int cod_cliente;
    int cod_prod_compra, existe;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o código do produto[%d]: ", i + 1);
        scanf("%d%*c", &cod_prod[i]);

        for (j = 0, cod_igual = 0; j < i; j++)
        {
            if (cod_prod[j] == cod_prod[i])
            {
                i--;
                printf("Código já usado, digite o produto[%d] novamente.\n", i + 2);
                cod_igual = 1;
                break;
            }
        }
        
        if(cod_igual == 0){
        printf("Digite o total desse produto no estoque[%d]: ", i + 1);
        scanf("%d%*c", &total_estoque[i]);
        }
    }

    system("cls");

    do
    {
        printf("Digite o código do produto que deseja comprar: ");
        scanf("%d%*c", &cod_prod_compra);
        existe = 0;

        for (i = 0; i < 10; i++)
        {
            if (cod_prod_compra == cod_prod[i])
            {
                existe = 1;
                break;
            }
        }

        if (existe == 0)
        {
            printf("Código inexistente");
        }
        else
        {
            if (total_estoque[i] != 0)
            {
                printf("Pedido atendido. Obrigado e volte sempre.");
                total_estoque[i] -= 1;
            }
            else
            {
                printf("Não temos estoque suficiente dessa mercadoria.");
            }
        }

        printf("\n\nSe deseja finalizar as compras, digite 0.");
        printf("\nCaso contrário, digite qualquer número para continuar: ");
        scanf("%d%*c", &cod_cliente);
        printf("\n");
    } while (cod_cliente != 0);

    system("cls");

    for (i = 0; i < 10; i++)
    {
        printf("\nProduto[i]", i + 1);
        printf("\nCódigo: %d", cod_prod[i]);
        printf("\nTotal no estoque: %d\n", total_estoque[i]);
    }

    system("pause");
    return 0;
}