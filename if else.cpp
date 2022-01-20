#include <iostream>

using namespace std;

int main()
{
    string kullaniciAdi;
    string sifre;
    string kontrolk="mustafa";
    string kontrolsifre="mustafaenes";

    cout<<"Kullanici adi ve sifre girini: "<<endl;
    cin>>kullaniciAdi;
    cin>>sifre;

    if(kullaniciAdi==kontrolk && sifre==kontrolsifre  ){

        cout<<"Giris basarili..!!";}
        else if(kullaniciAdi==kontrolk || sifre==kontrolsifre){

                if(kullaniciAdi!=kontrolk){

                    cout<<"Kullanici Adi yanlis..!!";
                }
                else{
                    cout<<"Sifre Hatali..!";
                }




        }
    else{
        cout<<"Hatali giris";
    }


    }




