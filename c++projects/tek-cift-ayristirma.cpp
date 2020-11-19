#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std ; 

int main() {

    int sayilar ,ciftAdet = 0 , tekAdet =  0 , sayiAdet = 0  ; 
    // tek cift sayi ayristirma programi 

    cout << "ne kadar sayi girmek istiyorsunuz : " ;
    cin >> sayiAdet ;


    for (int i = 1 ; i <=  sayiAdet ; i++ ) {
        cout << i << ". sayiyi giriniz lutfen : " ; 
        cin >> sayilar ; 
        cout << endl ; 
        
        if(sayilar % 2 == 1) {
            tekAdet++; 

        }
        else
        {
            ciftAdet++ ;
        }
        
    }
    
    cout << "\ntek sayi adedi = " << tekAdet << endl ; 
    cout << "\ncift sayi adedi = " << ciftAdet << endl  ;  
    

    getch();
    return 0 ; 
}