#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
	double a1, b1, c1, a2, b2, c2, x, y, det, detx, dety;

	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	det =a1 * b2 - b1 * a2;
	detx = c1 * b2 - b1 * c2;
	dety = a1 * c2 - c1 * a2;
	x = detx / det;
	y = dety / det;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	
	

	system("pause");
	return 0;

}
