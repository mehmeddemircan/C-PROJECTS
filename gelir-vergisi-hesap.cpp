#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>
#include <cmath>


using namespace std ; 


int main () {

    double gelir , gider , gelirHesap , giderHesap ;
    double  kar =  0 , vergiHesap = 0  , taban = 0 ; 
    string paraBirimi ; 
    cout << "vergi hesaplama programina hosgeldiniz ..." << endl ;

    cout << "\npara biriminizi giriniz  : " ;
    cin >> paraBirimi ; 

    cout << "\ngelirinizi giriniz : "  ; 
    cin >> gelir ; 
    gelirHesap = gelir / 1000 ; 
    


    cout << "\ngiderinizi giriniz : "  ;
    cin >> gider ;
    giderHesap = gider / 1000   ; 

    kar = gelirHesap - giderHesap ;
   
    cout << "kariniz : " << kar *1000 << " " << paraBirimi << endl ;
    
    if (kar < 13.0 && kar > 0.0 ) {
        vergiHesap = kar * 0.15;  
        cout << "\ngelir vergi tutari = " << vergiHesap * 1000 << endl ;
      
    }
    else if (kar > 13.0 && kar< 30.0) {
        taban = kar - 13.0 ;
        vergiHesap = taban * 0.2 + 1.950 ;
         cout << "\ngelir vergi tutari  =" << vergiHesap * 1000<< endl ;
        
    }
    else if (kar >30.0 && kar < 70.0) {
        taban = kar - 30.0;
        vergiHesap = taban * 0.27 + 5.350 ;
        cout << "\ngelir vergi tutari  =" << vergiHesap * 1000 << endl ;
        
    }
    else {
        taban = kar - 70.0 ; 
        vergiHesap = taban * 0.35 + 16.150 ; 
        cout << "\ngelir vergi tutari  =" << vergiHesap * 1000<< endl ;
        
    }
    cout << "\nprogrami kullandiginiz icin tesekkur ederiz...\n" ; 
    _sleep(10000);
    return false ;
    




    getch();
    return 0 ; 
}