/*Um triângulo retângulo pode ter lados inteiros. O conjunto do comprimento de três valores
inteiros para os lados de um triângulo retângulo é chamado de triplo pitagórico. Esses três lados
devem satisfazer a relação de que a soma dos quadrados de dois dos lados é igual ao quadrado da
hipotenusa. Encontre todos os triplos pitagóricos para cateto1, cateto2 e a hipotenusa, todos com
até o valor de, indicado como parâmetro.*/

#include <stdio.h>
#include <math.h>

void triploPitagorico(int parametro){
    for(int i = 1; i <= parametro; i++){
        for(int j = 1; j <= i;j++){
            for(int k = 1; k <= j; k++){
                if((i*i) == ((j*j) + (k*k))){
                    printf("Triângulo pitágórico com: Hipotenusa: %i, Cateto1: %i, Cateto2: %i\n", i, j,k);
                }
            }
        }
    }
}






int main(){
    triploPitagorico(50);

    return 0;
}