#include <iostream>
using namespace std;
float TinhS(int xx, int nn)
{
	float s = 1-xx;
	float t = xx;
	float m = 1;
	int i = 3;
	int dau = 1;
	while (i <= (2*nn+1))
	{
		t = t * xx*xx;
		m = m * i*(i-1);
		s = s + dau * (float)t / m;
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