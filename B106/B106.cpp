#include <iostream>
#include<cmath>
using namespace std;
float TinhS(int xx)
{
	float xxx = (xx * 3.14) / 180;
	float s = xxx;
	float t = xxx;
	int m = 1;
	int dau = -1;
	float e = xxx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xxx * xxx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}
	return s;
}
int main()
{
	int x;
	cin >> x;
	cout << "Ket qua:";
	cout << TinhS(x);
	return 0;
}