#include <iostream>
#include<cmath>
using namespace std;
float TinhS(int xx)
{
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
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