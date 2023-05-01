#include <stdio.h>

int main() {
    int i, num, soma = 0;
    float media;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10;

    printf("A media dos numeros digitados eh: %.2f", media);

    return 0;
}

