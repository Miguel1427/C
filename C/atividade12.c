#include <stdio.h>

char habilidade(){
    char usarhabilidade = 's';
    while(usarhabilidade=='s'){
        printf("Você deseja usar Kamehameha?");
        scanf("%s", &usarhabilidade); 
        if (usarhabilidade == 's'){
            printf("Você usou o Kamehameha!\n");
        }
    }
    printf("Você derrotou a calvice!\n");
    return usarhabilidade;
}
int main(){
    habilidade();
    return 0;
}
