/*Defina uma função chamada diasDeAula que calcula quantas aulas de laboratório temos dado
como entrada: Dia de hoje(dia,mês,ano) e Último dia do Semestre(dia,mês,ano).*/

#include <stdio.h>


typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;


int diasDeAula(Data inicio, Data final){
    int contAula = 0, primeiraSegunda;
    if(inicio.mes == 6){
        primeiraSegunda = inicio.dia;
        for(int n = primeiraSegunda; primeiraSegunda <= 30; n+7){
            if()
                primeiraSegunda += (n*7);
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