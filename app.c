#include <stdio.h>

int main(void){
    int contador;
    printf("\ndigite um numero para a contagem regressiva\n");
    scanf("%d", &contador);
      for (contador; contador >= 1; contador--);
     {
        printf("%d", contador);
        
     }
     return (0);
}
