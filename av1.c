//Dada a idade de um nadador, informe a categoria: infantil (até 10 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos)
#include <stdio.h>

int main(){
    int idade;
    
    printf("digite a sua idade :\n");
    scanf("%d", &idade);
    
    if (idade <= 10)
    {
        printf("categoria infantil");
    }
    
    else if ( idade <= 17)
    {
        printf("categoria juvenil");
    }
    
    else if (idade > 17)
    {
        printf("categoria senior ");
    }
    
    else
    {
        printf("não se encaixa nos parametros ");
    }
}

