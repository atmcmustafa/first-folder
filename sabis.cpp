#include <iostream>

using namespace std;

int main()
{
string kullaniciAdi="mustafaatmaca";
int sifre=1234,secim,derssecim,yeniislem,hes;

    cout<<"Lufen kullanici adinizi giriniz:"<<endl;
    cin>>kullaniciAdi;
    cout<<"Lufen sifrenizi giriniz:"<<endl;
    cin>>sifre;

        if(kullaniciAdi=="mustafaatmaca" && sifre==1234){
            cout<<"Yapmak istediginiz islemi seciniz"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme \6.Cikis";
            cin>>secim;
        }
        else{
            cout<<"Kullanici adi veya sifre yanlis";
        }
        if(secim==1){
            cout<<"------------DUYURULAR-----------";
                        cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>yeniislem;}
            if(yeniislem==1){
                    cout<<"------------DUYURULAR-----------";

            }
            else if(yeniislem==2){
            cout<<"-----Secilen Dersler-----\n 1.Algoritma\n 2.Yazili sozlu iletisim \n 3.Muhasebe \n 4.ingilizce\n 5.yonetim\n 6.matematik"<<endl;
            cout<<"Lutfen detayini gormek istediginiz dersi seciniz:";
            cin>>derssecim;
            switch(derssecim){
        case 1:
            cout<<"Algoritma ve Programlamaya Giris: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 2:
            cout<<"Yazili ve Sozlu iletisim: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 3:
            cout<<"Muhasebe: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 4:
            cout<<"ingilizce: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 5:
            cout<<"Yonetim ve Organizasyon: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 6:
            cout<<"İsletme Matematigi: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;


            }

        }
                else if(yeniislem==3){
            cout<<"------------Ders Programiniz: -------------------"<<endl;

            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
            }


        }
                else if(yeniislem==4){
            cout<<"Transkriptiniz: "<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }

            else if(yeniislem==5){
            cout<<"Hes Kodunuz: ------"<<endl;
            cin>>hes;
            cout<<"Hes kodunuz : "<<hes<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }
            }






        else if(secim==2){
            cout<<"-----Secilen Dersler-----\n 1.Algoritma\n 2.Yazili sozlu iletisim \n 3.Muhasebe \n 4.ingilizce\n 5.yonetim\n 6.matematik"<<endl;
            cout<<"Lutfen detayini gormek istediginiz dersi seciniz:";
            cin>>derssecim;
            }
            switch(derssecim){
        case 1:
            cout<<"Algoritma ve Programlamaya Giris: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 2:
            cout<<"Yazili ve Sozlu iletisim: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 3:
            cout<<"Muhasebe: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 4:
            cout<<"ingilizce: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 5:
            cout<<"Yonetim ve Organizasyon: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 6:
            cout<<"İsletme Matematigi: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;


            }

        }
        else if(secim==3){
            cout<<"------------Ders Programiniz: -------------------"<<endl;

                        cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>yeniislem;
            if(yeniislem==1){
                    cout<<"------------DUYURULAR-----------";

            }
            else if(yeniislem==2){
            cout<<"-----Secilen Dersler-----\n 1.Algoritma\n 2.Yazili sozlu iletisim \n 3.Muhasebe \n 4.ingilizce\n 5.yonetim\n 6.matematik"<<endl;
            cout<<"Lutfen detayini gormek istediginiz dersi seciniz:";
            cin>>derssecim;
            switch(derssecim){
        case 1:
            cout<<"Algoritma ve Programlamaya Giris: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 2:
            cout<<"Yazili ve Sozlu iletisim: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 3:
            cout<<"Muhasebe: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 4:
            cout<<"ingilizce: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 5:
            cout<<"Yonetim ve Organizasyon: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 6:
            cout<<"İsletme Matematigi: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;


            }

        }
                else if(yeniislem==3){
            cout<<"------------Ders Programiniz: -------------------"<<endl;

            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
            }


        }
                else if(yeniislem==4){
            cout<<"Transkriptiniz: "<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }

            else if(yeniislem==5){
            cout<<"Hes Kodunuz: ------"<<endl;
            cin>>hes;
            cout<<"Hes kodunuz : "<<hes<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }
            }


            else{
            cout<<"***********iyi gunler dileriz***********"<<endl;
        }


        }
        else if(secim==4){
            cout<<"Transkriptiniz: "<<endl;
                        cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>yeniislem;
        }
            if(yeniislem==1){
                    cout<<"------------DUYURULAR-----------";

            }
            else if(yeniislem==2){
            cout<<"-----Secilen Dersler-----\n 1.Algoritma\n 2.Yazili sozlu iletisim \n 3.Muhasebe \n 4.ingilizce\n 5.yonetim\n 6.matematik"<<endl;
            cout<<"Lutfen detayini gormek istediginiz dersi seciniz:";
            cin>>derssecim;
            switch(derssecim){
        case 1:
            cout<<"Algoritma ve Programlamaya Giris: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 2:
            cout<<"Yazili ve Sozlu iletisim: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 3:
            cout<<"Muhasebe: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 4:
            cout<<"ingilizce: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 5:
            cout<<"Yonetim ve Organizasyon: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;
        case 6:
            cout<<"İsletme Matematigi: \n Kisa Sinav: \n Ara Sinav: \n Final: \n";
            break;


            }

        }
                else if(yeniislem==3){
            cout<<"------------Ders Programiniz: -------------------"<<endl;

            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
            }


        }
                else if(yeniislem==4){
            cout<<"Transkriptiniz: "<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }

            else if(yeniislem==5){
            cout<<"Hes Kodunuz: ------"<<endl;
            cin>>hes;
            cout<<"Hes kodunuz : "<<hes<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }
            }



        else if(secim==5){
            cout<<"Hes Kodunuz: ------"<<endl;
            cin>>hes;
            cout<<"Hes kodunuz : "<<hes<<endl;
            cout<<"Baska islem yapmak istiyor musunuz?"<<endl;
            cout<<"1.Duyurular\n 2.Secilen Dersler\n 3.Ders Programi\n 4.Transkript\n 5.Hes Kodu Guncelleme\n 6.Cikis";
            cin>>secim;
        }
            if(secim==6){
                cout<<"***********iyi gunler dileriz***********"<<endl;
        }


        else{
            cout<<"***********iyi gunler dileriz***********"<<endl;
        }




}


}
}
