//Dados três números distintos, exiba-os em ordem crescente
#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Digite o 1 numero :\n");
    scanf("%d", &a);
    
    printf("Digite o 2 numero :\n");
    scanf("%d", &b);
    
    printf("Digite o 3 numero :\n");
    scanf("%d", &c);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    
    printf("Os numeros em ordem crescente são : %d, %d, %d\n", a, b, c);
    
    return 0;
    
    
}
