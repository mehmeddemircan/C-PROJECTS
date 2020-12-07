#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

using namespace std ;

int main() {
    
    string yalanlar[10] ; 
    string evetHayir  ;
    bool tekrar = true ;

    while(tekrar){

  

    srand(time(NULL));

    int rastgeleSayi = rand() % 10 + 1; // 1 ile 10 arasinda donecek  

    // yalanlar  
    yalanlar[1]  ="Telefon þarjdaydi kanka ya aradigini duymamisim. " ; 
    yalanlar[2]  ="Yok kanka ya, oyun oynamiyorum. Mesaj gelmisti ona bakiyorum " ; 
    yalanlar[3]  ="Sistem gitti, sizi bir sure bekletecegim" ;
    yalanlar[4] = "Telefonu degistirdim o yuzden numaran bende kayitli degil ya" ;
    yalanlar[5] = "Rehber silindi " ; 
    yalanlar[6] = "Trafik vardi o yuzden gec kaldim ";
    yalanlar[7] = "Bir yerden odeme bekliyorum odeme yapilsin ,  verecem borcunu ";
    yalanlar[8] = "ya bende tam seni arayacaktim , tam sen aklima gelmistin";
    yalanlar[9] = "Telefonun alarmi calmadi";
    yalanlar[10] = "seni seviyorum ozledim ";

    cout << "\n" << endl ;

    for (int  i = 1; i < 10 ; i++)
    {
        string temp = yalanlar[i] ;
        if(temp == yalanlar[rastgeleSayi] ) {
            cout << temp << endl ; 
            break ; 
        } 
    }

    cout << "\ntekrar rastgele yalan gostermemi istiyor musun ? Evet veya Hayir : " ; 
    cin >> evetHayir ; 
    if(evetHayir == "Hayir"||evetHayir == "hayir"||evetHayir == "HAYIR")
    {
        cout << "\nprogrami kullandiginiz icin tesekkur ederiz ." << endl ;
         
         return tekrar = false ; 
        
    }   
    }
    getch();
    return 0 ; 
}
