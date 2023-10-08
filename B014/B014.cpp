#include <iostream>
using namespace std;
float TinhX(double);
int main()
{
	int x;
	cin >> x;
	cout << TinhX(x);
	return 0;
}
float TinhX(double xx)
{

	double xx2 = xx * xx;
	double xx4 = xx2 * xx2;
	double xx8 = xx4 * xx4;
	double xx16 = xx8 * xx8;
	return xx16 * xx16;
}