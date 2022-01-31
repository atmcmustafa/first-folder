#include <iostream>
#include<math.h>
using namespace std;

double hipotenus(double a,double b){
double sonuc=sqrt((a*a)+(b*b));
return sonuc;
}
int main()
{

double x,y;
cout<<"Birinci kenar: " ;
cin>>x;
cout<<"Ikinci kenar: ";
cin>>y;
cout<<"Hipotenus: ";
cout<<hipotenus(x,y);

}
