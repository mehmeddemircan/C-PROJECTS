#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>

using namespace std ;

int main() {
     // kullanici tarafindan belirlenen iki sayi arasindaki asal sayilari yazdirma  ;
    
    int sayiBas , sayiSon ,sayac= 0 ;
    string asalSayi = "evet" ; 
    string evetHayir  ;
    bool tekrarSayi = true ;

    while (tekrarSayi )
    {  

    tekrarDene : 

    cout << "hangi sayidan baslamami istiyorsun ? : "  ; 
    cin >> sayiBas ;
    cout << endl ; 

    cout << "hangi sayida bitirmemi istiyorsun ?  : "  ; 
    cin >> sayiSon  ;
    cout << "\n" << endl;

 

    if (sayiBas < 0 ||sayiSon <= 0 )
    {
        cout << "\nlutfen duzgun aralikta sayi girin ..." << endl ; 
        _sleep(1000);
        goto tekrarDene  ; 
    }
    


    for (int i = sayiBas; i<=sayiSon  ; i++ ) // araliktaki sayilari artirma 
    {
        for (int j =  2; j < i; j++) // carpan 
        {   
           sayac = 0  ; 
            if (i % j == 0 )
            {
                
                sayac ++  ;
                break ; 
                
            }
            
        }
        if (sayac == 0  )
        {
           cout << i << " " ;  
           
        }
           
        
    }
    

    tekrarGir : 

    cout << "\ntekrar girmek istiyor musun ?  evet veya hayir : "  ;
    cin >> evetHayir ; 

    if (evetHayir == "hayir" || evetHayir == "Hayir")
    {
        cout << "\nprogrami kullandiginiz icin tessekur ederiz..." << endl ;
        _sleep(2000);
        return false ;
    }
     

    }
        
    getch();
    return 0  ;
}