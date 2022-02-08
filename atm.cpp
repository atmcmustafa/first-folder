#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
string kullaniciadi="mustafaatmaca";
int sifre=1234;
int bakiye=100;
int telefon;
int secim;
int yatir,cek;
int yenisifre;
int islem;
int yeniislem;
int bloke;
int blokekaldir;
int eskitelefon=5395481812;
cout<<"Kullanici adinizi giriniz: "<<endl;
cin>>kullaniciadi;
cout<<"Sifrenizi giriniz: "<<endl;
cin>>sifre;

if(kullaniciadi=="mustafaatmaca" && sifre==1234){
cout<<"Yapmak istediginiz islemi seciniz: "<<endl;
cout<<" 1.Para Cek\n 2.Para Yatir\n 3.Sifre degistir\n 4.Sim Kart bloke kaldir\n 5.Telefon no guncelle\n 6.Cikis Yap: ";
cin>>secim;

}
else{
    cout<<"Kullanici adi veya sifre hatali!!!"<<endl;
}


if(secim==1){
    cout<<"Cekmek istediginiz tutari giriniz: ";
    cin>>cek;
    bakiye=bakiye-cek;
    cout<<"guncel bakiyeniz: "<<bakiye<<endl;
}
else if(secim==2){
    cout<<"Yatirmak istediginiz tutari giriniz: "<<endl;
    cin>>yatir;
    bakiye=bakiye+yatir;
    cout<<"guncel bakiyeniz: "<<bakiye<<endl;

}
else if(secim==3){
    cout<<"Sifre Secimine Hosgeldiniz!\n Eski sifrenizi giriniz: ";
    cin>>sifre;
    cout<<"Yeni sifrenizi giriniz: "<<endl;
    cin>>yenisifre;
    sifre=yenisifre;
    cout<<"Yeni sifreniz: "<<yenisifre<<endl;

    cout<<"Baska yapmak istediginiz islem var mi?\n Evet=1 Hayir=0";
    cin>>islem;

    if(islem==0){
        cout<<"*******iyi gunler dileriz!*********" <<endl;
    }

    }
    else if(secim==4){
        cout<<"Sim kart bloke kaldirma menusune hosgeldiniz!"<<endl;
        cout<<"Kartinizin son dort hanesini giriniz: "<<endl;
        cin>>bloke;
        if(bloke==7263){
            cout<<"Bloke kaldirma islemi basarili!"<<endl;
        }
        else{
            cout<<"!!!!Kartinizin son dort hanesi hatali!!!!";
        }


    }
    else if(secim==5){
        cout<<"Yeni telefon numaranizi giriniz: "<<endl;
        cin>>telefon;

        cout<<"Telefon numaraniz "<<telefon<<" olarak guncellenmistir"<<endl;
    }

    else{
        cout<<"*******iyi gunler dileriz!*********" <<endl;
    }
    if(islem==1){
        cout<<"Lutfen istediginiz islemi seciniz: ";
        cout<<"1.Sifre degisitr\n 2.Sim Kart blokesi kaldir\n 3.Telefon numarasi guncelle \n4.Cikis"<<endl;
        cin>>yeniislem;

    switch(yeniislem){
    case 1:
    cout<<"Sifre Secimine Hosgeldiniz!\n Eski sifrenizi giriniz: ";
    cin>>sifre;
    cout<<"Yeni sifrenizi giriniz: "<<endl;
    cin>>yenisifre;
    sifre=yenisifre;
    cout<<"Yeni sifreniz: "<<yenisifre<<endl;

    cout<<"Baska yapmak istediginiz islem var mi?\n Evet=1 Hayir=0";
    cin>>islem;
    break;
    case 2:
        cout<<"Sim kart bloke kaldirma menusune hosgeldiniz!"<<endl;
        cout<<"Kartinizin son dort hanesini giriniz: ";

        cin>>bloke;

                if(bloke==7263){
            cout<<"Bloke kaldirma islemi basarili!"<<endl;
        }
        else{
            cout<<"!!!!Kartinizin son dort hanesi hatali!!!!";
        }
        break;

        case 3:
        cout<<"Yeni telefon numaranizi giriniz: "<<endl;
        cin>>telefon;

        cout<<"Telefon numaraniz "<<telefon<<" olarak guncellenmistir"<<endl;


        break;
        case 4:
        cout<<"*******iyi gunler dileriz!******"<<endl;


        }

    }

}
