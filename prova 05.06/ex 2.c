#include <stdio.h>  //biblioteca padr�o
#include <stdlib.h> //biblioteca padr�o tamb�m
#include <locale.h> //biblioteca para trocar linguagem

int main() //fun��o principal
{
    setlocale(LC_ALL, "portuguese"); //comando para por o programa em portugu�s(ver acentos e usar v�rgula nos n�meros)

    int i, apoio, linha, numero_1; //declara��o das vari�veis

    numero_1 = 1; //definir o primeiro n�mero da primeira linha como sendo 1

    printf("Digite quantas linhas voc� quer ver do tri�ngulo de Floyd: "); //escrever na tela para o usu�rio digitar quantas linhas ele quer ver do tri�ngulo de Floyd
    scanf("%d%*c", &linha);                                                //ler a quantidade de linhas digitadas pelo usu�rio

    for (i = 1; i <= linha; i++) //loop - fazer o loop rodar a quantidade de vezes de linhas (1 vez = 1 linha, 2 vezes = 2 linhas, etc.)
    {
        for (apoio = 1; apoio <= i; apoio++) //loop 2 - ver qual linha est� e digitar quantos n�meros t�m em cada linha, que por consequ�ncia s�o iguais ao n�mero da linha (linha 3 t�m 3 n�meros, linha 4 t�m 4 n�meros, etc)
        {
            printf(" %d\t  ", numero_1); // digitar o n�mero e dar espa�o
            numero_1++;                  //adicionar 1 ao n�mero anterior escrito na tela
        }
        printf("\n"); //pular para a pr�xima linha do tri�ngulo
    }

    system("pause"); //esperar o usu�rio apertar enter
    return 0;        //retornar 0 - fechar o programa
}