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

#include <stdio.h>

int inverterRecursivo(int numero) {
    if (numero == 0) {
        return 0;
    }

    return numero % 10 + 10 * inverterRecursivo(numero / 10);
}

int main() {
    int numero, inverso;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    inverso = inverterRecursivo(numero);

    printf("O numero invertido: %d\n", inverso);

    return 0;
}




int main(void) {
    int valor, inverso;
    printf("Digite um valor inteiro: ");
    scanf("%d",  &valor);
    inverso = inverterNumero(valor);
    printf("O valor invertido: %d\n", inverso);

    return 0;
}
