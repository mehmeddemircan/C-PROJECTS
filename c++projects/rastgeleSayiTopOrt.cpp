#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int rastgeleSayi  ,adet = 0  ; 
    float  toplam = 0  , ortalama = 0 ;

    srand(time(NULL)); // farkli sayi olusturmasini saglıyor eger for da olsaydi hep ayni sayiyiyi verecekti ekrana

    for (int adet = 1; adet < 6; adet++)
    {   
         rastgeleSayi = rand()%100 ; // 0 ile 99 arasinda 

        toplam += rastgeleSayi ; 
        printf( " %d ",rastgeleSayi); 
    }
    ortalama = toplam / 5  ;  
    printf("\n%.2f",toplam);
    printf("\n%.2f",ortalama);

    getch();
    return 0 ; 
}