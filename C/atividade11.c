#include <stdio.h>

int compras(){
    int compra = 3;
    printf("Você comprou %d itens.", compra);
    return compra;
}

int main(){
    compras();
    return 0;
}