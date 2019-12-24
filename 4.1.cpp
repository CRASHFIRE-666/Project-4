#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите число" << endl;
    
	double a;
	cin >> a;

    cout << a / 180 << endl;

    return 0;

}
   
