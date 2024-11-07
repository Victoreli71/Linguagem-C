//Num banco, as contas são identificadas por um número de conta com dígito
//verificador. Esse dígito verificador é calculado do seguinte modo: primeiro somamos
//todos os dígitos do número de conta, depois dividimos a soma por 10 e tomamos o
//resto. Por exemplo, se o número da conta for 5713, temos a soma 3 + 1 + 7 + 5 = 16;
//dividindo 16 por 10, temos o resto 6, que é seu dígito verificador. Dado um número
//de conta, informe o dígito verificador correspondente
#include <stdio.h>

int main() {
    int digito_ver, soma = 0, numConta;
    
    
    printf("Digite o digito verificador :");
    scanf("%d", &numConta);
    
    while(numConta > 0){
        
        soma += numConta % 10;
        numConta /= 10; 
    }
    
    digito_ver = soma % 10;
    
    printf("O digito verificador da conta é : %d\n", digito_ver);
    
    return 0;
}
