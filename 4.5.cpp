#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, x;

	cin >> a >> b;

	x = (-b) / a;

	if (a != 0)
	{
		cout << x << endl;
	}
	else
	{
		cout << "НЕВЕРНОЕ ЗНАЧЕНИЕ" << endl;
	}

	
	

	system("pause");
	return 0;

}
