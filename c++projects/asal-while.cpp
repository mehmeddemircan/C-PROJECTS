#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <cmath>

using namespace std ; 

int main () {

    int sayi  , asalSayiAdet = 0  ;
    double asalSayiOrt = 0 , asalSayiToplam = 0  ;
    string asalSayi = "evet" ;
    string evetHayir ; 
   

    tekrarGir : 

    cout << "\nbir sayi giriniz : " ; 
    cin >> sayi ; 

    if (sayi <= 1 ) // 1 den kucuk sayilarin asalligina bakilmaz
    { 
        cout<< "\n  1 dan buyuk sayilar giriniz lutfen " << endl ;
        goto tekrarGir ;
    }
    

    int i = 2 ; 
    while (i < sayi) // 2 asal sayi olma durumunu boyle sagliyoruz 
    {
       
        
        if (sayi % i == 0 )
        {
            cout << "\n"<<sayi <<" asal sayi degildir   " << endl ; 

               goto tekrarBaslat ;
       
        }
        
        i++ ;
    }
    if (asalSayi == "evet")
    {
    cout << "\n"<<sayi <<" asal sayidir " << endl ;

    asalSayiAdet++ ; 

    asalSayiToplam += sayi ;

    asalSayiOrt  = asalSayiToplam / asalSayiAdet ; 
    cout << "asal sayi adedi = >" << asalSayiAdet << endl; 
    cout << "asal sayi toplam = >" << asalSayiToplam << endl;

    goto tekrarBaslat ; 

    }
    // tekrar oynama sorusunu yoneltmek icin bir  goto durumu 
    tekrarBaslat : 

    cout << "\ntekrar girmek istiyor musun ? evet veya hayir :  "  ; 
    cin >>  evetHayir ; 

    if (evetHayir == "hayir" || evetHayir == "Hayir") 
    {
             cout << "\nasal sayilarin toplami =>" << asalSayiToplam << endl ;
             cout << "\nasal sayilarin ortalamasi =>" << asalSayiOrt << endl ;

    }
    
    goto tekrarGir ; 
   
    getch();
    return 0  ;
}