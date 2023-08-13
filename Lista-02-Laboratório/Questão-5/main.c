/*Defina uma função recursiva que, dado os valores inteiros de x1 e x2 , determine y = x1 x2 .*/




#include <stdio.h>

float valorY(int x1, int x2){
    if(x2 == 0){
        return (x2);
    }
    else if(x2 < 0){
        return (valorY(x1, -x2));
    }
    else{
       return (x1 + valorY(x1, x2-1));
    }
}




int main(){
    int x1, x2;
    float y;
    printf("Insira o valor de x1:\n");
    scanf("%d", &x1);
    printf("Insira o valor de x2:\n");
    scanf("%d", &x2);
    y = valorY(x1,x2);
    printf("O valor de Y será: %f\n", y);

    return 0;
}