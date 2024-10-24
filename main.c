#include <stdio.h>

void adicionar(int x, int y){
    y += x;
}

int main(){
    int a = 5, b = 2;
    printf("valor inicial de b: %i\n", b);
    adicionar(a, b);
    printf("valor final de b: %i", b);
    return 0;
}
