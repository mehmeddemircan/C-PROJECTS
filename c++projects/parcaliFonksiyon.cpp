#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std ; 

int main() {

    double sayi ,  sonuc  ; 
    cout << "\nondalikli tam sayi farketmez " << endl ;
    _sleep(500) ;

    tekrarGir : 

    cout << " \nbir sayi giriniz : "  ; 
    cin >> sayi ; 

    if (sayi < 0  )
    {
      sonuc = (3 * sayi* sayi)  + 2 ;
    }
    else if ( 0 >= sayi && sayi < 10  )
    {
        sonuc = (2 * sayi) - 1 ; 
    }
    else if ( sayi >= 10 )
    {
        sonuc = (2 * sayi *sayi) - (sayi); 
        
    }
    
    cout << "\nsonuc = > " << sonuc << endl ; 
    
    cout << "\ntekrar sayi giriniz ..." ; 
    goto tekrarGir ; 

    




    getch();
    return 0 ;
}