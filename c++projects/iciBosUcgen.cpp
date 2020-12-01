#include <stdio.h>
#include <conio.h>


int main() {

    for (int i = 1; i < 7 ; i++)
    {
        printf("\n");    
    
        for (int j = 1; j < 7; j++)
        {
           if (i == 6 ||  j == 1 || i == j )  
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
    return 0  ;
}