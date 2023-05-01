#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O n�mero deve ser n�o negativo.\n");
        return 1;
    }

    if (n == 0) {
        printf("O en�simo termo da sequ�ncia de Fibonacci �: %d\n", t1);
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (i == n) {
            printf("O en�simo termo da sequ�ncia de Fibonacci �: %d\n", t1);
            break;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

