#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

   int sayi;


   for(sayi=1;sayi<=20;sayi++){

    cout<<setw(5)<<sayi;
    int kare=sayi*sayi;
    cout<<setw(5)<<kare<<endl;


   }

}
