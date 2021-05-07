#include <stdio.h>  //biblioteca padr�o
#include <stdlib.h> //biblioteca padr�o tamb�m
#include <locale.h> //biblioteca para trocar linguagem

int main() //fun��o principal
{
    setlocale(LC_ALL, "portuguese"); //comando para por o programa em portugu�s(ver acentos e usar v�rgula nos n�meros)

    int numero, i, i_fatorial; //declara��o de vari�vel
    float fatorial, E;         //declara��o de vari�vel

    E = 0; // n�mero E � uma soma, deve ser declarado com 0 no in�cio do c�digo

    printf("Digite um n�mero inteiro e positivo: "); //escreve na tela para o usu�rio digitar um n�mero inteiro e positivo
    scanf("%d%*c", &numero);                         //l� o n�mero digitado pelo usu�rio

    for (i = 1; i <= numero; i++) //loop - roda a repeti��o de 1 at� o valor do n�mero digitado
    {
        i_fatorial = i; //define i_fatorial = i para n�o alterar o i, assim n�o quebrando a 1� repeti��o

        //fatorial tem formula [n . (n � 1).(n � 2)...] ent�o...
        for (fatorial = 1; i_fatorial > 1; i_fatorial -= 1) //repeti��o que acha o fatorial, sendo i_fatorial o n da f�rmula mostrada acima
        {
            fatorial *= i_fatorial; //multiplica o n ou termo com o n da f�rmula do fatorial com o valor j� calculado do fatorial e o substitui
        }

        E += 1 / fatorial; //adiciona o fatorial no denominador da conta e adiciona ao valor do E j� calculado
    }

    printf("O valor de E � %f.", E); //escreve o valor de E na tela

    system("pause"); //esperar o usu�rio apertar enter
    return 0;        //retornar 0 - fechar o programa
}