#include <iostream>
using namespace std;
float TinhS(int xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 2;
	int dau = -1;
	while (i <= (2*nn))
	{
		t = t * xx*xx;
		s = s + t *dau;
		i = i + 2;
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