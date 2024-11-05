#include <stdio.h>

int main() {
    int placa;

    printf("digite a placa do seu carro : exemplo (ABC-1234)\n");
    scanf("%d", &placa);

    int ultimo_digito = placa % 10;

    switch(ultimo_digito) {
        case 1:
        case 2:
            printf("Rodízio na Segunda-feira.\n");
            break;
        case 3:
        case 4:
            printf("Rodízio na Terça-feira.\n");
            break;
        case 5:
        case 6:
            printf("Rodízio na Quarta-feira.\n");
            break;
        case 7:
        case 8:
            printf("Rodízio na Quinta-feira.\n");
            break;
        case 9:
        case 0:
            printf("Rodízio na Sexta-feira.\n");
            break;
        default:
            printf("Número de placa inválido.\n");
            break;
    }

    return 0;
}  
