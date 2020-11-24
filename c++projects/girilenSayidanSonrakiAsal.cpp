#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std ;


int main() {

    int sayi , sayac= 0  ; 
    string asalSayi  ="evet"  ;
 

    cout << "\nbir sayi giriniz : " ; 
    cin >> sayi ;

    if (sayi <=1 )
    {
        cout << "\nlutfen 1 den buyuk sayilar giriniz... " << endl ; 
        _sleep(2000);
        return false ;
    }
    

       
    for ( int j  = 2 ; j < sayi; j++)
    {
        if ( sayi % j  == 0)
        {
            asalSayi = "hayir" ;
            break ; 
            }
            
    } 
       
    if (asalSayi == "evet")
        {

        ciftSayiDurumu :

        cout <<"\n" << sayi << " dan sonraki 10 asalsayi\n " << endl ;
            
        while (sayac < 10 )
        {

          asalSayi = "evet" ;

            for (int carpan = 2; carpan < sayi ; carpan++)
                {
                if (sayi % carpan == 0 )
                    {
                        asalSayi = "hayir"  ;
                        break ; 
                    }
                    
                }
                if (asalSayi == "evet")
                {
                    cout  << sayi << endl ;
                    sayac ++ ;  
                    
                }

                sayi++ ; 
                
            }
            
        }
        else if (asalSayi == "hayir")
        {
            goto ciftSayiDurumu  ; 
        }
        

    getch();
    return 0 ; 
}