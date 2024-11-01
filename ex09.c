#include <stdio.h>

int main() {
    float notas[3], media;
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite a %dª nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = (notas[0] + notas[1] + notas[2]) / 3;

    if (media >= 7) {
        printf("Aluno aprovado com média %.2f.\n", media);
    } else {
        printf("Aluno reprovado com média %.2f.\n", media);
    }

    return 0;
}
