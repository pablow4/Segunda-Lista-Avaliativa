#include <stdio.h>

int main() {
    int num, i;
    
    printf("Digite um n�mero positivo: ");
    scanf("%d", &num);
    
    printf("Os divisores do n�mero %d s�o: ", num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

