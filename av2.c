//Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças defeituosas supera 10% da produção. Dados o total de peças produzidas e o total de peças defeituosas, informa se a máquina precisa de manutenção
#include <stdio.h>

int main(){
    int pecas_prod, pecas_def;
    
    printf("digite a quantidade de peças produzidas :\n");
    scanf("%d", &pecas_prod);
    
    {
        printf("digite o numero de peças defeituosas:\n");
        scanf("%d", &pecas_def);
    }
    
    if (pecas_def > 0.10 * pecas_prod)
    {
        printf("necessita de manutenção\n");
    }
    
    else
    {
        printf("não necessita de manutenção ainda \n");
    }
    
}
