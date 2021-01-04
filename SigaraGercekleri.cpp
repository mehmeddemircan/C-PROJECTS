#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <algorithm>
 

//global degiskenler
int adet ; 
double para = 0 ; 
int takvim = 0  ;
double hesap  = 0 ; 
int sigaraSayisi  ;
double fiyat = 0.0 ; 


void sigaraDk (int adet); 
void sigaraPara(int adet ) ;
void gecersizFiyat() ; 
void donustur (double hesap );
void gecersizSecim();

int main(int argc, char const *argv[])
{

    printf("programa hosgeldiniz ! sigara sizden neler caldigini ogreneceksin ...\n") ;

    printf("\nGunde kac sigara iciyorsun : "); 
    scanf("%d",&adet); 

    sigaraDk(adet);


    getch();
    return 0;
}


void  sigaraDk (int adet) {
    
    printf("yil , hafta , gun  ? ne cinsinden hesaplamizi istiyorsunuz\n \nY = 1  \nH = 2 \nG = 3  \nseciminiz: ");
    scanf("%d",&takvim);

  
    // gecersiz durum 
    if (takvim <= 0 || takvim >3 )
    {
        gecersizSecim();
    }

    // gecerli durum hesapla yapilacaktir ; 

    sigaraPara(fiyat); // fiyat hesapla ; 

    if (takvim == 1)
    {   
        sigaraSayisi = 365 * adet ; 
        hesap =  365 * 4 * adet  ; // yil hesap , dakika cinsinden
        para = (double) (fiyat / 20) * adet * 365  ; 

    }
    else if (takvim ==  2)
    {   
        sigaraSayisi = 7 * adet ; 
        hesap = 28 *adet ;  // hafta hesap , dakika cinsinden 
        para = (double) (fiyat / 20) * adet * 7 ;  
    }
    else if (takvim == 3)
    {   
        sigaraSayisi = adet;
        hesap = 4 * adet ;  // gun hesap , dakika cinsinden 
        para = (fiyat / 20) * adet  ;  
    }
    
   

    printf("\n\n%d adet sigara ictin !..\n\n%.2lf TL para odedin" ,sigaraSayisi,para);

    donustur(hesap);   // dakika gun saat donusumu 

}
// dk saat gun donusumleri yapan fonksiyon 
void donustur( double hesap) {
    printf("\n%.lf dakikani senden aldi !",hesap);// dakika donusumu  ; 
    hesap /= 60 ;
    printf("\nyaklasik %.lf saatini senden aldi !",hesap); // saat donusumu ; 
    hesap /= 24 ; 
    printf("\nyaklasik %.lf gununu senden aldi !" ,hesap); // gun donusumu ; 
}

void sigaraPara(int adet) {

    printf("ictigin sigaranin fiyatini giriniz : "); 
    scanf("%lf",&fiyat) ;
          
    gecersizFiyat() ;       

}
// fiyat eksi olmasi durumu :
void gecersizFiyat() {

    while (fiyat <=  0.0)
    {
        printf("\nfiyat gecersiz!  Tekrar giriniz : "); 
        scanf("%lf",&fiyat); 
        
    }   
    printf("\nBasarili sekilde fiyat girildi !");
}
void gecersizSecim() {
    while (takvim > 3 || takvim <= 0)
    {
        printf("hatali giris ! Seciminizi Tekrar giriniz : ");
        scanf("%d",&takvim);
    
    }
    printf("\nBasarili sekilde seciminiz girildi!\n\n");
}


