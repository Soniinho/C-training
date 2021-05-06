#include <stdio.h>  //f6 para compilar
#include <stdlib.h> //encoding windows 1252(Western)
#include <locale.h> //fold all comments

int main()
{
    setlocale(LC_ALL, "portuguese");
    int anos, ano_j, ano_m;
    int altura1, altura2;
    altura1 = 121;
    altura2 = 158;

    printf("Sabendo que Jo�o est� atualmente com 10 anos de idade e com altura igual a 121cm,");
    printf("\ne que Maria est� com 13 anos e com altura igual a 158cm. Supondo que Jo�o crescer�");
    printf("\n2cm por ano e Maria 1cm por ano, responda quando Jo�o passar� a altura de Maria.");

    for (anos = 1; altura1 <= altura2; anos = anos + 1)
    {
        altura1 = altura1 + 2;
        altura2 = altura2 + 1;
    }

    ano_j = anos + 10;
    ano_m = anos + 13;

    //printf("\naltura1 %d, altura2 %d.\n",altura1, altura2);
    printf("\n\n    Resposta:\n");
    printf("Ser�o necess�rios %d anos para Jo�o ter uma altura maior que Maria.\n", anos);
    printf("Quando Jo�o passar a altura de Maria, Jo�o ter� %d anos e Maria %d anos.\n", ano_j, ano_m);

    return 0;
}