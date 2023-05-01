#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor_total = 0;
    char continuar = 's';

    printf("Bem-vindo à nossa feira de frutas!\n");
    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - ABACAXI (R$ 5,00/unidade)\n");
        printf("2 - MAÇA (R$ 1,00/unidade)\n");
        printf("3 - PERA (R$ 4,00/unidade)\n");
        printf("4 - Encerrar compra\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 5.0;
                break;
            case 2:
                printf("Informe a quantidade de maçãs: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 1.0;
                break;
            case 3:
                printf("Informe a quantidade de peras: ");
                scanf("%d", &quantidade);
                valor_total += quantidade * 4.0;
                break;
            case 4:
                continuar = 'n';
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (continuar == 's');

    printf("\nValor total da compra: R$ %.2f\n", valor_total);

    return 0;
}

