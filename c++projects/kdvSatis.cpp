#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>


using namespace std ; 

int main() {

    double maliyet , satis , kdvOrani , kdvHesap ; 
    bool tekrarHesapla = true ; 
    char evetHayir ;   

    
    cout << "kdv hesaplama programi " << endl ; 

    while (tekrarHesapla) // dongu boolen type .
    {

    sayiKontrol : 

    cout << "\nurun maliyeti giriniz : "  ; 
    cin >> maliyet ;
    cout <<  endl ;     
    
    // 0 dan kucuk sayilar icin tekrar sayi girmesini saglamak programin hatali sonuc vermesini önlemek icin
    if (maliyet <= 0 )
    {
        cout << "lutfen pozitif bir sayi giriniz ..." << endl ;
        goto sayiKontrol ; 
    }   
    
    

    cout << "kdv orani griniz : " ; 
    cin >> kdvOrani ; 
    kdvHesap = kdvOrani/ 100 ; 

    satis = maliyet  + (maliyet * kdvHesap) ; 
    cout << "\nkdvli satis = " << satis << endl ;

  // dongu icin soru yoneltmek  
    cout << "tekrar hesaplamak istiyor musun :  e veya h : "  ;
    cin >> evetHayir ; 
     
    if (evetHayir == 'h'|| evetHayir == 'H') 
    {
        cout << "programi kullandiginiz icin thanks.." << endl ;
        _sleep(1500) ;
        return false; 
    }
   
    }
    
    getch();
    return 0 ; 
}