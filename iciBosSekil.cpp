#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    // kullanici tarafindan girilen satir sutunlar la olusan her seklin icini bos yapma 
    int satir , sutun  ; 

    printf("kac satir : ") ; 
    scanf("%d",&satir);

    printf("kac sutun : ") ; 
    scanf("%d",&sutun);

    for (int i = 1; i <= satir; i++) // 1 .satirdan kullanicinin giridigi satira kadar 
    {
        printf("\n"); 
        for (int j = 1; j <= sutun; j++) // 1. sutundan kulanicinin girdigi sutuna kadar 
        {
            if ( i == 1 ||  i == satir || j == 1 || j == sutun  ) // satir sutun hatlarini belirlemek ve yıldiz koymak 
            {
                printf("*");
            }
            else
            {
                printf(" "); 
            }
            
        }
        
    }
    


    getch();
    return 0 ; 
}