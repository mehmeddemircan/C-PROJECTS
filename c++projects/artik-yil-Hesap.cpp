#include <iostream>
#include <cmath>
#include <conio.h>
#include <algorithm>

using namespace std ; 

int main() {

    int yil  ;

    cout << "artik yil bulma programi ...\n" << endl ;


    cout <<"yil giriniz : "  ; 
    cin >> yil ; 
    cout << endl ; 

    if (yil % 4 == 0 )
    {
        cout << yil << "artik yildir ." << endl ; 
    }
    else 
    {
        cout << yil << "artik yil degildir ." << endl;
    }
    _sleep(2000);
    return false ;
    

    getch() ;
    return 0 ; 

}