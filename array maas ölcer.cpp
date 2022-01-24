#include <iostream>

using namespace std;

int main()
{

string isim1="Ahmet";
string isim2="Mustafa";
string isim3="Enes";
string isim4="Tugba";
string isim5="Asiye";

float maas[5];
float ortalamaMaas[5];

cout<<"Lutfen aylik maasinizi yaziniz: "<<endl;

for(int i=0;i<5;i++){
    cin>>maas[i];
}
for(int i=0;i<5;i++){
    ortalamaMaas[i]=maas[i]*12;

    cout<<"Yillik maasiniz: "<<ortalamaMaas[i]<<endl;

}

}
