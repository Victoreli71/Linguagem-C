#include <stdio.h>

int main() {
    float distancia, preco;
    printf("Digite a distância da viagem em Km: ");
    scanf("%f", &distancia);

    if (distancia <= 200) {
        preco = distancia * 0.50;
    } else {
        preco = distancia * 0.45;
    }

    printf("O preço da passagem é: R$%.2f\n", preco);
    return 0;
}
