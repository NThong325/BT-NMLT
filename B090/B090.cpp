#include <iostream>
using namespace std;
float TinhS(int xx, int nn)
{
	float s = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	int dau = -1;
	while (i <=nn)
	{
		t = t * xx ;
		m = m * i;
		s = s + dau*(float)t/m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}
int main()
{
	int x, n;
	cin >> x >> n;
	cout << "Ket qua:";
	cout << TinhS(x, n);
	return 0;
}