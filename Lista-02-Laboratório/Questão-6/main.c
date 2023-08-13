#include <stdio.h>

int inverterNumero(int valor) {
    int inverso = 0;
    
    do {
        int digito = valor % 10;
        inverso = inverso * 10 + digito;
        valor /= 10;
    }
    while(valor > 0);
    
    return inverso;
}

int recursivo(int valor) {
    if(valor == 0) {
        return(0);
    }

    return()
}

int main(void) {
    int valor, inverso;
    printf("Digite um valor inteiro: ");
    scanf("%d",  &valor);
    inverso = inverterNumero(valor);
    printf("O valor invertido: %d\n", inverso);

    return 0;
}