/*Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127.O programa deve imprimir 10 caracteres por linha.*/

#include <stdio.h>
    int main()
{
    printf("Valor int \t Valor ASCII\n");
    printf("CtrlChar = Caractere de controle\n");
    for (int n = 0; n <= 127; n++)
    {
        if (n < 32)
        {
            printf("%i = 'CtrlChar'", n);
        }
        else
        {
            printf("%i = '%c'", n, n);
        }
        if (n % 10 == 0 && n != 0)
        {
            printf("\n");
        }
    }
    return 0;
}