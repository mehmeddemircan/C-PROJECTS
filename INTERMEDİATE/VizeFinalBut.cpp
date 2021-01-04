#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <algorithm>

//  5 ogrencinin istenilen bilgiler girisini yapacak  ve her birinin 5 dersinin gecme notlarini hesaplanacak ve  bilgileri ekrana yazdiran program kodunu yaziniz.

struct Ogrenci
{
    char ad[30]; 
    char soyad[30]; 
    int okulNo ; 
    
    struct Ders 
    {
        int dersKod ;
        int vize ; 
        int final ; 
        int but ; 
        double gecmeNotu;

    }dersler[2];

}ogrenci[1];

//global degiskenler 
int i  ; // ogrenci 
int j ; // ders 
int ogrenciUzunluk ; 
int derslerUzunluk ;
    

//fonksiyonlar
void gecersizNot() ;  
void ayniDersKod() ;
void ayniOkulNo();
void harfKarsiligi(double harfNotu) ;

int main(void)
{   
   // ogrenci arrayi uzunluk hesaplama 
    ogrenciUzunluk = sizeof(ogrenci) / sizeof(ogrenci[0]);
  
      
    for ( i = 0; i < ogrenciUzunluk; i++) // ogrenci ile alakali islemler 
    {
        printf("\n%d ogrencinin kaydi \n",i+1);
        
        printf("ad : "); 
        scanf("%s",ogrenci[i].ad);

        printf("soyad : "); 
        scanf("%s",ogrenci[i].soyad);


        printf("okul no  : "); 
        scanf("%d",&ogrenci[i].okulNo);
        ayniOkulNo();

       
        // ders arrayi uzunluk  hesaplama
        derslerUzunluk = sizeof(ogrenci[i].dersler) / sizeof(ogrenci[i].dersler[0]);
      
        for ( j = 0; j < derslerUzunluk ; j++) // ders ile alakali islemler
        {
          
            printf("\n%d. dersin kodunu giriniz :" ,j+1); 
            scanf("%d",&ogrenci[i].dersler[j].dersKod);
            ayniDersKod();

            printf("Vize notunuzu giriniz: ");
            scanf("%d",&ogrenci[i].dersler[j].vize);
            gecersizNot(); 

            printf("Final notunuzu giriniz : "); 
            scanf("%d",&ogrenci[i].dersler[j].final); 
            gecersizNot();

            ogrenci[i].dersler[j].gecmeNotu = ogrenci[i].dersler[j].vize * 0.4 + ogrenci[i].dersler[j].final * 0.6 ;   

            //ogrencinin  kalmasi durumu : Butunleme notu 
            if (ogrenci[i].dersler[j].gecmeNotu <= 50 ) 
            {
                  
                printf("Butunleme notunuzu giriniz : ");
                scanf("%d",&ogrenci[i].dersler[j].but);
                gecersizNot(); 

                ogrenci[i].dersler[j].gecmeNotu = ogrenci[i].dersler[j].vize * 0.4 + ogrenci[i].dersler[j].but * 0.6 ;

            }

            // gecmesi durumu : 
            printf("");
            
        } 
             
    } // ogrenci for dongusu bitis parantezi  

     
	// ogrenci bilgilerini ekrana yazdirma islemi 
    for ( i = 0; i < ogrenciUzunluk; i++)
    {
    
        printf("\n%d. Ogrenci Bilgileri ",i+1);

        printf("\nad: %s",ogrenci[i].ad);    
        printf("\nsoyad : %s",ogrenci[i].soyad);
        printf("\nokul no : %d",ogrenci[i].okulNo);

        for ( j = 0; j < derslerUzunluk; j++) // ders notlari ekrana yazdirma islemi 
        {

            printf("\n%d. Dersin gecme notu : %.2lf \tHarf Karsiligi =  ",j+1,ogrenci[i].dersler[j].gecmeNotu);
            harfKarsiligi(ogrenci[i].dersler[j].gecmeNotu);// harf karsiligi fonksiyonu ;

            if (ogrenci[i].dersler[j].gecmeNotu >=50) // Gecme Kalma durumlari 
            {
                printf("\n%d. Dersten GECTINIZ !\n",j+1);
               
            }
            else
            {
                printf("\n%d. Dersten KALDINIZ !\n",j+1); 
            }
            
        }
        printf("\n------------------------");
       
    }

    getch(); 
    return 0;

}

// gecersiz not  girilmesini onleyen  fonksiyon  
void gecersizNot() 
{
 
    while (ogrenci[i].dersler[j].vize < 0 || ogrenci[i].dersler[j].vize > 100) // vize gecersiz
    {
        printf("Hatali giris !  Tekrar vize notunuzu Giriniz : ");
        scanf("%d",&ogrenci[i].dersler[j].vize);
    }
    while (ogrenci[i].dersler[j].final < 0 || ogrenci[i].dersler[j].final > 100) // final gecersiz
    {
        printf("Hatali Giris !  Tekrar final notunuzu Giriniz : ");
        scanf("%d",&ogrenci[i].dersler[j].final);
    }
     while (ogrenci[i].dersler[j].but < 0 || ogrenci[i].dersler[j].but > 100) // but gecersiz 
    {
        printf("\nHatali giris !  Tekrar butunleme notunuzu Giriniz : ");
        scanf("%d",&ogrenci[i].dersler[j].but);
    }
  
    
   
}

// ayni ders kodun girilmesini onleyen fonksiyon 
void ayniDersKod() {
    
    for (int k = 1; k<= j; k++) // varolan ders kodlarini kontrol eden ayni ise farkli ders kodu istenmesi durumu : (j = girilen dersadet sayisi) 
    {
            
        while (ogrenci[i].dersler[j].dersKod == ogrenci[i].dersler[j-k].dersKod)
        {

            printf("Hesaplanan Ders kodu Girdiniz!   Tekrar giriniz :");
            scanf("%d",&ogrenci[i].dersler[j].dersKod);

            k = 1;
                            
        }
               
    }
    // else durumu : ders kodlarinin ayni olmamasi 
    printf("\nBasarili sekilde ders kodu girildi !\n\n");

}

// ayni okul numarasina sahip olan ogrenci durumunu onleyen fonksiyon
void ayniOkulNo() {
    
    for ( int a = 1 ; a <= i ; a++) // girilen okul numaralarina kadar aynisi olup olmadigini kontrol etme islemi (i = girilen ogrenci adet sayisi) 
    {    

        while (ogrenci[i].okulNo == ogrenci[i-a].okulNo)
        {   

            printf("Bu Okul Numarasi Onceden Girildi !!  Farkli Okul Numarasi giriniz : ");
            scanf("%d",&ogrenci[i].okulNo);

            a = 1 ;
        }
         
    }
    // else durumu : ogrenci okul numaralarin ayni olmamasi 
    printf("\nOkul numarasi basarili sekilde girildi!\n");
       
}
// gecme notunun harf karsiligini gosteren fonksiyon ; 
void harfKarsiligi(double harfNotu) {

    if (harfNotu >= 82 && harfNotu <= 100)
    {
        printf("AA"); 
    }
    else if (harfNotu >=74 && harfNotu <= 81)
    {
        printf("AB");
    }
    else if (harfNotu >= 65 && harfNotu <=73)
    {
        printf("BB");
    }
    else if (harfNotu >= 58 && harfNotu <= 64)
    {
        printf("CB");
    }
    else if (harfNotu >= 50 && harfNotu <= 57)
    {
        printf("CC");
    }
    else if (harfNotu >= 40 && harfNotu <= 49)
    {
        printf("DC");
    }
    else if (harfNotu >= 35 && harfNotu <= 39)
    {
        printf("DD");
    }
    else if (harfNotu >= 25 && harfNotu <= 34)
    {
        printf("FD");
    }
    else if (harfNotu >= 0 && harfNotu <= 24)
    {
        printf("FF");
    }
      
    
}

