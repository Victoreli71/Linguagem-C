#include <stdio.h>
#include <ctype.h>

int main() {
    char letra; 

    printf("Digite a primeira letra do estado civil (S - Solteiro, C - Casado, D - Divorciado, V - Viúvo): ");
    scanf("%c", &letra);

    letra = toupper(letra);

    switch(letra) {
        case 'S':
            printf("Estado Civil: Solteiro(a)\n");
            break;
        case 'C':
            printf("Estado Civil: Casado(a)\n");
            break;
        case 'D':
            printf("Estado Civil: Divorciado(a)\n");
            break;
        case 'V':
            printf("Estado Civil: Viúvo(a)\n");
            break;
        default:
            printf("Letra inválida! Por favor, insira S, C, D ou V.\n");
            break;
    }

    return 0;
}

