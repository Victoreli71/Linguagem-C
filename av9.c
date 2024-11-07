//Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas custa
//R$ 0,20. Dado o total de cópias, informe o total a ser pago
#include <stdio.h>

int main(){
    
    int copias;
    
    printf("Digite o total de copias:\n");
    scanf("%d", &copias);
    
    if( copias <= 100)
    {
        printf("A cópia custa R$ 0,25");
    }
    
    else if( copias > 100)
    {
        printf("A cópia custa R$ 0,20");
    }
    
    else
    {
        printf("Não se encaixa nos parametros ");
    }
}
