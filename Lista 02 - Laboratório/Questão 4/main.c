#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
    int fator;
    struct vector * no;
}Vector;

Vector * insere(Vector * f, int j) {
    Vector * novo = (Vector*) malloc(sizeof(Vector));
    novo->fator = j;
    novo->no = f;

    return(novo);
}


void isPerfect(int parametro){
    int soma = 0;
    for(int i = 0; i <= parametro; i++){
        Vector * fatores = (Vector*) malloc(sizeof(Vector));
        for(int j = 0; j < i; j++){
            if(i % j == 0){
                insere(fatores, j);
                soma += j;
            }
        }
        if(soma == i){
            for(;fatores->no != NULL; fatores = fatores->no) {
                printf("%d +", fatores->fator);
                if(fatores->no == NULL) {
                    printf("%d = ", fatores->fator);
                    printf("%d\n\n", soma);
                }
            }
        }
        soma = 0;
        free(fatores);
    }
}



int main(){
    int numero = 50;
    isPerfect(numero);

    return 0;
}