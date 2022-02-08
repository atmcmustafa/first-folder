#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int islem,topla,cikar,carp,bol,usAl,sayi1,sayi2,sonuc;


cout<<"Yapmak istediginiz islemi seciniz:"<<endl;
cout<<"1.Toplama"<<endl;
cout<<"2.Cikarma"<<endl;
cout<<"3.Carpma"<<endl;
cout<<"4.Bolme"<<endl;
cout<<"5.Us alma "<<endl;
cin>>islem;

if(islem==1){
        cout<<"iki sayi giriniz: "<<endl;
        cin>>sayi1>>sayi2;
        sonuc=sayi1+sayi2;
        cout<<"isleminizin sonucu: "<<sonuc<<endl;
}
else if(islem==2){
        cout<<"iki sayi giriniz: "<<endl;
        cin>>sayi1>>sayi2;
        sonuc=sayi1-sayi2;
        cout<<"isleminizin sonucu: "<<sonuc<<endl;
}
else if(islem==3){
        cout<<"iki sayi giriniz: "<<endl;
        cin>>sayi1>>sayi2;
        sonuc=sayi1*sayi2;
        cout<<"isleminizin sonucu: "<<sonuc<<endl;
}
else if(islem==4){
        cout<<"iki sayi giriniz: "<<endl;
        cin>>sayi1>>sayi2;
        sonuc=sayi1/sayi2;
        cout<<"isleminizin sonucu: "<<sonuc<<endl;
}
else{
    cout<<"iki sayi giriniz: "<<endl;
    cin>>sayi1>>sayi2;
    cout<<"isleminizin sonucu: "<<pow(sayi1,sayi2);


}

}
