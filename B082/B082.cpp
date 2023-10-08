#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
float TinhS(int xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * sin(xx);
		s = s + t;
		i = i + 1;
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