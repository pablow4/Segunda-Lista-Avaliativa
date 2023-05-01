#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O número deve ser não negativo.\n");
        return 1;
    }

    if (n == 0) {
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", t1);
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (i == n) {
            printf("O enésimo termo da sequência de Fibonacci é: %d\n", t1);
            break;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

