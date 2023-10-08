#include <iostream>
using namespace std;
float ChuVi(float a, float b, float c)
{
	return a + b + c;
}
int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = (float)sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	float b = (float)sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = (float)sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	cout << "Chu vi:";
	cout << ChuVi(a, b, c);
	return 0;
}
