#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <algorithm> 


int main() {
    

    float  vizePuani , vizeHesap  ,girilenVizeToplam, gecmeNotu ,   finalPuani , finalHesap   ;
    float butunlemePuani , butunlemeHesap ; 
    int vizeAdet ; 
   

    printf(" donemlik gecme notu programina  hosgeldiniz ... \n") ; 

    // vize adet 

    printf("\nkac adet vize sinavi oluyorsunuz : " ); 
    scanf("%d",&vizeAdet) ;

    if (vizeAdet <= 0 || vizeAdet> 3) {
        printf("\nlutfen vize adet sayisi icin 1 , 2 ve 3 sayilarindan birini giriniz...Tekrar Deneyiniz\n\n"); 
        _sleep(4000);
         return false ; 
    }

        // her vize puanini adete gore for dongusuyle yazdirma ...

        for (int i = 1 ; i <= vizeAdet ; i++) {  

            printf("\n%d . vize puanini giriniz : ",i) ;
            scanf("%f",&vizePuani) ;

            if(vizePuani < 0 || vizePuani > 100 ) { // yanlis aralik icin
                printf("\nlutfen 0 ile 100 arasinda puan giriniz\n") ; 
                _sleep(3000);
                return false; 
                
            }
            if(vizeAdet == 1) {
                vizeHesap = vizePuani * 0.4 ;

            }
            if(vizeAdet == 2) {
                vizeHesap = vizePuani * 0.2 ; 
            }
            if (vizeAdet ==3) {
                vizeHesap  =vizePuani * 0.13 ;
            }
            
            girilenVizeToplam += vizeHesap ; // elde edilen vize hesaplari toplar 
            
        }
       
       
        printf("\nfinal puaninizi giriniz : "); 
        scanf("%f",&finalPuani);

          if(finalPuani < 0  || finalPuani > 100 ) {
                printf("\n0 ile 100 arasinda bir puan giriniz lutfen ..." );
                _sleep(3000);
                return false ; 
                
            }


        finalHesap = finalPuani * 0.6 ; 
        gecmeNotu = girilenVizeToplam + finalHesap ; 

        if(gecmeNotu >= 60) {
            printf("\ngectiniz .. gecme notunuz =  %.2f \n",gecmeNotu); 

        }
        else {
            printf("\nkaldiniz .. gecme notunuz = %.2f \n",gecmeNotu ); 

            // final = butunleme  , finalden gecemeyen kisi icin butunleme hesabi ...

            printf("\nbutunleme puaninizi giriniz : "); 
            scanf("%f",&butunlemePuani);

            if(butunlemePuani < 0  || butunlemePuani > 100 ) {
                printf("\n0 ile 100 arasinda bir puan giriniz lutfen ..." );
                _sleep(3000);
                return false ; 
                
            
            }

            butunlemeHesap = butunlemePuani * 0.6  ;
            
            gecmeNotu = girilenVizeToplam + butunlemeHesap ; 

            if(gecmeNotu >= 60) {
                 printf("\ngectiniz .. gecme notunuz =  %.2f \n",gecmeNotu); 
            }
            else{
                  printf("\nkaldiniz .. gecme notunuz = %.2f \n",gecmeNotu ); 
            }

        }

    getch() ; 
    return 0 ;     
    

}
