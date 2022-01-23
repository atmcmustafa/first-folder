#include <iostream>

using namespace std;

int main()
{

string isim1="enes";
string isim2="mustafa";
string isim3="tugba";

float vize1[3];
float vize2[3];
float finalsonuc[3];
float ortalama[3];


//vize1 20 , vize 2 0.3 , final 0,5
cout<<"Ogrencilerin birinci vizesini giriniz"<<endl;
for(int i=0;i<3;i++){
    cin>>vize1[i];
}
cout<<"Ogrencilerin ikinci vizesini giriniz"<<endl;
for(int i=0;i<3;i++){
    cin>>vize2[i];
}
cout<<"Ogrencilerin final notunu giriniz"<<endl;
for(int i=0;i<3;i++){
    cin>>finalsonuc[i];
}
for(int i=0;i<3;i++){
    ortalama[i]=vize1[i] *0.2+vize2[i] *0.3 + finalsonuc[i] * 0.5;

}
for(int i=0;i<3;i++){
    cout<<i+1<<". ogrencinin ortalamasi: "<<ortalama[i]<<endl;
    if(ortalama[i]>=85){
        cout<<"A ile gectiniz"<<endl;
    }
    else if(ortalama[i]>=70){
        cout<<"B ile gectiniz"<<endl;
    }
    else if(ortalama[i]>55){
        cout<<"C ile gectiniz"<<endl;
    }
    else if(ortalama[i]<=35){
        cout<<"D ile gectiniz "<<endl;
    }
    else {
        cout<<"Kaldiniz";
    }
}

}
