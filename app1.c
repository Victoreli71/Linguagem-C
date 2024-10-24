#include <stdio.h>

int age(void)
{
    int idade;
    printf("\ndigite sua idade :\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("\nja poode tirar a cnh\n");
    }
    else
    {
        printf(" ainda nao pode tirar a cnh");
    }

    return 0;
}

int main(void)
{
    age();
    return 0;
}
