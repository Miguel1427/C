#include <stdio.h>
#include <stdbool.h>

bool fogo(){
    bool churrasqueiraEletrica = true;
    while(churrasqueiraEletrica == true){
        printf("TC! Tá pegano fogo bicho!!");
        churrasqueiraEletrica = false;
    }
    
}
int main(){
    fogo();
    return 0;
}