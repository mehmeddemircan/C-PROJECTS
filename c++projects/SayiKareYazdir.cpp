
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std ;

int main() {

    float sayiAdet ,girilenSayi ,  sonuc ; 
    bool tekrarGir = true ; 
    string evetHayir  ; 

    while (tekrarGir)
    {
        
        cout << "\nkac sayi yazmak istiyorsunuz : "  ; 
        cin >> sayiAdet ; 

        for (int i = 1; i <=sayiAdet; i++)
        {
            cout <<"\n"<< i << ". sayiyi giriniz : " ; 
            cin >> girilenSayi ;
            cout << endl ; 
            sonuc = pow(girilenSayi , 2) ; 
            cout << "\nkaresi : " << sonuc << endl ; 
        }
        _sleep(1000) ;
        
        cout << "\ntekrar girmek istiyor musun ?  Evet veya Hayir  : " ; 
        cin >> evetHayir ; 
        if (evetHayir == "hayir" || evetHayir == "Hayir")
        {
            cout << "\nprogrami kullandiginiz icin tesekkur ederiz." << endl ; 
            _sleep(1000); 
            return false ; 
        }
        



    }
    



    getch();
    return 0 ; 
}