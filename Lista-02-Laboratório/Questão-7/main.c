#include <stdio.h>

void funcF(int m, int n) {
    int res;
    printf("f(m, n)\n");
    if(n == 1) {
        res = m + 1;
        printf("f(%d, %d) = %d + 1 --> %d", m, n, m, res);
    }
    else if(m == 1) {
        res = n + 1;
        printf("f(%d, %d) = %d + 1 --> %d", m, n, n, res);
    }
    else if(m > 1 && n > 1) {
        res = (n - 1) + (m - 1);
        printf("f(%d, %d) = f(%d, %d - 1) + f(%d - 1, %d) --> %d", m, n, m, n, m, n, res);
    }
    else {
        printf("Valores Invalidos!\n");
    }

}

int main(void) {
    int m, n;
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    funcF(m, n);

    return(0);
}