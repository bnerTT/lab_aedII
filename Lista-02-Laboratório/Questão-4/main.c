#include <stdio.h>
#include <stdlib.h>

typedef struct fatores
{
    int fator;
    struct fatores *prox_fator;
} Fatores;

void isPerfect(int parametro)
{
    int soma_fatores = 0;
    for (int i = 0; i < parametro; i++)
    {
        Fatores *topo = NULL;
        for (int j = 0; j <= (i / 2); j++)
        {

            if (j == 0)
            {
                continue;
            }
            else if(i % j == 0){
                    soma_fatores += j;
                    Fatores *novo_no = (Fatores *)malloc(sizeof(Fatores *));
                    novo_no->fator = j;
                    novo_no->prox_fator = topo;
                    topo = novo_no;
                }
        }
        if ((soma_fatores - 1) == (i - 1))
        {
            printf("Os fatores do número %i são:\t", i);
            Fatores *current = topo;
            while (current != NULL)
            {
                printf("%i\t", current->fator);
                current = current->prox_fator;
            }
        }
        Fatores *current = topo;
        while (current != NULL)
        {
            struct Node *temp = current;
            current = current->prox_fator;
            free(temp);
        }
        soma_fatores = 0;
    }
}

int main()
{
    int numero = 50;
    isPerfect(numero);

    return 0;
}