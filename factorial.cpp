#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int faktoriyel=1;


    cout<<"Lufen faktoriyel hesaplanmasini istediginiz sayiyi yaziniz: "<<endl;
    cin>>sayi;



    while(sayi>0){

        faktoriyel*=sayi;
        sayi--;

    }

cout<<"Yazdiginiz sayinin faktoriyeli: "<<faktoriyel;





}
