#include <stdio.h>

int main() {
   int num, maior, menor;
   
   printf("Digite um número inteiro: ");
   scanf("%d", &num);
   maior = num;
   menor = num;
   
   while (num >= 0) {
      printf("Digite outro número inteiro (ou um número negativo para sair): ");
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
   
   printf("O maior número lido foi: %d\n", maior);
   printf("O menor número lido foi: %d\n", menor);
   
   return 0;
}

