#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
	double price1, price2, amount1, amount2;

    cout << "Введите килограммы и цену";
	cin >> amount1 >> price1;
	
	cout << "Введите килограммы";
	cin >> amount2;
	
	price2 = price1 * amount2 / amount1;
	
	cout << "Новая цена:" << price2 << endl;
	cout << "Цена 1 килограмма:" << price2 / amount2 << endl;
	
	system("pause");
	return 0;

}
