#include <stdio.h>

int main() {
   int num, maior, menor;
   
   printf("Digite um n�mero inteiro: ");
   scanf("%d", &num);
   maior = num;
   menor = num;
   
   while (num >= 0) {
      printf("Digite outro n�mero inteiro (ou um n�mero negativo para sair): ");
      scanf("%d", &num);
      if (num >= 0) {
         if (num > maior) {
            maior = num;
         }
         if (num < menor) {
            menor = num;
         }
      }
   }
   
   printf("O maior n�mero lido foi: %d\n", maior);
   printf("O menor n�mero lido foi: %d\n", menor);
   
   return 0;
}

