#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std ;

int main () {

    int sayi , tahminAdet = 0 , rastgeleSayi ; 

    srand (time(NULL));

    rastgeleSayi =  rand() % 100  ;  // 0 - 99 arasinda  ; 
    rastgeleSayi = rand() % 100 + 1 ; // 1 ile 100 arasinda ; yani + 1 i heriki tarafa da ekler ...

    
    while (sayi != rastgeleSayi)
    {
        printf("\nbir sayi giriniz : ") ; 
        scanf("%d",&sayi) ;
        
        tahminAdet ++ ;  
        if (sayi > rastgeleSayi)
        {
            printf("asagi ...\n" ); 

        }
        else if (sayi < rastgeleSayi)
        {
            printf("yukari\n") ;

        }
        else
        {
            printf("bildiniz %d . hakkinizda \n",tahminAdet);
        }
        
         
    }
    


    getch();
    return 0 ; 
}