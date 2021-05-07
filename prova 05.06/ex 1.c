#include <stdio.h>  //biblioteca padr�o
#include <stdlib.h> //biblioteca padr�o tamb�m
#include <locale.h> //biblioteca para trocar linguagem

int main() //fun��o principal
{
    setlocale(LC_ALL, "portuguese"); //comando para por o programa em portugu�s(ver acentos e usar v�rgula nos n�meros)

    int numero;                                                         //declara��o de vari�vel
    int soma_num, qtd_numeros, maior_num, menor_num, soma_par, qtd_par; //declara��o de vari�vel
    float media, media_pares;                                           //declara��o de vari�vel
    char opc;                                                           //declara��o de vari�vel

    soma_num = 0;    //definir soma dos n�meros como sendo 0
    qtd_numeros = 0; //definir quantidade dos n�meros como sendo 0
    soma_par = 0;    //definir soma dos n�meros pares como sendo 0
    qtd_par = 0;     //definir quantidade dos n�meros pares como sendo 0

    //primeira leitura
    printf("Digite um n�mero inteiro: "); //escrever na tela para digitar um n�mero inteiro
    scanf("%d%*c", &numero);              //ler o n�mero inteiro digitado

    soma_num += numero; //adicionar o valor do n�mero � soma dos n�meros
    qtd_numeros += 1;   //adicionar 1 ao valor da quantidade de n�meros

    maior_num = numero; //fazer o valor digitado ser uma refer�ncia para maior n�mero
    menor_num = numero; //fazer o valor digitado ser uma refer�ncia para menor n�mero

    if (numero % 2 == 0) //condi��o - ver se o n�mero digitado � par
    {
        qtd_par += 1;       //adicionar 1 � quantidade de n�meros pares
        soma_par += numero; //adicionar o valor do n�mero � soma dos n�meros pares
    }

    printf("Deseja digitar mais n�meros? \"s\" para sim ou \"n\" para n�o\n"); //escrever na tela se o usu�rio deseja digitar mais n�meros
    scanf("%c%*c", &opc);                                                      //ler a letra digitada pelo usu�rio (s para sim ou n para n)

    if (opc != 'n' && opc != 's') //condi��o - ver se o usu�rio digitou uma op��o v�lida
    {
        for (; opc != 'n' && opc != 's';) //loop - checar se o usu�rio digitou uma op��o v�lida
        {
            printf("Op��o inv�lida, digite \"s\" para sim ou \"n\" para n�o\n"); //escrever na tela que o usu�rio digitou uma op��o inv�lida e pedir para ele digitar novamente uma op��o
            scanf("%c%*c", &opc);                                                //ler a letra digitada pelo usu�rio (s para sim ou n para n)
        }
    }

    for (; opc == 's';) //loop - digita��o da quantidade de n�meros que o usu�rio quiser
    {
        printf("Digite um n�mero inteiro: "); //escrever na tela para digitar um n�mero inteiro
        scanf("%d%*c", &numero);              //ler o n�mero inteiro digitado

        soma_num += numero; //adicionar o valor do n�mero � soma dos n�meros
        qtd_numeros += 1;   //adicionar 1 ao valor da quantidade de n�meros

        if (numero > maior_num) //condi��o - se o n�mero digitado � maior que o maior n�mero
        {
            maior_num = numero; //substituir o maior n�mero pelo valor do n�mero digitado pelo usu�rio
        }
        else if (numero < menor_num) //condi��o - se o n�mero digitado � menor que o menor n�mero
        {
            menor_num = numero; //substituir o menor n�mero pelo valor do n�mero digitado pelo usu�rio
        }

        if (numero % 2 == 0) //condi��o - ver se o n�mero digitado � par
        {
            qtd_par += 1;       //adicionar 1 � quantidade de n�meros pares
            soma_par += numero; //adicionar o valor do n�mero � soma dos n�meros pares
        }

        printf("Deseja digitar mais n�meros? \"s\" para sim ou \"n\" para n�o\n"); //escrever na tela se o usu�rio deseja digitar mais n�meros
        scanf("%c%*c", &opc);                                                      //ler a letra digitada pelo usu�rio (s para sim ou n para n)

        if (opc != 'n' && opc != 's') //condi��o - ver se o usu�rio digitou uma op��o v�lida
        {
            for (; opc != 'n' && opc != 's';) //loop - checar se o usu�rio digitou uma op��o v�lida
            {
                printf("Op��o inv�lida, digite \"s\" para sim ou \"n\" para n�o\n"); //escrever na tela que o usu�rio digitou uma op��o inv�lida e pedir para ele digitar novamente uma op��o
                scanf("%c%*c", &opc);                                                //ler a letra digitada pelo usu�rio (s para sim ou n para n)
            }
        }
    }

    system("cls"); //limpar a tela

    media = soma_num / qtd_numeros;   //calcular a m�dia dos n�meros
    media_pares = soma_par / qtd_par; //calcular a m�dia dos n�meros pares

    printf("\nA soma dos n�meros digitados � %d.", soma_num);    //escrever na tela a soma dos n�meros digitados
    printf("\nForam digitados %d n�meros.", qtd_numeros);        //escrever na tela quantos n�meros foram digitados
    printf("\nA m�dia dos n�meros digitados � de %.2f.", media); //escrever na tela a m�dia dos n�meros digitados
    printf("\nO maior n�mero digitado � %d.", maior_num);        //escrever na tela o maior n�mero digitado
    printf("\nO menor n�mero digitado � %d.", menor_num);        //escrever na tela o menor n�mero digitado
    printf("\nA m�dia dos n�meros pares � %.2f.", media_pares);  //escrever na tela a m�dia dos n�meros pares

    system("pause"); //esperar o usu�rio apertar enter
    return 0;        //retornar 0 - fechar o programa
}