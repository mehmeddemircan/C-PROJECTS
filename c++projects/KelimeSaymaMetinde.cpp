#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <algorithm>



//bir cumle de kac kelime oldugunu bulan program 

int main()
{
    bool  tekrarGir = true ; 
   
    char metin[256];
    int sayac = 0 ; 
    char evetHayir ; 
    
    while (tekrarGir)
    { 

    printf("\nbir metin giriniz : ") ;
    scanf("%c",metin) ;
    gets(metin);


    for (int i = 0; metin[i] != '\0';i++)
    {
        if (metin[i] == ' ')
        {
            sayac++ ; 
        }
            
    }

    printf("\nkelime sayisi : %d" , sayac+ 1 ) ;

    printf("\n\ntekrar girmek istiyor musunuz ?    E veya H:  "); 
    scanf("%c",&evetHayir); 
    if (evetHayir == 'h' || evetHayir == 'H')
    {
        printf("\nprogrami kullandiginiz icin tesekkur ederiz ! ") ;
        _sleep(3000);
        return false ; 
    }
    else 
    {
        sayac = 0 ;  // yeniden baslarken sayaci sifirlamaliyiz yoksa yanlis deger aliriz 
    }
    
    

    }

    getch(); 
    return 0;
}
