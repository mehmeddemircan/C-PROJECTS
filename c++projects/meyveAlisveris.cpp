#include<stdio.h>
#include <conio.h>
#include <algorithm>


int main(void)
{
    tekrarGir : // goto dongusu 

	float  fiyat=0.0,agirlik=0.0,tutar=0.0;
	int islemTuru;
	int adet = 0 ;
	int urunSayi ; 
    char evetHayir  ; 
    bool tekrar = true ; 
     
	while (tekrar) {
        printf("islem turu seciniz:\n1.kilo satis\n2.birim satis\n3.toptan satis\n");
	    scanf("%d",&islemTuru);

        printf("\nUrun fiyati :"); // her durumda isteyecegimiz icin switch -case in disinda yazdik kod tekrari yapmamak icin 
		scanf("%f",&fiyat);

	switch(islemTuru){
		case 1:

	        printf("\nürünün agirligi:");
	        scanf("%f",&agirlik);
	
	        tutar=agirlik*fiyat;
	        printf("%.2f",tutar);
	        break ; 
		case 2:
			printf("\nkaç adet aldınız:");
			scanf("%d",&adet);
			tutar=adet*fiyat;
			printf("%.2f",tutar);
			break ; 
		case 3:
			tekrarUrunSayi: 
			printf("\nkutuda kaç tane urun var");
			scanf("%d",&urunSayi);
			if(urunSayi>19){

				printf("\nyüzde 3 indirim kazandınız:\n"); 
				tutar=fiyat*urunSayi;
				tutar=tutar-((tutar*3.5)/100);
				printf("\nindirimli tutar: %.2f",tutar);
				
			}

			else if(urunSayi<=19 && urunSayi >0 ) {
			tutar=urunSayi*fiyat;
			printf("\ntutar:%.2f",tutar);
			}
			else {
				goto tekrarUrunSayi ; 
			}
			break ; 

			

		default: // hicbiri olmamasi durumu  : 
			printf("yanlıs islem!");
            goto tekrarGir ;  
			
			} 
            // dongu icin 
    printf("\ntekrar devam etmek istiyor musunuz ?  evet veya hayir : ");
    scanf("%s",&evetHayir) ;
        
        if (evetHayir == 'h' ||evetHayir == 'H' ) 
            {
                printf("\nprgrami kullnadiginiz icin tessekur ederiz !"); 
                _sleep(2000); // uyku 2 saniye 
                return  tekrar = false ;  // kapatma 
            }       
            

    }
	
	
    getch();
    return 0;
}