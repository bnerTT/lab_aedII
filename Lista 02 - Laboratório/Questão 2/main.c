/*Defina uma função chamada diasDeAula que calcula quantas aulas de laboratório temos dado
como entrada: Dia de hoje(dia,mês,ano) e Último dia do Semestre(dia,mês,ano).*/

#include <stdio.h>


typedef struct data{
    int dia;
    int mes;
    int ano;
    int diaMax;
} Data;

int diasDeAula(Data inicio, Data final)
{
    int contAula = 0, primeiraSegunda, aux;
    for (inicio.mes = 6; inicio.mes <= final.mes;)
    {
        if(inicio.mes == 6) {
            inicio.diaMax = 30;
        }
        if(inicio.mes == 7) {
            inicio.diaMax = 31;
        }
        if(inicio.mes == 9) {
            inicio.diaMax = 30;
        }
        if(inicio.mes == 10) {
            inicio.diaMax = 31;
        }
        for (int n = inicio.dia; n <= inicio.diaMax; n + 7)
        {
            if (n >= inicio.diaMax)
            {
                aux = n - inicio.diaMax;
                inicio.mes++;
                primeiraSegunda = aux;
            }
            primeiraSegunda = n;
            contAula++;
        }
    }
}

int main(){
    int dias_de_aula;
    Data inicio = {26,06,2023};
    Data final = {23,10,2023};
    printf("Dia: %i, Mês: %i, Ano: %i", inicio.dia, inicio.mes, inicio.ano);

    return 0;
}