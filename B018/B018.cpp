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
	double xx6 = xx4 * xx2;
	double xx8 = xx4 * xx4;
	return xx8 * xx6;
}