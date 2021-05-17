#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i, j;
    int logica[15], prog[15], simultaneos = 0;

    printf("Digite as matrículas dos alunos que cursam Lógica:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d%*c", &logica[i]);
    }
    printf("\nDigite as matrículas dos alunos que cursam Linguagem de Programação:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d%*c", &prog[i]);
    }

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (prog[j] == logica[i])
            {
                simultaneos++;
            }
        }
    }

    printf("\n%d alunos cursam os 2 cursos.", simultaneos);
    system("pause");
    return 0;
}