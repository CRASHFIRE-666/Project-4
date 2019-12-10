#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a1,b1,c1,a2,b2,c2,x,y;
    cout<<"Введите коэффиценты"<<endl;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    x=((c1*b2)-(b1*c2))/((a1*b2)-(a2*b1));
    y=((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));
    cout<<"X="<<x<<", Y="<<y<<endl;
}
