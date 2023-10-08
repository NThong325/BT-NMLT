#include <iostream>
using namespace std;
float TinhTich(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
int main()
{
	int n;
	cin >> n;
	cout << "Ket qua:";
	cout << TinhTich(n);
	return 0;
}