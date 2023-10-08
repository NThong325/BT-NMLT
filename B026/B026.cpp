#include <iostream>
using namespace std;
void HoanVi(int &aa, int &bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}
int main()
{
	int a, b;
	cin >> a >> b;
	HoanVi(a, b);
	cout << "So a:";
	cout << a;
	cout << "\nSo b:";
	cout <<b;
	return 0;
}
