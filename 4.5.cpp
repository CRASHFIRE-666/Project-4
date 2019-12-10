#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,b,x;
    cout<<"Введите коэффиценты"<<endl;
    cin>>a>>b;
    x=-b/a;
    cout<<"X="<<x<<endl;
}
