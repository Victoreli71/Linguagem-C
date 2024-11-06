//Dados o sexo e a altura de uma pessoa, determine seu peso ideal, de acordo com as
//fórmulas a seguir:
// Para homens o peso ideal é 72.7 * altura - 58
// Para mulheres o peso ideal é 62.1 * altura – 44.7
#include <stdio.h>

int main() {
    char sexo;
    float altura;
    float peso_ideal;
    
    printf("Digite seu sexo ( F- feminino , M- masculino ):");
    scanf("%c", &sexo);
    {
        printf("Digite sua altura (em metros ):");
        scanf("%f", &altura);
    }
    
 
 if(sexo == 'M' || sexo == 'm')
    {
      peso_ideal = 72.7 * altura - 58;
      printf("seu peso ideal para homem :%.2f kg\n", peso_ideal);
    }
    
 else if(sexo == 'F' || sexo == 'f')
    {
      peso_ideal = 62.1 * altura - 44.7;
      printf("seu peso ideal para mulheres : %.2f kg\n", peso_ideal);
    }
    
 else
        {
        printf("não se encaixa nos parametros ");
        }
    
    return 0;
   
}
