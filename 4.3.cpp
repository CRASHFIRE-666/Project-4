#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    float x,p,p1,y,py;
    cout<<"Введите X,Y и сколько стоит X конфет "<<endl;
    cin>>x>>p>>y;
    p1=x/p;
    py=y*p1;
    cout<<" 1 кг стоит "<<p1<<" рублей, Y кг стоит "<<py<<" рублей"<<endl;
}
