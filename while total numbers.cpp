#include <iostream>

using namespace std;

int main()
{
    int sinir;
    int toplam;

 cout<<"Toplamini istediginiz sayiyi giriniz"<<endl;
 cin>>sinir;


 while(sinir>0){
    cout<<sinir<<endl;
    toplam+=sinir;
    sinir--;


 }
cout<<"Sayilarin toplami: "<<toplam;

}
