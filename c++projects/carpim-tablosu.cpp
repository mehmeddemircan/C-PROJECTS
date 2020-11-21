#include <stdio.h>
#include <conio.h>

int main() {

    int carpan = 0 , carpilan = 0  , sonuc ; 

    for ( carpan = 0 ; carpan < 10 ; carpan++) {
        for (carpilan =0  ;carpilan < 10 ; carpilan++) {
            sonuc   = carpan * carpilan ; 
            printf("%d x %d = %d\n",carpan ,carpilan, sonuc) ; 
        } 
        printf("\n") ;
    }
    getch() ;
    return 0  ;

    
    
   
}