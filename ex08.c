#include <stdio.h>

int main() {
    int opcao, a, b;

    do {
        printf("\nMenu de opções:\n1 - Somar\n2 - Subtrair\n3 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%d", &a);
                printf("Digite o segundo número: ");
                scanf("%d", &b);
                printf("A soma é: %d\n", a + b);
                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%d", &a);
                printf("Digite o segundo número: ");
                scanf("%d", &b);
                printf("A subtração é: %d\n", a - b);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

    } while (opcao != 3);

    return 0;
}
