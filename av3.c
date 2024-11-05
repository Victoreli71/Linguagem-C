//Dado um número informe se ele é positivo, negativo ou nulo
#include <stdio.h>

int main(){
    int num;
    
    printf("digite um numero :\n");
    scanf("%d", &num);
    
    if(num == 0 )
    {
        printf("numero nulo");
    }
    
    else if(num > 0)
    {
        printf("numero positivo");
    }
    
    else if(num < 0)
    {
        printf("numero negativo");
    }
    
    else
    {
        printf("não se encaixa nos parametros");
    }
    return 0;
}
