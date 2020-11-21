#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std ; 

int main() {

    int sayi ;
    int carpan;
    string tekSayi = "Evet" ; 
    bool tekrarGir = true ; 
    string EvetHayir ; 

    cout << "\nkullanici tarafindan girilen sayinin asal olup olmadigini bulan program" << endl ;

    tekrarDeger : 
    
    cout << "\nbir sayi giriniz : " ; 
    cin >> sayi ;

    if (sayi <=  1 ) 
    {
        cout << "\nlutfen 1 den buyuk tam sayilar giriniz.. "<< endl ;
        goto tekrarDeger ; 
    }

       
    for (carpan = 2; carpan < sayi; carpan++)
    {   
        if (sayi%carpan == 0 )
        {   
            cout <<"\n"<< sayi <<" bir asal sayi degidir " << endl ;

            _sleep(1000);

            cout << "\ntekrar sayi girmek istiyor musunuz ?  Evet veya Hayir : " ;
            cin >> EvetHayir;


            if (EvetHayir =="hayir" ||EvetHayir =="Hayir"|| EvetHayir == "HAYIR")
            {
            cout << "\nprogrami kullandiginiz icin tesekkur ederiz ..." << endl ;
            _sleep(2000);
            return false ; 
            }
            // if durumun icinde olmadigi icin  buraya gecer burdan da sayi giriniz kismina gider 
            // yani else durumunun icinde gibi dusunebiiriz ama else yazmaya gerek yoktur
            goto tekrarDeger ;
              
            
        }
        
    }
    if (tekSayi == "Evet")
    {
        cout << "\n" << sayi << " bir asal sayidir .." << endl ;
        _sleep(1000) ;

        cout << "\ntekrar sayi girmek istiyor musunuz ?  Evet veya Hayir : " ;
        cin >> EvetHayir;
        cout << endl; 

        if (EvetHayir =="hayir" ||EvetHayir =="Hayir"|| EvetHayir == "HAYIR")
        {
            cout << "\nprogrami kullandiginiz icin tesekkur ederiz ..." << endl ;
            _sleep(2000);
            return false ; 
        }
        // else durumu icin de dusunebiliriz if e girmezse tekrar deger dondur yani .... 
        goto tekrarDeger;
        
    
    }

    getch(); 
    return 0 ; 
}