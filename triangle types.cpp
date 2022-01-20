#include <iostream>

using namespace std;

int main()
{

float a,b,c;


cout<<"Ucgenin ic acilarini giriniz:"<<endl;
cin>>a;
cin>>b;
cin>>c;


if(a+b+c==180){

   if(a==60 && b==60 && c==60){
    cout<<"Eskenar Ucgendir";
   }

else if(a==b || a==c || b==c){
    cout<<"ikizkenar ucgendir";
}
else {
    cout<<"cesitkenardir";
}




}

else {
    cout<<"180 olacak sekilde giriniz";
}


}
