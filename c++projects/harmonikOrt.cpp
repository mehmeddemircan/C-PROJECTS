#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>


using namespace std ;

int main() {

    tekrarGir :

    int sayi , sayiAdet = 0 ,toplam = 0    ;
    double harmonikOrt ,altToplam = 0 ;  
    string evetHayir = "evet"; 


    cout << "\nkac sayi girmek istiyorsunuz  : " ; 
    cin >> sayiAdet ; 
    cout <<"\n" ; 

    if (sayiAdet < 0 )
    {
        cout << "\n0 dan buyuk sayiadedi giriniz lutfen " << endl ; 
        goto tekrarGir ; 
    }

    for (int i = 1; i <= sayiAdet; i++)
    {
        cout << i << ". sayiyi giriniz : "  ; 
        cin >> sayi  ;
        
        altToplam +=  pow(sayi ,-1);   // harmonik ortalama hesaplama formulu  icin payda kısmı 
    
    }
    harmonikOrt  = sayiAdet / altToplam ;  // harmonik ortalama ... 
    cout << "\nsayi adedi  = >" << sayiAdet << endl ; 
    cout << "\nalt toplam =>" << altToplam << endl ;

    cout << "\nharmonik ortalama => " << harmonikOrt << endl ;

    _sleep(1500);
    
    cout << "tekrar harmonik ortalama hesaplamak istiyor musun ?  evet veya hayir : " ; 
    cin >> evetHayir ; 

    if (evetHayir == "hayir" || evetHayir == "Hayir")
    {
        cout << "programi kullandigiiniz icin tessekur ederiz ..." << endl ; 
        _sleep(2000); 
        return false ; 
    }

    goto tekrarGir ; 
    








    getch();
    return 0  ;
}