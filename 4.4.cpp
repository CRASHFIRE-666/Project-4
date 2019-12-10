#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float v1,v2,s,t,s1;
    cout<<"Ввежите скорости автомобилей и сколько км между ними и время"<<endl;
    cin>>v1>>v2>>s>>t;
    s1=(v1+v2)*t+s;
    cout<<"Расстояние="<<s1<<endl;
}
