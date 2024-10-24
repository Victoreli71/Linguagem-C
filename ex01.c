#include <stdio.h>

int main()
{
    int numero;
    printf("\ndigite um numero:\n");
    scanf("%d", &numero);

    if (numero % 3 == 0)
    {
        printf("\no numero e multiplo de 3\n", &numero);
    }

    else
    {
        printf("NAO e multiplo de 3 ");
    }
}
