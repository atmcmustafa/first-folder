#include <iostream>

using namespace std;

int main()
{

string isim1="mustafa";
string isim2="enes";
string isim3="tugba";

float elektrik[3];
float dogalgaz[3];
float su[3];
float telefonlar[3];
float market[3];
float ortalamaGider[3];

cout<<"Aylik elektrik faturalarini giriniz: "<<endl;
for(int i=0;i<3;i++){
    cin>>elektrik[i];
}
cout<<"Aylik dogalgaz faturalarini giriniz: "<<endl;
for(int i=0;i<3;i++){
    cin>>dogalgaz[i];
}
cout<<"Aylik su faturalarini giriniz: "<<endl;
for(int i=0;i<3;i++){
    cin>>su[i];
}
cout<<"Aylik telefon faturalarini giriniz: "<<endl;
for(int i=0;i<3;i++){
    cin>>telefonlar[i];
}
cout<<"Aylik market faturalarini giriniz: "<<endl;
for(int i=0;i<3;i++){
    cin>>market[i];
}
for (int i=0;i<3;i++){
    ortalamaGider[i]=(elektrik[i]+dogalgaz[i]+su[i]+telefonlar[i]+market[i])/30;
    cout<<"Gunluk gideriniz: "<<ortalamaGider[i]<<endl;
}

}
