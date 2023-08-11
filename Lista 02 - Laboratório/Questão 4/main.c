#include <stdio.h>


void isPerfect(int parametro){
    int soma = 0;
    int numeros[100];
    for(int i = 0; i <= parametro; i++){
        for(int j = 0; j < i; j++){
            if(i % j == 0){
                soma += j;
                
            }
        }
        if(soma == i){
            printf("%i\t", soma);
        }
        soma = 0;
    }
}



int main(){
    int numero = 14;
    isPerfect(numero);

    return 0;
}