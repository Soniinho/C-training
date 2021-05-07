#include <stdio.h>  //biblioteca padr�o
#include <stdlib.h> //biblioteca padr�o tamb�m
#include <locale.h> //biblioteca para trocar linguagem

int main() //fun��o principal
{
    setlocale(LC_ALL, "portuguese"); //comando para por o programa em portugu�s(ver acentos e usar v�rgula nos n�meros)
    int i, numero, soma_divisores; //declara��o de vari�veis

    soma_divisores = 0; //por ser uma soma deve ser definida como 0 no in�cio do c�digo

    printf("Digite um n�mero inteiro:"); //escreve na tela para o usu�rio digitar um n�mero inteiro
    scanf("%d%*c", &numero); //l� o n�mero digitado pelo usu�rio

    for (i = 1; i < numero; i++) //loop - repeti��o que conta de 1 at� o valor do n�mero digitado
    {
        if (numero % i == 0) //condi��o - v� se o n�mero digitado � divis�vel por cada i (desde 1 at� um n�mero antes do n�mero digitado pelo usu�rio)
        {
            soma_divisores += i; //soma o divisor ao valor j� calcul�do de soma dos 
        }
    }

    printf("A soma dos divisores do n�mero digitado � %d.", soma_divisores); //escreve a soma dos divisores na tela

    system("pause"); //esperar o usu�rio apertar enter
    return 0;        //retornar 0 - fechar o programa
}