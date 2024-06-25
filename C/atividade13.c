#include <stdio.h>

int recuperar_energia(){
    int energia = 100;
    for (int quantidade = 0; quantidade <= 100; quantidade += 10){
        printf("Energia esta restaurando %d%% da sua energia de %d%%, aguarde...\n", quantidade, energia);
    }
    return energia;
}
int main(){
    recuperar_energia();
    return 0;
}