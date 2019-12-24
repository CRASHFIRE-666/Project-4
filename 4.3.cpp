#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2;

    cout << "Введите килограммы и цену";
	
    cin >> y1 >> x1;
	
    cout << "Введите килограммы";
    cin >> y2;
	
    price2 = x1 * y2 / y1;
	
    cout << "Новая цена:" << x2 << endl;
    cout << "Цена 1 килограмма:" << x2 / y2 << endl;
	
    system("pause");
    return 0;

}
