#include <stdio.h>
#include <conio.h>
#include <algorithm>

int main()
{   
    int i , j ; 
	int k=0;
    int kontrol = 0 ; 

	char metin[256];
	char kelime[20];
   
     
	printf("metni giriniz: ");
	gets(metin);
	printf("\nkelimeyi giriniz: ");
	gets(kelime);
	
	for(j=0; kelime[j]!='\0'; j++); 
    
	for(i=0; metin[i]!='\0'; i++)
	{
		if(metin[i]==kelime[k]) 
		{
			k++;
    
			if(k==j && metin[i+1]==' '){ // kelime uzunluklari ayni olmali ve cumlenin 1 fazla indeksinin bosluga denk gelmeli
                kontrol=1;
                break;  // kelimeyi bulma durumu 
            }
			
		}
		else
		{
			k=0;
		}
	}
	
	if(kontrol==1) 
    {
        printf("\nKelimeniz  metnin  %d. karakterinde basliyor",i-j);
        printf("\nKelime => %s",kelime);
    }

	else{
        printf("\n%s kelimesi metinde bulunmamaktadir.",kelime);
    }


    getch();
	return 0;
}