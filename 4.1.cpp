#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a,s;
    cout<<"Введите число"<<endl;
    cin>>a;
    s=a/180*3.14;
    cout<<a<<"="<<s<<"радианов"<<endl;
}
