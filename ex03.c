#include <stdio.h>
#include <conio.h>

int main(void)
{
    int valor;
    printf("\033[1mentre com uma das opcoes de titulo de livros:\033[0m\n 1- infantil\n 2- ficcao\n 3- suspense\n 4- aventura\n");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("voce escolheu infantil, sendo que PETER PAN indica o titulo correspondente\n");
        break;

     case 2:
        printf("voce escolheu ficcao, sendo que CREPUSCULO indica o titulo correspondente\n");
        break;

    case 3:
    printf("voce escolheu suspense, sendo que MORTE NO INTERNATO indica o titulo correspondente\n");
    break;

    case 4:
    printf("voce escolheu aventura, sendo  que HARRY POTTER indica o titulo correspondente");
    break;
     
    default:
    printf("VALOR INVALIDO");
        break;
    }

    getch();
    return 0;
}
