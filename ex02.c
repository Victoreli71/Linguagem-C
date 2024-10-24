// entrar com 2 numeros usuario,int positivo
// se os numeros sao iguais , mandar mensagem
// se o 1 valor for maior que o 2 valor , enviar mensagem
// se o 1 valor for menor que o 2 valor , enviar mensagme
#include <stdio.h>

int main()
{
    int numero1, numero2;
    printf("\ndigite o primeiro numero :\n");
    scanf("%d", &numero1);
    {
        printf("\ndigite o segundo numero:\n");
        scanf("%d", &numero2);
    }

    if (numero1 == numero2)
    {
        printf("os valores sao iguais");
    }

    else if (numero1 > numero2)
    {
        printf(" o primeiro valor e maior que o segundo valor digitado ");
    }

    else if (numero1 < numero2)
    {
        printf("o primeiro valor digitado e menor que o segundo valor digitado");
    }

    else
    {
        printf("nao se encaixa nos parametros");
    }
}
