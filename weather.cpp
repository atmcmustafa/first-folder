#include <iostream>

using namespace std;

int main()
{
string gun1="pazartesi";
string gun2="sali";
string gun3="carsamba";
string gun4="persembe";
string gun5="cuma";
string gun6="cumartesi";
string gun7="pazar";

float sicaklik[7];
float ortalama[7];

cout<<"Lutfen 7 gunun sicaklik degerlerini sirayla giriniz: "<<endl;

for(int i=0;i<7;i++){
    cin>>sicaklik[i];
}
for(int i=0;i<1;i++){
    ortalama[i]=sicaklik[i]/7;
    cout<<"7 Gunun Ortalamasi: "<<ortalama[i]<<endl;
}
}
