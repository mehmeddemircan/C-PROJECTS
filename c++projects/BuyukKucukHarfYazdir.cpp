#include<stdio.h>
#include<conio.h>
 
int main() {
    
    char metin[256];
    int i = 0;
    char buyukKucuk  ;

  

    printf("Bir Metin  giriniz: ");
    gets(metin);
                
    int fark =  32 ;  // a = 97  A = 65 ;  fark 32 dir 

    printf("\nhepsi buyuk harf icin = B \nhepsi kucuk harf icin = K  \n\nseciminiz B veya K : ");
    scanf("%c",&buyukKucuk) ;

    if (buyukKucuk == 'B' || buyukKucuk == 'b' )
    {       
            printf("\nbuyuk hali = "); 
            while (metin[i] != '\0')
            {

                    if (metin[i] >= 'a' && metin[i] <= 'z')  
                    { 
                        metin[i] -= fark;
                    }
                    printf("%c", metin[i]);
                    i++;
            }
            
    }   
    else
    {   
        printf("\nkucuk hali  = "); 
        while (metin[i] != '\0') 
        {

            if (metin[i] >= 'A' && metin[i] <= 'Z') 
            {
                metin[i] += fark; 
            }
            printf("%c", metin[i]);
            i++;
        }
    }
    
    getch();
    return 0;
}
