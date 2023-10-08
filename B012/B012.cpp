#include <iostream>
using namespace std;
float TinhX(int);
int main()
{
	int x;
	cin >> x;
	cout << TinhX(x);
	return 0;
}
float TinhX(int xx)
{

	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	return xx4 * xx2;
}