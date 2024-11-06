#include <stdio.h>

int main() {
    
    int num;
    
    printf("Digite uma das opções abaixo:\n 1-Saldo\n 2-Extrato\n 3-Saque\n 4-Sair\n");
    scanf("%d", &num);
    
    switch(num) {
        
        case 1:
            printf("Aqui esta o seu Saldo \n");
            break;
        case 2:
            printf("Aqui esta o seu Extrato \n");
            break;
        case 3:
           printf("Saque sendo realizado\n");
           break;
        case 4:
           printf("Saindo\n");
           break;
        default:
           printf("opção Invalida\n");
           break;
    }
    
    return 0;
}
