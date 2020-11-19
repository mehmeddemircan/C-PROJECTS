#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std ;

int main() {

    int gunSayi  ; 
    double para , faizHesap , faizOrani ; 
    string paraBirimi ;

    cout << "vadeli mevduat faiz hesaplama programina hosgeldiniz ... \n"<< endl ; 

    cout << "para biriminizi giriniz : ";
    cin >> paraBirimi ; 
    cout << endl  ;
     
    cout << "para miktarini giriniz : " ; 
    cin >> para ; 
    cout << endl ; 

    cout <<"ulkenizde ki faiz orani : "  ; 
    cin >> faizOrani  ;

    cout << "\nVadeli gun belirtirken gun cinsinden belirtin lutfen \nMesela 30 ,74 ,104 ,340\n " ; 
     _sleep(1500) ;
   cout << "\ngun sayisi : " ; 
   cin >> gunSayi ; 

    faizHesap = para * faizOrani *gunSayi/36500 ;

    cout << gunSayi <<" boyunca olusan para => " << faizHesap << " " << paraBirimi << endl ; 
    
    getch() ;
    return 0 ; 
}