#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std ; 

int main () {

    float tabanKenar , yukseklik  , alan ; 
    bool tekrarGir =  true ; 
    char EvetHayir ; 

    while (tekrarGir) {
        tekrarTaban : 
        cout << "\nbir taban kenari uzunlugu giriniz : " ;
        cin >>tabanKenar ; 
    
        if(tabanKenar <= 0) {
            cout << "\nlutfen 0 ve 0 dan buyuk sayilar giriniz.  tekrar deneyiniz" << endl ;
            goto tekrarTaban ; 
        } 
        tekrarYukseklik : 
        
        cout << "\nyukseklik kenari uzunlugu giriniz : " ; 
        cin >> yukseklik ;

         if(yukseklik <= 0) {
            cout << "\nlutfen 0 ve 0 dan buyuk sayilar giriniz.  tekrar deneyiniz" << endl ;
            goto tekrarYukseklik ; 
        }    

        

        alan = tabanKenar * yukseklik  ; 
        alan /= 2 ;  // 2 ye bolme islemi 

        cout << "\nsonuc : " << alan << endl ;
        cout << endl ; 

        cout << "tekrar girmek ister misiniz  ?  E veya H : " ;
        cin >> EvetHayir ; 

        if (EvetHayir == 'H' || EvetHayir == 'h') {
             cout << "baska zamana artik ..." << endl ;
            _sleep(2000);  // 2 saniye bekler 
            return tekrarGir = false ; 
           
        }


    }
    



    getch() ;
    return 0  ;
}