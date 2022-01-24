#include <iostream>

using namespace std;

int main()
{

int yas[5];

for(int i=0;i<5;i++){
    cout<<"Lutfen "<<i+1<<". ogrencinin yasini giriniz: "<<endl;
    cin>>yas[i];
}
for(int i=0;i<5;i++){
    cout<<i+1<<". ogrencinin yasi: "<<yas[i]<<endl;
}

}
