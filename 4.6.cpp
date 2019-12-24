#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a1, b1, c1, a2, b2, c2, x, y, det, det_x, det_y;

	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	det =a1 * b2 - b1 * a2;
	detx = c1 * b2 - b1 * c2;
	dety = a1 * c2 - c1 * a2;
	x = det_x / det;
	y = det_y / det;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;

}
